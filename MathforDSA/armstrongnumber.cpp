#include<iostream>
using namespace std ; 
bool isarmstrong(int n){
    int temp = n ; 
    int ld ;
    int sum = 0 ;  
    while(n != 0){
        ld = n % 10 ; 
        int cubeofld = ld*ld*ld;
        sum += cubeofld ; 
        n /= 10 ; 
    }
    // return sum == temp ; 
    if(temp == sum){
        return true ; 
    }else {
        return false;
    }
}
int main(){
    int n = 153 ; 
    if(isarmstrong(n)){
        cout << "armstrong number" ; 
    }else {
        cout << " not satisfy number" ; 
    }
    return 0 ; 
}