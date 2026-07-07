#include<iostream>
using namespace std ; 
int main(){
    int a[5];
    cout << "  enter the value of the element : " ; 
    for(int i = 0 ; i < 5 ;i++){
        cin >> a[i] ;           
    }
    int smallest = a[0] ; 
    cout << " the smallest element is  : " ; 
    for(int  i = 0 ; i  < 5 ;i++){
        if(smallest > a[i]){
            smallest = a[i] ;
        }
    }
    cout << smallest <<" " ; 
    return 0 ;
}