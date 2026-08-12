#include<iostream>
using namespace std ; 
int main(){
    int a[9] = {1, 2, 3, 5, 7, 9, 6, 4, 2};
    int st = 1 , end = 7 ; 
    while(st <= end){
        int mid = st + (end - st) / 2  ; 
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1]){
            cout << mid ; 
            return 0 ; 
        }
        if(a[mid]>a[mid-1]){
            st = mid + 1 ;
        }else {
            end = mid - 1 ; 
        }
    }
}