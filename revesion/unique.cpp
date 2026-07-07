#include<iostream>
using namespace std ; 
int main(){
    int a [ 5 ] = { 21,4,65,4,21};
    int index = 5 ; 
     int ans = 0 ; 
    for(int i = 0 ; i < 5 ;i++){
        ans^=a[i];
    }
    cout << ans ; 
    return 0 ;
}