#include<iostream>
#include<string>
using namespace std ; 
int main(){
    string a = "adarshrajkeshri" ; 
    for(int i = 0 ; i < a.length(); i++){
        cout << a[i] << endl ; 
    }
    for(char ch : a){
        cout << ch << endl ;
    }
    // string a ; 
    // cout <<" enter the value of strings" ; 
    // for(int i = 0 ; i < 5 ; i++){
    //     char ch ; 
    //     cin >> ch ;
    //     a += ch ;  
    // }
    // cout << a ; 
}