//brute force approch ....
#include<iostream>
#include <climits>
using namespace std ; 
int main(){
    int a[7] = {3,-4,5,4,-1,7,-8};
   int maxsum = INT_MIN; ;
    for(int i = 0 ; i < 7 ; i++){
        int sum = 0;
        for(int j = i ; j < 7 ; j++){
        sum+=a[j];
     if(maxsum < sum){ /// we also use maxsum = max(sum , maxsum) ; 
        maxsum =  sum ; 
     }
            
        }
    }
    cout << maxsum ; 

  
       
    
    return 0 ; 
}