#include<iostream>
using namespace std ; 
int fac(int n ){
    int fact = 1 ;
    for(int i = 1 ; i <= n  ; i++){
        fact *= i ;
    }
    return fact ;

}
int main(){
int n ;
cout << " enter the value of n :" ; 
cin >> n ; 
cout << " the factorial of "<< n << " is  = "<< fac(n) ;
return 0 ;  
} 