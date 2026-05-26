#include<iostream>
int main(){
    int n ;
    bool  prime = true; 
    std::  cout << " enter the value of the n : " ;
    std :: cin >> n ; 
    if(n<=0){
        prime = false ;
    }
    for(int i = 2 ;  i*i <= n ; i++){
        if(n%i==0){
      prime = false ;
            break;
        }
    }
    if(prime==true){
        std:: cout << " the number is prime number " ;
    }else 
    std:: cout << " the nmber is not a prime number " ;

    return 0 ; 
}