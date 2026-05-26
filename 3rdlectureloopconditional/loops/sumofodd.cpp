#include<iostream>
int main(){ 
    int n ,sum = 0 ; 
    std:: cout <<" enter the value of n  : " ;
    std:: cin >> n ;
    for (int i = 1 ; i <= n ; i++){
 if(i%2!=0){
    sum+=i;
 }
    }
    std:: cout << " the sum of odd number upto n = " << sum ;
    return 0 ; 
}