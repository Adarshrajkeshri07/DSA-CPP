#include<iostream>
using namespace std ; 
int change(int a[],int n){
    for(int i = 0 ; i < n ; i++){
        a[i] = 2 * a[i] ;
    }
   

}
int main(){
    int a[5] = {21,5,1,4,8};
    change(a , 5);
    for (int i = 0; i < 5; i++)
    {
     cout << a[i] << endl; 
    }
    return 0 ; 
}