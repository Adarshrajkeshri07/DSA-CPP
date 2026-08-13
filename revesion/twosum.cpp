#include<iostream>
using namespace std ; 
int main(){
    int a[4] = {2, 7, 11, 15} ;
    int target = 9 ; 
    int st = 0 , end = 3 ; 
    while(st <= end){
        int sum = a[st] + a[end] ; 
        if(sum > target){
            end--;
        }else if(sum < target){
            st++;
        }else{
            cout << a[st] << " " << a[end] ; 
            return 0 ; 
        }
    }
    return 0 ; 
}