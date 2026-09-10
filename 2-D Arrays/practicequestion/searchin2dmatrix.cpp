#include <iostream>
    using namespace std;

// Binary search in a single row
bool binarySearch(int rowArray[], int target, int numberOfElements)
{
    int start = 0;
    int end = numberOfElements - 1;

    while (start <= end)
    {
        int middle = start + (end - start) / 2;

        if (target == rowArray[middle])
        {
            return true;
        }
        else if (target > rowArray[middle])
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    return false;
}

int main()
{
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 17},
        {23, 30, 34, 60}};

    int target = 34;

    int numberOfRows = 3;
    int numberOfColumns = 4;

    // Binary search to find the possible row
    int startRow = 0;
    int endRow = numberOfRows - 1;

    while (startRow <= endRow)
    {
        int middleRow = startRow + (endRow - startRow) / 2;

        // Check whether target can exist in this row
        if (matrix[middleRow][0] <= target &&
            target <= matrix[middleRow][numberOfColumns - 1])
        {
            // Binary search inside the selected row
            if (binarySearch(matrix[middleRow], target, numberOfColumns))
            {
                cout << "valid target";
            }

            return 0 ; 
        }
        else if (target > matrix[middleRow][numberOfColumns - 1])
        {
            startRow = middleRow + 1;
        }
        else
        {
            endRow = middleRow - 1;
        }
    }
    cout << " invalid target" ;

    return 0;
}

