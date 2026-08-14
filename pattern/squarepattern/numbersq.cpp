#include<iostream>
int main(){
     int i , j , n ;
     std :: cout << " enter the value of the n : " ;
     std :: cin >> n ;
     for(i = 0 ; i < n ; i++){
      int k = 1 ;
for(j = 0 ; j < n ; j++){
    std :: cout << k ; 
    k += 1 ;
}
std :: cout << "\n" ;
        
     }
    return 0 ;
}