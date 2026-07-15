#include<iostream>
using namespace std ; 
int main(){
    int a[5] ; 
    int size = 5  ; 
    int minindex ; 
    cout << " enter the value of element : " ; 
    for(int i = 0 ; i < size ; i++){
        cin >> a[ i ] ; 
    }
    int smallest = a[0];
    for(int i = 0 ; i < size ; i++){
        if(smallest > a[i]){
            smallest = a[i] ;
            minindex = i ; 
        }
    }
    cout << " the minimum element is  = " << smallest ; 
    cout << "\n" ; 
    cout << " the minimum index is : " << minindex ; 
    return 0 ; 
}