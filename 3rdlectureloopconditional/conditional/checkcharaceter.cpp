#include<iostream> 
using namespace std ;
 int main (){
   char ch ;
  
   cout << " enter your character : " ; 
   cin >>  ch ;
   int a = (int)ch;
   cout << a ;
  //  if (ch<97 && ch <=65){
  //   cout << " the character is upper case " ;
  //  }else {
  //   cout << " the charceter is lower case " ;
  //  } 
  if ( ch >= 'A' && ch <='Z'){
    cout << " the character is upper case ." ;
  }else if (ch >= 'a' && ch <= 'z'){
    cout << " the charcter is lower case ." ;
  }

   return 0 ; 
 }