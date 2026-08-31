// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std ; 
// int main(){
//     string str  ; 
//     string temp ; 
//     cout << " enter word" ; 
//     getline(cin , str) ; 
//     temp = str ; 
//     int st = 0 , end = str.length() - 1 ; 
//     while(st < end){
//         swap(str[st],str[end]);
//             st++ , end--;
        
//     }
//     if(str == temp){
//         cout << "palindrome" ; 
//     }else {
//         cout << " not" ; 
//     }
//     return 0 ; 

// }
#include<iostream>
#include<cctype>
#include<string>
using namespace std ;
bool alpha(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9' ){
        return true ;
    }else return false ;
} 
bool validpalindrome(string a){
    string temp = a ;
    int st = 0, end = a.length() - 1;
    while(st < end){
      if(!alpha(a[st])){
        st++ ;
        continue;
      }
      if(!alpha(a[end])){
        end--;
        continue;
      }
      if(tolower(a[st]) != tolower(a[end])){
        return false ;
      }
      st++ , end--; 
    }
    return true ; 

}
int main(){
string a = "bfsdfsdi" ; 
 bool ans = validpalindrome(a);
 if(ans){
    cout << "true" ; 
 }else {
    cout << "false" ; 
 }
 return 0 ; 
}