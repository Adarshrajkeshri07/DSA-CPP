#include<iostream>
using namespace std ;
int main(){
    int a[5];
    int sum = 0 ; 
    int into = 1 ;
    cout << " enter the value of the array element : " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i];
        sum += a[i];
        into *= a[i];
    }
      
    cout << "  the multiplication of all the element of the array is  : " << into << endl; 
    cout << " the sum of all the element of array is : " << sum ; 
    return 0 ;


}