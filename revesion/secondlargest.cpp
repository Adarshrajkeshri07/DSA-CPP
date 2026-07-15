#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] ; 
    int size = 5 ; 
    int largestindex = -1 ; 
    int index = -1 ; 
    int largest = INT_MIN ; 
    int  secondlargest = INT_MIN;
    cout << "enter the value of elements : " ;
    for(int i = 0 ; i < size ; i++ ){
        cin >> a[i] ; 
    }
    for(int i = 0 ; i < size ; i++){
        if(a[i] > largest){
            secondlargest = largest ; 
               index = largestindex;
            largest = a[i] ; 
            largestindex = i ; 
        }
        else 
        if(secondlargest < a[i] && largest > a[i]){
            secondlargest = a[i] ;
            index = i ;
        }
    }
    cout <<" the second largest element is " << secondlargest << endl ;
    cout << " index value of the second largest element is : " << index  << endl;
    cout << " index value of the  largest element is : " << largestindex  << endl;
    cout <<" the largest element is " << largest ;
    return 0 ; 
}