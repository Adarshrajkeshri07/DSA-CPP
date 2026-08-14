// #include<iostream> 
// using namespace std ; 
// int main(){
//     int a ; 
//     cout << " enter the value of a : " ; 
//     cin >> a ;
//     if(a > 1 &&  (a&(a-1))==0){
//         cout << " the number is the power of two" ; 
//     }
//     else 
//     cout << " invalid " ; 
//     return 0 ;
// }
#include<iostream>
#include<vector>
using namespace std ; 
int main(){
   int  vec[5] = {4,1,2,1,2};
   bool found ;
    int index = 5; 
    for(int i = 0 ; i < 5 ; i++){
        found = true ; 
        for(int j = 0 ;  j < 5 ; j++){
            if( i!=j && vec[i]==vec[j]){
                found = false ;
                break;
            }
        }
        if(found==true){
            cout << vec[i] ; 
        }
    }
    return 0 ; 
}