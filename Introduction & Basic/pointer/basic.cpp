#include<iostream>
using namespace std ; 
// void changeA(int* p){
//     *p = 20 ; //pass by refrence using pointers.....
// }
// int main(){
//     int a = 15 ; 
//     // int* ptr = &a ; 
//     // int** ptrr = &ptr;
//     // cout << ptr<< endl; 
//     // cout << &a << endl ; 
//     // cout << a  << endl; 
//     // cout << &ptr << endl ; 
//     // cout << *ptr; 
//     // cout << endl;
//     // cout << **ptrr ; 
//     // int* p = &a ; 
//     // int** q = &p ; 
//     // cout << *p << endl;  
//     // cout << **q << endl;  
//     // cout << p << endl;  
//     // cout << *q << endl;  
//     changeA(&a) ; 
//     cout << a ; 
//     return 0 ; 
// }
void change(int &b){// pass by refrence using alias ..
    b = 20 ; 
}
int main(){
    int a = 17;
    change(a);
    cout << a ; 
}
    

