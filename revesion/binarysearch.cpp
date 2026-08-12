#include<iostream>
using namespace std ; 
int main(){
     int arr[7] = { 1, 3, 5, 7, 9, 11, 13 };
     int st = 0 , end = 6 ; 
     int target = 9 ; 
     while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(arr[mid] == target){
            cout << mid ; 
            return 0 ;
        }
        if(arr[mid] > target){
            end = mid - 1 ; 
        }else 
        if(arr[mid] < target){
            st = mid + 1 ; 
        }
     }
     cout << " invalid " ; 
     return 0 ; 
}