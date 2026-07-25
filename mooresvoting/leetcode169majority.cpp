#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {2,1,2,2,1};
    int freq = 0 ; 
    int ans ; 
    for(int i = 0 ; i < 5 ; i++){
        if(freq==0){
            ans = a[i] ; 
        }
        if(ans==a[i]){
            freq++;
        }else
        freq--;
    }
    cout << ans;

    return 0 ; 
}