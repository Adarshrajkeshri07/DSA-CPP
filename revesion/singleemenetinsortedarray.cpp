#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int a[9] = { 1, 1, 2, 2, 3, 4, 4, 5, 5 };
    int st = 1 , end = 7 ; 
    while(st <= end ){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] != a[mid - 1] && a[mid] != a[mid + 1]){
            cout << a[mid] ;
            return 0 ; 
        }
        if(mid % 2 == 0){
            if(a[mid] != a[mid - 1]){
               end = mid - 1 ; 
            }else {
                st = mid + 1 ; 
        }
        }else 
        if(a[mid] != a[mid - 1]){
            st = mid + 1 ; 
        }else{
            end = mid - 1 ; 
        }
    }
    cout << "invalid" ; 
    return 0 ; 

}