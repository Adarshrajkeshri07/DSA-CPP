#include<iostream>
using namespace std ; 
int main(){
    int a[9] = {2,0,1,2,0,1,1,0,2} ;
    int n = 9 ;
    int low = 0, mid = 0 , high = n - 1 ;
    while(mid <= high){
        if(a[mid]==0){
            swap(a[mid],a[low]) ;
            mid++,low++ ;
        }
        else 
        if(a[mid]==1){
            mid++;
        }
        else {
            swap(a[high],a[mid]) ;
            high--;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
    return 0 ; 
}