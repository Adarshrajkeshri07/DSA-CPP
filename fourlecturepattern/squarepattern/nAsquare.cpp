#include<iostream>
using namespace std ;
int main(){
    int i , j , n ; 
    cout <<" enter the value of n : " ;
    cin >> n ;
    char k = 'A' ;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout << k << " ";
            k = k + 1 ; 
        }
        cout << "\n" ;
    } 
    return 0 ; 

}