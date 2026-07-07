#include<iostream>
using namespace std ; 
int main(){
    int a[5] ; 
   
    cout << " enter the value of element " ; 
    for(int i = 0 ; i < 5 ; i++){
         cin >> a[i];
    }
    int index = 0; 
     int smallest = a[0];
     for(int i = 0 ; i < 5 ; i++){
        if(smallest > a[i]){
            smallest = a[i];
            index = i ; 
        }
     }
     cout << smallest ; 
     return 0 ; 
}