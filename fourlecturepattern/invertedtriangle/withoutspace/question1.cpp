#include<iostream>
using namespace std ; 
int main(){
    int n  = 4 ; 
    int k = 1 ; 
    for( int  i = 4 ; i > 0 ; i--){
        for(int j = i ; j > 0; j--){
            cout << k ; 
        }
        k = k + 1 ; 
        cout << "\n" ; 

    }
    return 0 ;
}