#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &arr)
    {
        // Step 1: Array ko ascending order me sort karo
        // Example: {-1, 0, 1, 2, -1, -4}
        //       -> {-4, -1, -1, 0, 1, 2}
        sort(arr.begin(), arr.end());

        // Answer store karne ke liye 2D vector
        vector<vector<int>> ans;

        int n = arr.size();

        // Step 2: arr[i] ko first element fix karo
        for (int i = 0; i < n; i++)
        {
            // Same first element dobara process na ho
            // Duplicate triplets avoid karne ke liye
            if (i > 0 && arr[i] == arr[i - 1])
                continue;

            // Step 3: Two pointers
            // j = i ke next element par
            // k = last element par
            int j = i + 1, k = n - 1;

            // Jab tak j aur k cross nahi karte
            while (j < k)
            {
                // Teen elements ka sum
                int sum = arr[i] + arr[j] + arr[k];

                // Sum bada hai → k ko left lao
                if (sum > 0)
                {
                    k--;
                }

                // Sum chhota hai → j ko right le jao
                else if (sum < 0)
                {
                    j++;
                }

                // Sum = 0 → valid triplet mil gaya
                else
                {
                    // Triplet ko answer me add karo
                    ans.push_back({arr[i], arr[j], arr[k]});

                    // Dono pointers move karo
                    j++;
                    k--;

                    // j ke duplicate elements skip karo
                    // taaki same triplet dobara na aaye
                    while (j < k && arr[j] == arr[j - 1])
                    {
                        j++;
                    }
                }
            }
        }

        // Saare valid triplets return karo
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> res = sol.threeSum(arr);

    cout << "Valid Triplets:\n";
    for (auto &triplet : res)
    {
        cout << "{ ";
        for (int x : triplet)
            cout << x << " ";
        cout << "}\n";
    }

    return 0;
}

// //
//     COMPLEXITY:

//     Sorting:
//         O(n log n)

//     Outer for loop + Two Pointer:
//         O(n²)

//     Exact Combined Time:
//         O(n log n + n²)

//     Simplified Time:
//         O(n²)

//     Auxiliary Space:
//         O(1)

//     Note:
//         'ans' me output store hone ki wajah se
//         actual output space alag se ho sakti hai.
// //