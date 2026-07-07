#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >> n ;
    int ld = 0;
    int ll;
    int sum = 0 ;
    int reverse = 0;
    int pow = 1; 
    for( ; n!=0 ; n/=10){
        ld = n % 10 ;
         ld = ld * pow  ;
         pow*=10;
         sum += ld ;
         ll = n % 10;
         reverse = reverse * 10 + ll;
    }
    cout << sum ;
    cout << reverse;

   
   
    return 0 ; 
}