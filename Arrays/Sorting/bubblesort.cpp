//sorting is the process in which we arrang the data acending and decending order ..
//bubble sort is the sorting method in which we compare adjacent element and push the larger element at last ...... using swappp ......
#include<iostream>
#include <algorithm>
using namespace std ; 
void bubblesort(int a[] , int size){
    for(int i = 0 ; i < size - 1 ; i++){
        bool issort = false ; 
        for(int j = 0 ; j < size - 1 - i ; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
                issort = true ;
            }
        }
        if(!issort){
          break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
}
int main(){
    int arr[5] = {4,1,5,2,3} ;
    int n = 5; 
    bubblesort(arr,n) ;
     return 0 ;
       
}