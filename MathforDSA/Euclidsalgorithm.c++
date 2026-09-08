#include<iostream>
using namespace std ; 
int main(){
    int a , b  ; 
    cout << "enter the value of a and b " ; 
    cin >> a >> b ; 
    int ld ; 
    while( b != 0 ){
        ld = a % b ;
        a = b ;  
        b = ld; 
    }
    cout << a ; 
}