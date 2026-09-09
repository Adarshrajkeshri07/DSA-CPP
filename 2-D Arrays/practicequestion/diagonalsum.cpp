/*
    Diagonal Sum:
    Main diagonal ke elements ka sum nikalne ke liye
    a[i][i] use karte hain, kyunki row aur column dono same hote hain.
*/

#include <iostream>
using namespace std;

int diagonalsum(int a[][4], int n)
{
    int disum = 0;

    for (int i = 0; i < n; i++)
    {
        disum += a[i][i];
    }

    return disum;
}

int main()
{
    int a[4][4] = {
        {12, 5, 8, 3},
        {7, 15, 2, 10},
        {4, 9, 20, 6},
        {11, 1, 13, 18}};

    int ans = diagonalsum(a, 4);

    cout << ans;

    return 0;
}