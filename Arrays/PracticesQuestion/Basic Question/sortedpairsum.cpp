#include<iostream>
#include<algorithm>
using namespace std ; 
void pairsum(int a[] , int target ,int index  ){
     int st = 0 , end =  index - 1 , ps = 0 ; 
     while(st <  end){
        ps = a[st]+a[end];
        if(ps < target){
            st++ ; 
        }else
        if(ps >  target){
            end-- ; 
        }else 
        if(ps== target){
            cout << a[st] << a[end];
            return ; 
        }
     }
}
int main(){
     int a[4] = {2,7,11,15} ;
     pairsum(a,22,4);
     return 0 ;  
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[4] = {4, 7, 2, 15};
//     int I, J;
//     for (int i = 0; i < 4; i++)
//     {
//         int sum = 0;
//         for (int j = i + 1; j < 4; j++)
//         {
//             sum += a[j];
//             if (sum == 9)
//             {
//                 I = i;
//                 J = j;
//             }
//         }
//     }
//     cout << a[I] << " " << a[J];
//     return 0;
// }
// ye bhi to ho skta tha