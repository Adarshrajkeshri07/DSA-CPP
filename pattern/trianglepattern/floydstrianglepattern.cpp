#include<iostream>
using namespace std ; 
int main(){
    int n ; 
     cout << " enter the number n : "; 
     cin >> n ; 
     int k , j , i ; 
      k = 1 ; 
      for( i = 0 ; i < n ; i++){
        for(j = 0 ; j <= i ; j++){
            cout << k <<" " ; 
            k = k + 1; 
        }
        cout <<"\n";
      }
    return 0 ;
}