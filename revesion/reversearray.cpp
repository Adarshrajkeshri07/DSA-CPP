#include<iostream>
#include<utility>
#include<climits>
using namespace std ; 
int reverse(int a[] , int size){
    int start = 0 , end = size -1 ;
    while(start < end ){
        swap(a[start] , a[end]) ;
        start++ ;
        end--;
    }
}
int main(){
    int a[5] ; 
    int size = 5 ; 
    cout << " enter the value of element " ; 
    for(int i = 0 ; i < size ; i++){
        cin >> a[i] ; 
    }
    reverse(a , size) ; 
    for(int i = 0 ; i < size ; i++){
        cout <<a[i] << " ";
    }
    return 0 ; 
}
//     Array Average//