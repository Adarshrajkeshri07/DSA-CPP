#include<iostream>
#include <algorithm>
using namespace std ; 
int main(){
    int a[7] ;
    int n = 7 ; 
    cout << " enter the value of element : " ; 
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ; 
    }
    sort(&a[0],&a[n]);
    int freq = 1 ; 
    int majority = a[0] ; 
    for(int i = 1 ; i < n ; i++){
        if(a[i]==a[i-1]){
            freq++;
        }else {
            freq = 1 ; 
            majority = a[i];
        }
        if (freq > n / 2)
        {
            cout << majority;
            break;
        }
    }
    if (freq > n / 2)
    {
        cout << majority;
        
    }

return -1 ; 
}