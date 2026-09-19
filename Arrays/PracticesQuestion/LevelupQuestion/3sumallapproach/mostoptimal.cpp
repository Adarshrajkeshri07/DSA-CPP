#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[6] = {-1, 0, 1, 2, -1, -4};
    int n = 6;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int a = arr[i];
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = a + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                
                cout << arr[i] << " " << arr[j] << " " << arr[k] << "\n";

                int val_j = arr[j], val_k = arr[k];
                while (j < k && arr[j] == val_j)
                    j++;
                while (j < k && arr[k] == val_k)
                    k--;
            }
        }
    }
    return 0;
}
