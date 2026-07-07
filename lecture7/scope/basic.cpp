//Scope of a variable means the part of a program where that variable can be accessed or used. If a variable is declared inside a function,it can only be used there(local scope). If it is declared outside all functions,it can be used anywhere in the program(global scope).
//In short : Scope decides where a variable is visible and usable in a program.
#include<iostream>
using namespace std ; 
int y = 8 ; 
void main(int a ){
 cout << y ; 
}
int main(){
    int a = 6 ;
    if (a  % 4 == 0 ){
        int b = 4 ; 
     cout << y ; 
 
    }
    cout << y ; 
    //cout << b ;  xxxxxx
    // here b is a local variable of if then it can't access outside of if . but y is the global variable it can access all over he code ............
    return 0 ; 
}