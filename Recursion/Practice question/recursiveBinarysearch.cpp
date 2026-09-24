#include<iostream>
#include<vector>
using namespace std ; 
int binarysearch(vector<int> arr, int target , int st , int end){
     if(st <= end){
    int mid = st + (end- st) / 2 ; 
    if(arr[mid] == target){
        return mid ; 
    }
    else  if(arr[mid] <= target){
       return binarysearch(arr , target , mid + 1 ,end ) ; 
    }
    else {
        return binarysearch(arr , target ,st, mid - 1);
    }
}
return -1 ;
}
int main(){
     vector<int> a = {2,5,7,9,12} ;
     int st = 0 , end = a.size() - 1; 
     int ans = binarysearch(a,9,st ,end) ;
     cout << ans ;
     return 0 ; 
}
// Time Complexity: O(log n)
// Har call mein search space half ho jata hai.

// Space Complexity: O(log n)
// Recursion ke call stack ki wajah se.