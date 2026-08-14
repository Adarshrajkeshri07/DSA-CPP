//brute force approach its time complexity isO(n) ; 
// #include<iostream>
// using namespace std ; 
// int main(){
//     int a[6] = {0,3,8,9,5,2} ; 
//     for(int i = 1 ; i < 5 ; i++){
//         if(a[i] > a[i-1] && a[i] > a[i+1]){
//             cout << a[i] ; 
//             return 0 ; 
//         }
//     }
//     return 0 ; 
// }
///optimal solution of this question , which time complexity is O(logn) ; 
#include<iostream>
#include<climits>
using namespace std ;
int main(){
int a[6] = {0,3,8,9,5,2} ;
int st = 1 , end = 4 ; 
while(st<= end){
    int mid = st + (end - st)/2 ;
    if(a[mid]>a[mid -1 ] && a[mid] >a[mid+1]){
        cout << a[mid] ; 
        return 0 ; 
    }
    if(a[mid-1]<a[mid]){
        st = mid + 1 ; 
}else if(a[mid - 1] > a[mid]) {
    end = mid -1 ; 
}


}
return 0;
}
