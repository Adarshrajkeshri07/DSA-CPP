#include<iostream>
#include<climits>
using namespace std ; 
int columnsum(int a[][3] , int rows , int cols){
    int maxcolsum = INT_MIN ; 
    for(int i  = 0 ; i < cols ; i++){
        int colsum = 0 ; 
        for(int j = 0 ; j <rows ; j++){
            colsum+= a[j][i] ; 
        }
        maxcolsum = max(colsum , maxcolsum);
    }
    return maxcolsum ; 
}
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

  int ans = columnsum(a,3,3) ; 
  cout << ans ; 
    return 0;
}