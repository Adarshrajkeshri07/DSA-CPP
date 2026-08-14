#include<iostream>
using  namespace std ;
int main(){
    int n ;
    int pow = 1;
    int answer = 0 ;
    cout << "enter the value of  n : ";
    cin >> n ; 
    for( ; n > 0;n = n /2){
        int ld = 0 ;
       ld = n % 2 ;
      
        answer+=ld*pow;
        pow = pow *10 ;
       }
       cout << answer ;
       return 0 ;
} 