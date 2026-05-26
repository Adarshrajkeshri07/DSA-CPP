#include<iostream>
//automatically type will change by the compiler .
 int main(){
    char grade = 'a';//97n //1 byte 
    int  a = grade ; //4 byte 
    float b = a ; //4byte
    double c = b ;//8byte
    std::cout << c ; 
    return 0;
 }