//array already a pointer that store memory address of its element 
// constant pointer..
//  #include<iostream>
//  using   namespace std ; 
//  int main(){
//     int a[] = {2,4,5,43,6} ; 
//     cout << a ; 
//     cout << endl ; 
//     cout << *a ; 
//     cout <<endl ; 
//     cout << *(a+1)<< endl;
//     cout << *(a+2)<< endl;
//     cout << *(a+3)<< endl;
//     cout << *(a+4)<< endl;
//  }
 //pointer arithmetic//
//  #include<iostream>
//  using namespace std ; 
//  int main()
//  {
//     int a = 12  ; 
//     int* ptr = &a ; 
//     cout<< ptr; 
//      cout << endl;
//      ptr++ ; 
//      cout << ptr ; 
//      cout << endl ; 
//     ++ptr ; 
//     cout << ptr ; 
//     //ptr me 1 add karne per 1 int ke barabar matlab 4 byte space add ho jayega . aisahi 2 add krne per 8 byte space add ho jayega 
//     ptr+=4 ;
//     cout << endl ;
//     cout << ptr ;   

//  }
#include <iostream>
 using namespace std;
 int main()
 {
     int a = 15 ; 
     int * ptr ; 
     int *ptr2 ; 
     ptr = ptr2 + 2  ; 
     cout << ptr - ptr2 ; 

 }