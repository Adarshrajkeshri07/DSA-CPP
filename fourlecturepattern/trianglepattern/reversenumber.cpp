#include<iostream>
using namespace std ;
int main(){
     int n ; 
     cout << " entert the value of n : ";
     cin >> n ; 
     for(int i = 0 ; i < n ;i++){
        int k = 1 + i ;
        for(int j = 1 + i ; j > 0 ; j--){//j = i + 1 ; initialized j < 0 tak condition and cout j ; 
            cout << j ; 
            // k = k - 1 ;
        }
        cout << endl ;
     }
    return 0 ; 
}