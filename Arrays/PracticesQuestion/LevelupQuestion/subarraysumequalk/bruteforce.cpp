#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int a[6] = {9,4,20,3,10,5} ;
    int n = 6 ; 
    int  vote = 0 ; 
    int target = 33 ; 
 for(int i = 0 ; i < n ; i++){
    for(int j = i ; j < n ; j++){
        int sum = 0 ;
        for (int k = i; k <= j; k++)
        {
            sum += a[k] ; 
          
        }
        if (sum == target)
        {
            vote++;
        }
    }
 }
 cout << vote ; 
    return 0 ; 
}