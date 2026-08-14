#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5];
    int min = INT_MAX;
    int max = INT_MIN ;
    cout << " enter the value of elements : " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i] ; 
    }
    for(int i = 0 ; i < 5 ; i++){
        if(max<a[i]){
            max = a[i];
        } 
        if(min > a[i]){
            min = a[i] ;
        }
    }
    cout << max * min ;
    return 0 ; 

}