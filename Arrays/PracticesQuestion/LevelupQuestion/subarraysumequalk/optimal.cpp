#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
    int a[6] = {9,4,20,3,10,5} ; 
    int n = 6 ; 
    int target = 33 ; 
    int vote =  0 ; 
    int prefix[6] ; 
    prefix[0] = a[0]; 
    for(int i = 1 ; i < n ; i++){
        prefix[i] = prefix[i-1] + a[i] ; 
    }
    unordered_map<int , int> m ; 
    for(int j = 0 ; j < n ; j++){
        int val = prefix[j] - target  ; 
        if(prefix[j] == target)vote++ ; 
        if(m.find(val) != m.end()) vote += m[val] ; 
        if(m.find(prefix[j]) == m.end()){
            m[prefix[j]] = 0 ; 
        }
        m[prefix[j]]++ ; 
  
    }
    cout << vote ; 
    return 0 ; 
}