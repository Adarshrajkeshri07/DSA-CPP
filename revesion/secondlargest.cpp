#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] ; 
    int size =5 ; 
    int largest = INT_MIN ; 
    int secondlargest = INT_MIN ;
    cout <<  " enter the value of element : " ;
    for(int i = 0 ; i < size ; i++){
        cin >> a[i] ; 
    }
    for(int i = 0 ; i < size ; i++){
        if(a[i] > largest ){
            secondlargest = largest ;
            largest = a[i];
         }
         else if(secondlargest <  a[i] && largest > a[i]){
            secondlargest= a[i];
         }
    }
    cout << secondlargest ; 
    return 0 ; 
}