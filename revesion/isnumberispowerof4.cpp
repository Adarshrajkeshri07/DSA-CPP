#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout << " enter the value of n : ";
    cin >> n;
    bool found ; 
    found =  true ; 
    while(n > 1){
        if(n % 4 != 0){
            found = false ; 
            break;
        }
        n/=4;
    }
    if(found == true){
        cout<<" the number is  write" ;
    } else
    cout << " failed" ;
    return 0 ; 
}