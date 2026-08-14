#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] ; 
    int largest = INT_MIN;
    int largestindex = -1 ;
    int secondlargesttindex = -1  ;
    int secondlargest = INT_MIN;
    cout << " enter the value of array element : " ; 
    for(int i = 0 ; i < 5; i++){
        cin >> a[i] ; 
    }
    for(int i = 0 ; i < 5 ; i++){
        if(a[i] > largest){
            secondlargest = largest ; 
            secondlargesttindex = largestindex ;
            largest = a[i] ; 
            largestindex = i ; 
        }
        else  if(a[i] >  secondlargest && a[i] < largest){
            secondlargest = a[i] ;
            secondlargesttindex = i ;
        }
    }
    cout << " the largest element is : " << largest << endl  ;
    cout << " the secondlargest element is : " << secondlargest << endl ;
    cout << " index of largest element is : " << largestindex  <<  endl; 
    cout << " index of secondlargest element is : " << secondlargesttindex  <<  endl; 
    return 0 ; 
}