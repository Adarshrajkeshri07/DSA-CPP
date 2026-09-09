#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(vector<vector<int>> &matrix)

{
    //rows => matrix.size()  ;
    //cols => matrix[i].size()  ;
    //cols => matrix[0].size()  ;
    int n = matrix.size();
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Main diagonal
        sum += matrix[i][i];

        // Secondary diagonal
        if (i != n - 1 - i)
        {
            sum += matrix[i][n - 1 - i];
        }
    }

    return sum;
}

int main()
{
    vector<vector<int>> matrix = {
        {12, 5, 8, 3},
        {7, 15, 2, 10,12,14,14},
        {4, 9, 20, 6},
        {11, 1, 13, 18}}; /// we add extra element in row in vector 2d martix 

    cout << diagonalSum(matrix);

    return 0;
}