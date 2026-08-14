#include<iostream>
using namespace std ;
int main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >>  n ; 
    if(n==1){
        cout << "n is the 0th power of 2 " << endl;
    }
     if(n>0){
         int ans = 1;
         for (; n > 1; n /= 2)
         {
             if (n % 2 != 0)
             {
                 ans = 0;
                 break;
             }
         }
         if (ans == 1)
         {
             cout << " the number is the power of  2 ";
         }
         else
             cout << " not ";
     }else
     cout << " negative number " ;
    
    return 0 ;
}