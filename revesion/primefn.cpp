#include<iostream>
using namespace std ; 
void prime(int n ){
    int prime ;
    cout << " the prime numbers are : " ;
    for (int i = 2; i < n; i++)
    {
        prime = 1 ;
        for(int j = 2 ; j < i ; j++){
            if(i % j == 0){
                prime=0;
            }
        }
        if(prime==1){
          cout  <<" " << i <<" " ; 
        }
    }
    
}
int main(){
    int n ; 
     cout << " enter the value of the n : " ; 
     cin >> n ; 
     prime(n);
     return 0 ;
}