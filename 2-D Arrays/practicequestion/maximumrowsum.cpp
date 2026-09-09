#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
   
    int ans = INT_MIN ;  
    for(int i = 0 ; i < rows ; i++){
        int sum = 0;
        for(int j = 0 ; j < cols ; j++){
            sum += a[i][j] ; 
          
        }
        ans = max(sum, ans);
    }
    cout << ans ; 


    return 0;
}  