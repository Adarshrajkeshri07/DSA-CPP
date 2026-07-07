#include<iostream>
using namespace std ; 
void prime(int n ){
    int a = 1 ;
    if(n<=1){
        a = 0 ;
    }
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0 ){
            a = 0 ; 
             break; 
        }
    }
    if (a == 1)
    {
        cout << " the number is prime number .";
    }
    else
        cout << " the number is not a prime number .";
}
int main(){
    int a ; 
    cout << "  enter the value of a :: " ; 
    cin >> a ; 
    prime(a);
    return 0 ;
}