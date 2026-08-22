#include <iostream>
using namespace std;
int fact(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{

    int n;
    cout << " enter the value of n : ";
    cin >> n;
    int r;
    cout << " enter the value of r : ";
    cin >> r;
    int bio = fact(n) / ((fact(r) * fact(n - r)));
    cout << bio;
    return 0;
}