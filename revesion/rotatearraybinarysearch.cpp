#include<iostream>
using namespace std ; 
int main(){
    int a[7] = {4,5,6,7,0,1,2};
    int target ; 
     cout << "enter the value of target : " ; 
     cin >> target ; 
    int st = 0 , end = 6 ; 
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] == target){
            cout << mid ; 
            return 0 ; 
        }
       if(a[st]<=a[mid]){
        if(a[st] <= target &&  target < a[mid]){
            end = mid - 1 ; 
        }
        else
        
            st = mid + 1;
        
       }else if(a[mid]<=a[end]){
        if(target > a[mid] && a[end] >= target){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
       }
    }
    cout << " invalid number " ;
    return  0 ; 
}