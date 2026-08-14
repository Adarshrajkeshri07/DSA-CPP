#include<iostream>
using namespace std ;
int prime(int n ){
    int m ; 
    if(n < 1){
        m = 1 ;
    }
    for(int i = 2 ; i < n ; i++){
        m = 0 ;
        for(int j = 2 ; j < i ; j++){
            if( i % j == 0){
                m = 1 ;
            }
        }
        if(m==0){
            cout << i << " "; 
        }
    }
}
int main(){
    int n ; 
    cout << "  enter the value of n : " ; 
    cin >> n ;
    prime(n);
    return 0 ; 
}