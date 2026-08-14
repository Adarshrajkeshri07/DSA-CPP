#include<iostream>
int main(){
    int n ,a = 1  ; 
    std :: cout <<" enter the number n : " ;
    std :: cin >> n ;
     if(n<=0){
        a = 0 ;
     }
    for(int i  = 2 ; i < n ; i++){
       if(n%i==0){
        a = 0 ;
        break;
       }
    }
    if(a==1){
        std:: cout <<"the number is prime number ." ;
    }
    else  std:: cout  <<" the number is not a prime number ." ;
    return 0 ; 
}