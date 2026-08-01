#include<iostream>
#include<algorithm>
/// binary search  apply when the array is sorted..
using namespace std ;
int main(){
    int a[8] = {-1, 0, 3, 4, 5, 9, 12 ,10};
    int size = 8;
    int mid;
    int target = 12 ;
    int st = 0 , end = size - 1 ; 
    while ((st <= end ))
    {
        mid = ((st + end)/2) ;
        if(a[mid] > target){
            end = mid - 1 ; 
        } else 
        if(a[mid]<target){
            st = mid + 1 ; 
        }else 
        if(a[mid]==target){
            cout << mid  << " the value is " << a[mid]; 
            return 0  ; 
        }

    }
    cout << " element no found" ;

    return 0 ; 
    
   

}


