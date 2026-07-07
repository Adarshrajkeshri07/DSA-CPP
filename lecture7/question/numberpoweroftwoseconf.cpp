#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >> n ; 
    if(n>0  && (n&(n-1)==0)){
        cout<< " the number is the power of 2 " ; 
    }
    else 
    cout << " the number is the not power of 2 " ; 
    return 0 ; 
}