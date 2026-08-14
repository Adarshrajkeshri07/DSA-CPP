#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the value of n : ";
    cin >> n;
    int ll;
    int sum = n;
    int reverse = 0;
    for (; n != 0; n /= 10)
    {
        ll = n % 10;
        reverse = reverse * 10 + ll;
    }
    cout << sum;
    cout << reverse;  

    return 0;
}