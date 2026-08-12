#include<iostream>
using namespace std ; 
int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    int ans[5] ; 
    ans[0] = 1 ; 
    int suffix = 1;  
    for(int i = 1 ; i < 5; i++ ){
        ans[i] = ans[i-1] * nums[i-1];
    }
    for(int i = 4 ; i >= 0 ; i-- ){
        ans[i]*=suffix ; 
        suffix*=nums[i] ; 
    }
    for(int i = 0 ; i < 5 ; i++){
        cout << ans[i] << " " ; 
    }
    return 0 ; 


}