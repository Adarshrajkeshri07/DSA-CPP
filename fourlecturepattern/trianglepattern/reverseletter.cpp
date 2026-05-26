#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << " enter your name : " ; 
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        char k = 'A' + i ;
        for(int j = i ; j >= 0 ; j--){
            cout << k ; 
            k = k - 1 ;
        }
        cout << endl ; 
    }
    return 0 ; 
}