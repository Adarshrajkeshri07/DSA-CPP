#include<iostream>
#include<utility>
using namespace std ; 
void reverse(int a[],int sz){
    int start=0 , end = sz -1 ;
    while(start < end ){
   swap(a[start],a[end]);
   start++;
   end--; 
} }
int main(){
    int a[5] ;
    int size = 5 ; 
    cout << " enter the value of element : " ;
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i];
    }
    reverse(a,size);
    for(int i = 0 ; i < 5 ; i++){
        cout << a[i];
    }
    return 0;
}