#include<iostream>
int main(){
     int a ; 
     std:: cout << " enter the value of a  : " ;
     std::cin >> a ;
     for(int i = 1 ; i <= a ; i++){
        for(int k = 1 ; k <= a-i ; k++){
            std:: cout << " ";
        }
      for(int j = 1 ; j <= i ; j++){
        std:: cout << "% " ;
      }
      std::cout << " \n" ;
     }
      for(int i = a ; i >=1 ; i--){
        for(int k = a-i ; k >=1 ; k--){
            std:: cout << " " ;
        }
        for(int j = i ; j>=1 ; j--){
            std:: cout << "% ";
        }
        std:: cout<< " \n" ;
      }
    return 0 ; 
}