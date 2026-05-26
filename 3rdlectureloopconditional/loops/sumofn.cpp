#include<iostream>
int main(){
    int n , sum = 0 ;
    std:: cout << " enter the value of n :" ;
    std :: cin >> n ;
    for (int i = 1 ; i <= n ; i++){
        sum+=i; 
        if(i==3){
            continue;
        }else if ( i==4){
            break;
        }
    }
    std:: cout << sum <<"\n" ;
     int adarsh ; 
     char f = 'a' ;
     adarsh =( int )f;
     std::cout << adarsh ; 
     return 0; 
}