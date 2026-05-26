#include<iostream>
int main(){
    int n ,  fac , i ;
    fac = 1 ; 
    std:: cout << " enter the value of n  : ";
    std:: cin >> n ; 
    for(i = 1 ; i <= n ; i++){
        fac*=i;
    }
    std::cout << fac ; 
    return 0 ;
}