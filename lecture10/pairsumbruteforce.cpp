// #include<iostream>
// using namespace std ; 
// int main(){
//     int a[4] = { 4,2,5,15} ;
//     int I ,J ;
//     for(int i = 0 ; i < 4 ; i++){
//         int sum = 0 ; 
//         for(int j = i + 1 ; j < 4 ; j++){
//          if(a[i]+a[j]==9){
//             I= i ;
//             J = j ;
//          }
//         }
//     }
//     cout << a[I]  << " " << a [J] ; 
//     return 0 ; 
// }
#include<iostream>
using namespace std ; 
void pairsum(int a[] , int  target , int index ){
    int I = -1 , J = -1 ; 
    bool match =  false ; 
    for(int i = 0 ; i < index ; i++ ){
        for(int j = i + 1 ; j < index ; j++){
            if(a[i]+a[j]== target){
                I = i ; J = j ;
                    match = true ; 
            }
        }
    }
if(match == true){
  
    cout << I << " " << J;
}else
    cout << " invalid target ";
}
int main(){
    int a[4]= {2,4,5,7} ; 
    int index = 4 ; 
    int target; 
    cout<< " enter the value of target: " ; 
    cin >> target ; 
    pairsum(a,target,index);
    return 0 ; 
}