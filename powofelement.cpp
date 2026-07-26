// begineer method to get power of any number ......
// optimise method is binary exponetial method .......
// #include<iostream>
// using namespace std ;
// int main(){
//     int n ;
//      cout << " enter the value of n : " ;
//      cin >> n ;
//       int pow  ;
//       cout << " enter the power of n :" ;
//       cin >> pow ;
//       int ans = 1 ;
//       for(int i = 1 ; i <= pow ;i++){
//         ans*=n;
//       }
//       cout << ans;
//       return 0 ;
// }
// optimise method is binary exponetial method .......
#include<iostream>
using namespace std ; 
int main(){
    double n  ; 
    cout << "enter the value of n : " ; 
    cin >> n ; 
    int pow  ;
    cout << " enter the value of power : " ; 
    cin >> pow ; 
    double ans = 1 ; 
     long binaryform = pow ; 
     if(pow==0){
        cout << 1 ; 
        return 0 ; 
     }
     if(n==0){
        cout << 0 ; 
        return 0 ;
     }
     if(n==1){
        cout << 1;
        return 0 ;
     }
     
    if(binaryform < 0 ){
        n = 1 / n ; 
        binaryform = - binaryform ; 
    }
     while(binaryform > 0){
        if(binaryform%2==1){
            ans*=n;
        }
        n*=n;
        binaryform/=2;
     }
     cout << ans ; 
     return 0 ; 
}