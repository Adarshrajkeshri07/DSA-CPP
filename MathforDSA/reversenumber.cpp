#include<iostream>
using namespace std ; 
void reverse(int n){
    int ld , rev = 0  ; 
    while(n != 0){
        ld = n % 10 ; 
        rev = rev * 10 + ld ; 
        n /= 10 ; 
    }
    cout << rev ; 
}
int main(){
    int n  ; 
    cout << "enter the value of n : " ; 
    cin >> n ; 
    reverse(n); 
    return 0 ; 
}