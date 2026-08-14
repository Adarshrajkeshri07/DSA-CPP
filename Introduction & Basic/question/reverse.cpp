#include<iostream>
using namespace std ; 
int main(){
    int n ; 
    cout << " enter the number  : " ; 
    cin >> n ; 
    int reverse  = 0 ,sum = 0 ,  ld ;
    for( ; n !=0 ; n /= 10){
        ld = n % 10 ;
        reverse = reverse * 10 + ld ; 
        sum+=ld;
        cout << ld ;
    } 
    cout << endl;
    cout << sum << endl << reverse ;
    return 0 ;

}