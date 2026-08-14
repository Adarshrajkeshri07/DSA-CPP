// #include<iostream>
// using namespace std ; 
// int main(){
//     int n ; 
//     cout << " enter the value of a :" ;
//     cin >> n ; 
//     for(int i = 2 ; i <= n ; i++){
//      int prime = 1 ;
//      for(int j = 2 ; j < i ; j++){
//         if ( i % j == 0 ){
//             prime = 0 ;
//             break;
//         }
//      } 
//      if(prime == 1 ){
//         cout << i << " " ; 
//      }

//     }
//     return 0 ;
// }
#include<iostream>
using namespace std ; 
int prime(int n ){
    if (n <= 1 ){
        return 0; 
    }
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0 ){
            return 0 ; 
        }
    }
    return 1 ; 
}
int main(){
    int n ; 
    cout << " enter the value of n :" ; 
    cin >> n ; 
    
        for(int i = 2 ; i < n ; i++){
            if (prime(i))
            {
                cout << i << " ";
            }
        }

    return 0 ; 
}