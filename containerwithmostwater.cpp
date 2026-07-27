#include<iostream>
#include<climits>
using namespace std ; 
int maxwater(int a[] , int size){
    int st = 0  , end = size - 1 ; 
    int maxi = 0  ;  
    while(st < end){
    int height = min(a[st] , a[end]) ;
    int width = end - st ; 
    int area = height*width ;
    maxi = max(area , maxi) ; 
    if(a[st]<a[end]){
        st++;
    }else
    end--;
    }
   return maxi ; 
}
int main(){
    int a[9] = {1,8,2,5,7,9,8,7,2} ; 
    int size = 9 ; 
   int ans =  maxwater(a,size) ; 
    cout << ans ; 
    return 0 ; 
}