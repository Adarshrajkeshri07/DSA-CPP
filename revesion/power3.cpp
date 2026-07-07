#include<iostream>
using namespace std ; 
int main(){
    int a = 3 ; 
    int x ; 
    cout << " enter the value of x  : " ; 
    cin >> x ; 
    bool found; 
    found = false ; 
    while(x > 1 ){
         if (x % 3 != 0 ){
            found = true ; 
            break;
         }
         x/=3 ;
    }
    if(found==false){
        cout << " yes" ; 
    }else
     cout << " not" ; 
     return 0 ; 
}