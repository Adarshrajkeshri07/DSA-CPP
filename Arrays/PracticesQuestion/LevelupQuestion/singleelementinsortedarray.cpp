// solution using xor but its time complexity O(n) ;
//  #include<iostream>
//  using namespace std ;
//  int main(){
//  int a[9] = {1,1,2,3,3,4,4,8,8};
//  int ans = 0 ;
//  for(int i = 0 ; i < 9 ;i++){
//   ans ^= a[i] ;
//  }
//  cout << ans ;
//  return 0 ;
//  }
// brute force approach its also time complexity is O(n) ;
// #include<iostream>
// using namespace std ; 
// int main(){
//     int a[9] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
//     if(a[0]!=a[1]){
//         cout << a[0] ; 
//         return 0 ; 
//     }
//     for(int i = 1 ; i < 8 ; i++){
//         if(a[i]!=a[i-1]&&a[i]!=a[i+1]){
//             cout <<a[i] ; 
//             return 0 ; 
//         }
//     } if(a[8]!=a[7]){
//         cout << a[8] ; 
//         return 0 ; 
//     }
//     cout << "invalid" ; 
//     return 0 ; 
// }
#include<iostream>
using namespace std ; 
int main(){
      int a[9] = {1, 1, 2, 3, 3, 4, 4, 8, 8};
      int st = 0 , end = 8  ;
      
      if (a[st] != a[st + 1])
      {
          cout << a[st];
          return 0;
      }
      else if (a[end] != a[end - 1])
      {
          cout << a[end];
          return 0;
      }
      while(st <= end){
        int mid = st + (end-st)/2 ;
        if(a[st] != a[st+1]){
            cout <<a[st];
            return 0 ;
        }else if(a[end]!=a[end-1]){
            cout << a[end] ;
            return 0 ; 
        }
        if (a[mid] != a[mid + 1] && a[mid] != a[mid - 1]){
            cout << a[mid] ; 
            return 0 ; 
        } 
        if(mid % 2 == 0 ){
            if(a[mid]==a[mid-1]){
                end = mid - 1 ; 
            }else{
                st = mid + 1 ;
            }
        }else if(mid % 2 != 0 ){
            if(a[mid]==a[mid-1]){
               st = mid + 1 ; 
            }else {
                end = mid - 1 ; 
            }
        }
      }
      cout << "invalid"; 
      return 0 ; 
    }