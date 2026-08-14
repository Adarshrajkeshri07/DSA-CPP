#include<iostream>
using namespace std ; 
int main(){
    int a ; 
    int ld ; 
    int rev = 0   ; 
    cout << " enter the value of a : " ; 
    cin >> a ; 
    int match = a ; 
    for( ; a!=0 ; a/=10){
        ld= a % 10 ; 
        rev = rev * 10 + ld ; 
    }
  if(rev == match){
    cout << " the number is palindrome number "; 
  }else 
  cout << " the number is not a palindrome number" ; 
  return 0 ;
}