#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] ; 
    int n ; 
    int maxsize = 5 ; 
    int maximumvalue = INT_MIN;
    cout << maximumvalue << endl; 
    cout << " enter the value of the element " ; 
    for(int i = 0 ; i < maxsize ; i++){
        cin >>  a[i] ; 
    }
    for(int i = 0 ; i < maxsize ; i++){
        if(a[i]>maximumvalue){
            maximumvalue = a[i];
            n = i  ; 
        }
    }
    cout << " the maximumvalueimum element is = " << maximumvalue ; 
    cout << " \n" ;
    cout << " the maxsize value is" << n  ;    return 0 ;  
}