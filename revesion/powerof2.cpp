#include<iostream>
using namespace std ; 
int main(){
    int a = 2 ; 
    int x ; 
    cout << " enter the value of x :" ;
    cin >> x  ;
    bool found ; 
    found =  true ; 
    while(x > 1){
        if(x % 2 != 0){
            found = false ;
            break;
        }
        x/=2;
    }
    if(found ==  true ){
        cout << " the value is the power of 2" ; 
    }else 
    cout << " invalid" ; 
    return 0 ; 
}