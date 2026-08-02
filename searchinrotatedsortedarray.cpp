#include<iostream>
using namespace std ;
int main(){
    int a[8]={3,4,5,6,7,0,1,2} ; 
    int size = 8 ; 
    int target = 0 ; 
    int st = 0 , mid , end = size - 1 ; 
    while (st <= end)
    {
      mid =  st + (end - st)/2 ; 
      if(a[mid]==target){
        cout << mid ; 
        return 0 ; 
      }
      if(a[st]<=a[mid]){
        if(a[st]<=target && target < a[mid]){
           end = mid - 1 ; 
        }else {
            st = mid + 1 ; 
        }
      }else if(a[mid] <= a[end]) {
        if(a[mid] < target && target <= a[end]){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
      }
     
    
}
return -1;
}