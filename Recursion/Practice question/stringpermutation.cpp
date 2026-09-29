#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
void permute(string &s ,int idx){
    int n = s.length() ; 
    if(idx == n){
        
            cout << "{" ; 
            for(char i : s){
                cout << i ; }
            
            cout <<"}" ; 
    
        return ; 
    }
    for(int i = idx ; i < n; i++){
        swap(s[idx] , s[i]) ;
        permute(s , idx + 1) ; 
        swap(s[idx] , s[i]) ;
    }
}
int main(){
    string s = "adarsh" ; 
    permute(s , 0) ; 
    return 0 ; 
}