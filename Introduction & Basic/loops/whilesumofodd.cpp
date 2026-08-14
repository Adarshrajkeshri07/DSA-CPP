#include<iostream>
int main(){
     int n ,sum = 0;
     std:: cout<< " enter the value of n : " ;
     std :: cin >> n ; 
     int i = 1 ;
     while(i<=n){
         if(i%2!=0){
            sum+=i;
        }
        i++;
     }
     std:: cout<< sum ;
    return 0 ; 
}