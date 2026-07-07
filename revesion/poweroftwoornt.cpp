#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout <<" enter the value of n :" ; 
    cin >> n ; 
    int a = 0 ;
    for(  ; n > 1 ; n/=2){
         if(n % 2 != 0 ){
            a = 1 ;
            break;
         }else 
         a = 0 ;
    }
    if(a==0){
        cout << "  the number is corret . " ;
    }
    else  
    cout <<" the number is not correst " ; 
    return 0 ;
}