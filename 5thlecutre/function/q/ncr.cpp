#include<iostream>
using namespace std ; 
int fac(int n ){
    int factorial = 1 ; 
    for(int i = 1 ; i <= n ; i++){
        factorial*=i;
    }
    return factorial ;
}
int ncr(int n , int r){
    int d = n - r ;
    int answer = (fac(n)) / ((fac(r)) * (fac(d)));
    return answer ;
}
int main(){
    int n , r ;
    cout << " enter the value of n :";
    cin >> n ;
    cout << " enter the value of r :";
    cin >> r;
    cout << ncr(n,r);
    return 0 ;  
}