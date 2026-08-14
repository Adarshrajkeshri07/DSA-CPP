#include<iostream>
int main(){
   int age ;
   std::cout << "enter age  :" ;
   std :: cin >> age ;
   if(age >= 18 ){
    std :: cout << " he can vote ." ;
   } 
   else {
    std :: cout << " he can't vote .\n";
   }
    int n ; 
    std :: cout <<  "the value of   n :" ; 
    std :: cin >> n ;
    if (n%2==0){
        std :: cout << "the number is even number" ;
    } else {
        std :: cout << "the number is odd number ." ;
    }
    
    return 0 ; 
}