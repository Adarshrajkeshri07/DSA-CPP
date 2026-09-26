#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
void subset(vector<int> &a  , vector<int> & ans , int i , vector<vector<int>> & allsubset){
    if(i == a.size()){
        allsubset.push_back(ans) ; 
        return ; 
    }
    //include
    ans.push_back(a[i]) ; 
    subset(a , ans , i + 1 , allsubset) ; 
    //exlude 
    ans.pop_back() ; 
    int idx = i + 1 ; 
    while(idx < a.size() && a[idx] == a[idx - 1]){
        idx++ ; 
    }
    subset(a, ans , idx , allsubset) ; 
}
 vector<vector<int>> answersubset(vector<int> arr){
    sort(arr.begin() , arr.end()) ; 
    vector<vector<int>> allsubset ; 
    vector<int> ans ; 
    subset(arr , ans , 0 , allsubset) ; 
    return  allsubset ; 
 }
 int main(){
    vector<int> a = {1,2,2,2,3,3} ; 
    vector<vector<int>> answer = answersubset(a) ; 
    for(auto x : answer){
        cout << "[" ; 
        for(int i : x){
            cout << i ; 
        }
        cout << "]" ; 
        cout << "\n" ; 
    }
    return 0 ; 
 }