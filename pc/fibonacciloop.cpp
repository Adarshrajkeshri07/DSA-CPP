#include<iostream>
using namespace std ; 
int main(){
    int a , b , n ;
    a = 0 , b = 1 ; 
    cout << " enter the value of n : " ; 
    cin >> n ; 
    int sum = 0 ; 
    cout << a << b ;
    if(n==1){
        cout << 1 ;
    }else if(n>1){
        for (int i = 2; i < n; i++)
        {
            sum = a + b;
            cout << sum;
            a = b;
            b = sum;
        }
    }
    return 0 ; 
}