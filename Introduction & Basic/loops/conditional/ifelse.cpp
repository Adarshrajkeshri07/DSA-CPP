#include<iostream>
int main (){
    int a  ;
    std :: cout << "enter your marks :" ;
    std :: cin >> a ;
    if (a > 90 && a <= 100 ){
        std :: cout << " grade A " ;
    }else if (a > 80 && a <= 90 ) {
        std:: cout << " grade B " ;
    }else if ( a > 70 && a <=80 ){
        std :: cout << "grade C " ;
    } else 
    {
        std :: cout << " fail " ;
    }
    return 0 ; 
}