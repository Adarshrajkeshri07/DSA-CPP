#include<iostream>
using namespace std ; 
int main (){
    int n ; 
     cout << " enter the value of n : " ; 
     int ans = 1 ; 
     cin >> n ; 
     for(  ; n > 1 ; n/=3){
        if(n%3!=0){
            ans = 0 ; 
        }
     }
     if(ans==1){
        cout <<" valid " ; 
     }
     else 
     cout << " unvalid " ; 
     return 0 ;
}