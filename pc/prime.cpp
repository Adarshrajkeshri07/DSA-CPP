#include<iostream>
using namespace std ; 
int prime(int n ){
    int k = 0 ;
    if(n < 1){
        k = 1 ;
    }
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0 ){
            k = 1 ;
            break; 
        }
    }
  if(k==0){
    cout << " prime " ;
  }else cout <<" no " ; 
}
int main (){
    int n ; 
     cout << "  enter number : " ; 
     cin >> n ; 
     prime(n);
     return 0 ; 
}