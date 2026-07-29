#include<iostream>
using namespace std ;
int main(){
    int a[4] = {1,2,3,4} ; 
   
    int neww ; 
    for(int i = 0 ; i < 4 ; i++){
        int ans = 1;
        for(int j = 0 ;  j < 4 ; j++){
            if(i!=j){
                ans*=a[j] ; 
            }
        }
        cout << ans ; 
    }
    return 0 ;
   
}