#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {2,2,1,1,1,3} ; 
    int freq = 0 ; 
    int ans = a[0] ; 
    for(int i = 1; i < 6 ; i++){
        if(freq == 0){
            ans = a[i] ; 
        }
        if(a[i]==ans){
            freq++;
        }else 
            freq--;
        
    }
    freq = 0 ; 
    for(int i = 0 ; i < 6 ; i++){
        if(ans == a[i]){
            freq++ ; 
        }
    }
    if(freq >= 3){
        cout << ans ; 
    }
    else {
        cout << " not found " ; 
    }

   
    return 0 ; 
}