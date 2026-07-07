#include<iostream>
using namespace std ;
int main(){
    int n ; 
    int isprime ; 
    int i ;
     cout << "  enter the value of n :" ; 
     cin >> n ; 
    for( i = 2 ; i < n ; i++){
         isprime = 1 ; 
        for(int j = 2 ; j < i ;j++){
            if(i  % j == 0 ){
                isprime = 0 ;
            }
        }
        if (isprime == 1)
        {
            cout << i << " ";
        }
    }
   
    return 0 ;
}