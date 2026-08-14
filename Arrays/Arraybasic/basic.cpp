#include<iostream>
using namespace std ; 
int main(){
    int a[5] ={1,2,3,4};
   
//    for(int i = 0 ; i <= 5 ; i ++){
//        cout << a[5];
//    }
// we change manually value of the array element 
// array is the collection of contiguous data type , its store same of data in a single variable .

    cout << a[1]<< endl;
    a[1] = 99;

    cout << a[1];

    return 0 ;

}