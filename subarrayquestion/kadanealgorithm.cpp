#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] = {-1,-2,-6,-9,-8};
    int maxsum = INT_MIN ;
    int sum = 0;
    for(int i = 0 ; i < 5 ; i++){
       
         sum+=a[i];
        maxsum = max(sum , maxsum) ;
            if(sum < 0 ) {
                sum = 0 ;
            
        }
    }
    cout << maxsum ;
    return 0 ; 
}