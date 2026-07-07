#include<iostream>
using namespace std ; 
int main(){
    //size of array 
    int marks[6];
    int size = 6 ; 
    // cout << sizeof(marks)/sizeof(int)<<endl;
    // cout <<sizeof(marks) ;
    //
    cout << " enter the value of marks :  " ;
for(int i = 0 ; i < size ; i++){
    cin >> marks[i];

}
cout << " the total value = : " ;
for(int i = 0 ; i < size ; i++){
    cout << marks[i] << endl;
}

    return 0 ;
}