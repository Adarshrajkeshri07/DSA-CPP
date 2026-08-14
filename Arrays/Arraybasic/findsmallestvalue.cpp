#include<iostream>
using namespace std ; 
int main(){
    int n ; 
  
    int a[5];
    int smallest = a[0];
    cout <<" enter the value of arry " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i] ;
    }
    cout <<" the smallest value of the array is : " ; 
    for(int i = 0 ; i < 5 ; i++){
        if(smallest > a[i]){
            smallest = a[i];
        }
    }
    cout<< smallest << " " ;
    return 0 ;
}