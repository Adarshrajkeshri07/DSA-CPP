#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int a[5] = {2,6,2,4,3} ; 
    int piv = - 1 ;
    int n = 5 ; 
    /// piv ko find karna hai ......
    for(int i = n - 2 ; i >= 0 ; i-- ){
        if(a[i] < a[i+1]){
            piv = i ; 
            break;
        }
    } 
    // piv na ho to reverse kar dena hai ......
    if(piv == -1){
        reverse(a ,a+n);
        return 0 ;
    }
    // agar piv mil jay to use uske bad wale continuous number me sabse chote number se swap kar dena hai ....
    for(int i = n - 1 ; i >= 0 ;i--){
        if(a[i] >  a[piv]){
            swap(a[i] ,a[piv]) ;
            break;
        }
    }
    //swap karne ke bad piv ke bad wale number ko reverse kar dena hai .....
    int i = piv + 1 ; 
    int j = n - 1 ; 
    while(i < j){
        swap(a[i] ,a[j]) ;
        i++ , j-- ;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ;
    }
return 0 ; 
}