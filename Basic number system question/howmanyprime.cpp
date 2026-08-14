#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout << "enter the value of n : " ;
    cin >> n ;
    bool found ; 
    int how  = 0 ; 
    if(n < 1){
        found = true ; 
    }
    for(int i = 2 ; i < n ; i++){
        found = false ; 
        for(int j = 2 ; j *j <= i ; j++){
            if(i % j == 0 ){
                found = true ; 
                break;
            }
        }
        if(found==false){
            cout << i<< " " ; 
            how+=1;
        }
    }
    cout << " the number of the prime number is : " <<  how ;
    return 0 ;
    
}