#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout << "enter the value of n : " ; 
    cin >>  n ; 
    int sum = 1 ;
    for(int i = 2 ; i*i <= n ; i++){
            if( n % i == 0){
                sum += i ; 
                if( i != n / i){
                    sum += n/i ; 
                }
            }
    }
    cout << sum ; 

}