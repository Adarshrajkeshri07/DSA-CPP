#include<iostream>
using namespace std ;
void greet()
{
    cout << " hello welcome to our college.";
}
int love(){
    cout << " i love you ";
    return 23 ;
}
int main(){
 int  a = 2 ;
 int b = 4;
//  greet();
 int val = love();
 cout <<  "value = " << val ;
 cout << endl ;
 cout << love() ;

 return 0 ;  
}