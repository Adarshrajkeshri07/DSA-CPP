#include<iostream>
using namespace std ; 
int main(){
    int a[5] ; 
    int sum = 0 ; 
    cout << " enter the value of element : " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i] ; 
    }
    for(int i= 0 ; i < 5 ; i++){
        sum+=a[i] ; 
    }
    cout << sum ; 
    return 0 ; 

}