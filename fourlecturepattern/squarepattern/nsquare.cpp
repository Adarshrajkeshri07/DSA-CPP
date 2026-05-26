#include<iostream>
using namespace std;
int main(){
     int i , j , n ;
     cout << " enter n : " ;
      cin >> n ;
      int k = 1;
      for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            cout << k <<" " ;
            k = k+1 ;
        }
        cout << "\n" ; 
      }
      cout << k ;
    return 0 ; 
}