#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    // Step 1: Array ko ascending order me sort karna
    // Example: {-1, 0, 1, 2, -1, -4}
    //      -> {-4, -1, -1, 0, 1, 2}
    sort(arr, arr + n);

    // Step 2: Har element ko first element (a) maan kar
    // baaki 2 elements ko two pointers se find karenge
    for (int i = 0; i < n; i++)
    {
        // Duplicate first element ko skip karna
        // taaki same triplet dobara print na ho
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int a = arr[i];

        // j = next element
        // k = last element
        int j = i + 1, k = n - 1;

        // Step 3: Two Pointer approach
        while (j < k)
        {
            // Teen numbers ka sum
            int sum = a + arr[j] + arr[k];

            // Sum chhota hai → j ko aage badhao
            if (sum < 0)
            {
                j++;
            }

            // Sum bada hai → k ko peeche lao
            else if (sum > 0)
            {
                k--;
            }

            // Sum 0 hai → Triplet mil gaya
            else
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << "\n";

                // Current values save kar rahe hain
                // duplicate values skip karne ke liye
                int val_j = arr[j], val_k = arr[k];

                // j ke duplicate elements skip
                while (j < k && arr[j] == val_j)
                    j++;

                // k ke duplicate elements skip
                while (j < k && arr[k] == val_k)
                    k--;
            }
        }
    }

    return 0;
}

/*
    COMPLEXITY:

    1. sort(arr, arr + n)
       -> O(n log n)

    2. Outer for loop + Two Pointer while loop
       -> O(n²)

    Exact Combined Time Complexity:
       -> O(n log n + n²)

    Simplified Big-O:
       -> O(n²)

    Space Complexity:
       -> O(1) auxiliary space
*/