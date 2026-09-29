#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;  
void permute(vector<int> &a ,vector<vector<int>> &ans , int idx){
    if(idx == a.size()){
        ans.push_back(a) ; 
        return  ; 
    }
    for(int i = idx ; i < a.size() ; i++){
        swap(a[idx] , a[i]) ; 
        permute(a , ans , idx+1) ;
        swap(a[idx], a[i]);
    }
}
 
int main(){
    vector<int> ar = {1,2,3} ; 
    vector<vector<int>> ans ; 
    permute(ar , ans , 0) ; 
    for(auto  x : ans){
        cout <<"[" ; 
        for(int i : x) {
            cout << i ; 
        } 
        cout << "]" ;
    }
    return 0 ; 
}