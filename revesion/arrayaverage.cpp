#include<iostream>
using namespace std ; 
int main(){
    int a[5] ; 
    int sum = 0  ;
    int average ; 
    cout << " enter the value of element " ;
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i] ; 
    }
    for(int i = 0 ; i < 5 ; i++){
      sum+=a[i] ;
    }
    average = sum / 5 ; 
    cout << average ; 
    return 0 ;
}