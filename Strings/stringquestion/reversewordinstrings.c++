#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
string reverseword(string s) {
    int n = s.length() ; 
    reverse(s.begin() , s.end()) ; 
    string word ,ans ;  
    for(int i = 0 ; i < n ; i++){
        while ( i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
word.clear() ; 
    }

    return ans.substr(1);
}
int main(){
    string s = "hello world" ; 
   string ans =  reverseword(s) ; 
    cout << ans ; 
    return 0 ; 
}