#include<iostream> 
using namespace std ;
int main(){
    int n ; 
    cout << " enter the value of n :" ;
    cin >> n ; 
    int prime ;
    for(int i = 2 ; i < n ; i++){
     prime = 1 ;
     for(int j = 2 ; j < i ; j++){
        if(i % j==0){
            prime=0;
        }
     
     }
     if (prime == 1)
     {
         cout << i << " ";
     }
    }
    return 0 ;
}