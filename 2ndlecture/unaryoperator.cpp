#include<iostream> 
int main(){
     int a , b ; 
     b = 11 ;
     a = b++;
     std::cout << a ; //pehle a ke under purana value rhega lekin ab b ke under naya value ho jayega 
     std ::cout << b ;
     std :: cout << a ;
     std :: cout << b ; 
     int c , d ;
     d = 25  ;
     c = ++d ; //pehele hi value badh jayega dono ka 
     std :: cout << c ;
     std :: cout << d ; 
     int e , f ;
     e = 23 ;
     f = e-- ;
     std :: cout << f ;
     std :: cout << e ;
     std ::cout << f;
     return 0; 
}