#include<iostream>
using namespace std ;
unsigned long long sum(unsigned long long n ){
    unsigned long long sum = 0;
    unsigned long long ld;
    for( ; n!=0 ;  n = n /10){
        ld = n % 10 ; 
        sum+=ld;
    }
    return sum  ; 
}
int main(){
    unsigned long long  n;
    cout<< " enter the value of n : " ; 
    cin >> n ; 
    cout << sum(n);
    return 0 ; 
}