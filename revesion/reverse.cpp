#include<iostream>
#include<utility>
using namespace std ;
void reverse(int a[] , int sz){
    int start = 0 , end = sz - 1 ; 
    while(start <  end ){
        swap(a[start],a[end]);
        start++;
        end--;    
    }
}
int main(){
    int a[5] = {2 ,5,9,3,7};
    int index = 5 ; 
    reverse(a , index);
     for(int i = 0 ; i < index ; i++){
        cout << a[i];
     }
     return 0 ; 
}