#include<iostream>
#include<climits> 
using namespace std ; 
bool ispossible(int a[] , int n ,int m ,int mid) ;
int main(){
    int a[4] = {2,1,3,4};
    int st = a[0] ; 
    int end = a[0] ; 
    int ans = -1 ; 
    for(int i = 1 ; i < 4 ; i++){
        st = max(st , a[i]) ; 
        end += a[i];
    }
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(ispossible(a,4,2,mid)){
            ans = mid ; 
            end = mid -  1 ; 
        }else {
            st = mid + 1 ; 
        }
    }
    cout << ans ; 
    return 0 ; 
}
bool ispossible(int a[], int n, int m, int mid){
    int people = 1 , page = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(page + a[i] <= mid){
            page += a[i] ; 
        }else {
            people++ ;
            page = a[i] ;
        }
    }
    if(people <= m){
        return true ;
    }else {
        return false;
    }
}