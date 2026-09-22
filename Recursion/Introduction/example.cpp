#include<iostream>
using namespace std ; 
void printnumber(int n){
   if(n == 1) {cout << n ; return  ; }
   cout << n << " " ;
   printnumber(n-1) ;     
}
int main(){
    int n = 10 ; 
    printnumber(n) ; 
    return 0 ; 
}