#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std ; 
int main(){
    string s = "i love my India" ;
    int n = s.length() ; 
    vector<string> ans ; 
    string current ; 
    for(int i = 0 ; i < n ; i++){
        if(s[i] != ' '){
            current += s[i] ; 
        }else {
            ans.push_back(current) ; 
            current = "";
        }
    }    
    ans.push_back(current) ; 
    for(int  i = ans.size() - 1 ; i >= 0 ; i--){
        cout << ans[i] << " " ; 
    }
    return 0 ; 
}