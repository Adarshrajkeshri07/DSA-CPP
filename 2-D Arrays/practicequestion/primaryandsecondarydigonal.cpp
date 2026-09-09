
// timecomplexity is O(n)
#include <iostream>
#include <algorithm>
using namespace std;
int digonalsum(int a[][4], int n)
{
    int disum = 0;
    for (int i = 0; i < n; i++)
    {
        disum += a[i][i];
        if (i != n - 1 - i)
        {
            disum += a[i][n - 1 - i];
        }
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
    int ans = digonalsum(a, 4);
    cout << ans;
    return 0;
}

// timecomplexity is O(n x n)

    // #include<iostream>
    // #include<algorithm>
    // using namespace std ;
    // int digonalsum(int a[][4] , int n){
    //     int disum = 0 ;
    //     for(int i = 0 ; i < n ; i++){
    //         for(int j = 0 ; j < n ; j++){
    //             if(i == j){
    //                 disum += a[i][j] ;
    //             }else  if(j == n - 1 - i){
    //                 disum += a[i][j] ;
    //             }
    //         }
    //     }
    //     return disum ;  ////

    // }
