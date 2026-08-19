#include<iostream>
using namespace std ; 
void select(int a[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        int smallest = i ;
      
        for(int j = i + 1 ; j < n ; j++){
            if(a[j] < a[smallest]){
                smallest = j ; 
                
            }
         
        }
        swap(a[i], a[smallest]);
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
return ; 

    
    
}
int main(){
    int a[5] = {4,1,5,2,3} ; 
    select(a,5) ; 
    return 0 ;
}