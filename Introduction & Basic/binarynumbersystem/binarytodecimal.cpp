#include<iostream>
using namespace std ;
int decimal(int binary){
    int ans = 0 ; 
    int pow = 1 ;
    int ld = 0 ; 
  for( ; binary >0 ; binary/=10){
    ld = binary % 10 ; 
    ld*=pow;
    pow*=2;
    ans+=ld;
  }
  return ans ; 
}
int main(){
    int n ; 
    cout << " enter the value of n :" ; 
    cin >> n ; 
    cout << decimal(n);
    return 0 ; 
}