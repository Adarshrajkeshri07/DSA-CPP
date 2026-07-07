#include<iostream>
using namespace std ;
// int sum(int a){
//     int total = (a*(a+1))/2;
//     return total ; 
// }
int sum(int a ){
    int sum = 0 ; 
    for(int i = 1 ; i <= a ; i++){
        sum = sum + i ; 
    }
    return sum ;
}
int main(){
int n ; 
cout << " enter the value of n :" ; 
cin >> n ;
cout << " sum of the number is : " << sum(n)  ;
return 0 ;  

}