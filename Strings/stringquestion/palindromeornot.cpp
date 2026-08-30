#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
int main(){
    string str  ; 
    string temp ; 
    cout << " enter word" ; 
    getline(cin , str) ; 
    temp = str ; 
    int st = 0 , end = str.length() - 1 ; 
    while(st < end){
        swap(str[st],str[end]);
            st++ , end--;
        
    }
    if(str == temp){
        cout << "palindrome" ; 
    }else {
        cout << " not" ; 
    }
    return 0 ; 

}