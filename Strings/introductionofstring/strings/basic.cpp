#include<iostream>
#include<string>
using namespace std ; 
int main(){
    // string str = "adarshrajkeshri" ; // runtime reszie dynamically 
    // cout << str << endl ;
    // str = "adarshraj" ; // because dynamically in nature but arrays has fix and constant size ....
    // cout << str;
    string str = "adarsh" ; 
    string str2 = "raj" ; 
    string str3 = str + str2 ; 
    // cout << str3 ; 
    // cout << str3.length() << endl ; 
    // cout <<( str == str2 ) << endl  ; //0 ;
    string a ; 
    cout << "enter: " ; 
    // cin >> a ; 
    getline(cin , a) ;
    cout << a ; 

   
}