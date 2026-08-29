#include<iostream>
using namespace std ;
int main(){
    int n  ; 
    cout << " enter the value of n :" ; 
    cin >> n ; 
   int sum = 0 ; 
    for(int i = 2 ; i <= n ; i++){
        bool match  = true ; 
        for(int j = 2 ; j*j <= i ; j++){
            if( i % j == 0 ){
                match = false ; 
                break;
            }
        }
        if(match){
            sum += i ; 
        }
    }
    cout << sum ; 
    return 0 ; 
}