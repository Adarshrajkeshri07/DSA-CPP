#include<iostream>
#include<utility>
using namespace std ; 
int moving(int a[], int size){
    int index = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(a[i] != 0){
            swap(a[i],a[index]) ; 
            index++ ; 
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout << a[i] ; 
    }
    
    
}
int main(){
int a[5] = {1,0,0,2,3} ; 
int size = 5 ;
moving(a,size) ; 
return 0 ; 

}