#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std ; 
int main(){
    vector<int> a = {5,2,11,7,15} ; 
    vector<int> ans ; 
    unordered_map<int , int > m ; 
    int n = a.size() - 1 ; 
    int target = 18 ; 
    for(int i = 0 ; i <= n ; i++){
        int first = a[i] ;
        int sec = target - first ; 
        if(m.find(sec) != m.end()){
         ans.push_back(i);
         ans.push_back(m[sec]);
        }
        m[first] = i ; 

    }
    if(ans.empty()){
        cout << "invalid target" ; 
    }else 
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " " ; 
    }

    return 0 ; 
  
}
