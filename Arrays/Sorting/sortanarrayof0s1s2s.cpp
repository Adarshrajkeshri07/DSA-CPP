#include<iostream>
using namespace std ; 
int main(){
    int a[10] = {2,0,2,1,1,0,1,2,0,0} ;
    int n = 10 ; 
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]) ; 
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
}