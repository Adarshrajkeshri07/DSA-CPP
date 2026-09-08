 #include<iostream>
#include <cmath>
using namespace std;
void printdigit(int n)
{
    int ld  ; 
    int sum = 0 ; 
    int count = 0 ; 
    while(n != 0 ){
        ld = n  % 10 ; 
        cout << ld << " " ; 
        count++ ; 
        sum += ld ; 
        n  /= 10 ; 
    }
    cout << endl ; 
    cout <<"the number of digits are : " << count  << endl; 
    cout <<"the sum of digits are : " << sum; 
 }
 int main(){
    int n ; 
    cout << " enter the value of n :-  " ;
    cin >>  n ; 
    // printdigit(n) ; 
    ///we use instead of digit count log10(n) + 1 function ;
    cout << (int)(log10(n)+1) ; 
    return 0 ; 

 }