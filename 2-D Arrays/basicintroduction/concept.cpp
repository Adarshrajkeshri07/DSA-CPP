//it is also called matrices ............. 
#include<iostream>
using namespace std ;
int main(){
    int matrix[4][3]  = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; 
    int rows = 4 , columns = 3 ;
     matrix[2][1] = 65 ;
    cout << matrix[2][1] ; 

    return 0 ; 
}