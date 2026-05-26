#include<iostream>
using namespace std ;
int main(){
     int n ; 
     cout << " enter the number  n : ";
     cin >> n ;
    //  n >=0 ? cout <<" postive " : cout << " negative" ;  or 
    cout << (n >= 0 ? "postive ": "negative" ) << endl;
    return 0 ; 
}