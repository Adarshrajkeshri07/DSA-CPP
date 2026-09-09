
    // In 2D arrays, each element is identified using a row and column index.

    // When declaring a 2D array, the number of columns must always be specified.

#include<iostream>
    using namespace std; 
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
    int rows = 3 , cols = 3 ;  
    int key = 5 ; 
    for(int i = 0 ; i <rows; i++ ){
        for(int j = 0 ; j < cols ; j++){
            if(a[i][j] == key){
                cout << "rows = "<< i <<endl ; 
                cout << "cols = "<< j ; 
                return 0 ; 
            }
        }
    }
    cout << " not found" ; 
    return 0 ; 
}