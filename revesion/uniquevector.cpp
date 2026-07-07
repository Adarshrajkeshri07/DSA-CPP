#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector<int> vec = {2,5,4,2,5}; 
     int ans = 0 ; 
    for(int val : vec){ /// for(int i = 0 ; i <  vec.size();i++){ans^=vec[i];}
        ans^=val;
    }
    cout << ans ; 
    return 0 ; 
}