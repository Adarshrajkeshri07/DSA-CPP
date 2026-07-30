// optmise method....
#include<iostream>

using namespace std ; 
int main(){
    int a[4] = {5,2,7,4} ; 
   int prefix[4] ; 
   prefix[0] = 1 ; 
   int suffix[4] ; 
   suffix[3] = 1 ; 
   int ans = 1 ; 
  for(int i = 1; i < 4 ;i++){
    prefix[i] = prefix[i-1]*a[i-1] ; 
  }
  for(int i = 2 ; i >= 0 ; i--){
    suffix[i] = suffix[i+1] * a[i+1] ; 
  }
  for(int i = 0 ; i < 4 ;i++){
    ans = prefix[i]*suffix[i] ; 
    cout << ans ; 
  }

    return 0 ; 
}