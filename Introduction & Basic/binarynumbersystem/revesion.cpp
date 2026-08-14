#include<iostream>
using namespace std ; 
int binary(int decimal){
 int   ans , pow ,ld  ; 
 ans = 0 ;
    pow = 1 ;
    ld = 1 ;
for(  ; decimal != 0   ; decimal/=2){
    ld = decimal % 2 ;
     ld*=pow;
     pow*=10;
     ans += ld ;

}
return ans ; 
}
int main(){
    int n ;
 cout << " enter the value of n : ";
 cin >> n ; 
 for(int i = 1 ; i <= n ; i++){
    cout << binary(i) << " " ; 
 }
 return 0 ; 

}