#include<iostream>
using namespace std ; 
int main(){
    int a[3] = {1,2,3} ; 
    int b[3] = {2,5,6} ; 
    int c[6] ;
    int index = 0 ; 
    int bindex = 0 ; 
    for(int i = 0 ; i < 6 ; i++){
        if(index == 3 ){
            c[i] = b[bindex] ;
            bindex++;
        }else if(bindex == 3){
            c[i] = a[index] ; 
            index++;
        }else 
        if(a[index] <=  b[bindex]){
            c[i] = a[index] ; 
            index++ ;
        }else 
        if(a[index] >= b[bindex]){
            c[i] = b[bindex] ; 
            bindex++ ; 
        }
    }
    for(int i = 0 ; i < 6 ; i++){
        cout << c[i] << " " ; 
    }
}