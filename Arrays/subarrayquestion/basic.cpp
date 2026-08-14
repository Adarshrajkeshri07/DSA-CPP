#include<iostream>
using namespace std ; 
int main(){
    int b = 5 ; 
    int a[5] = {0,1,2,3,4};
    for(int st = 0 ; st < b ; st++){
        for(int i = 0 ; i < st ; i++){
            cout << " " ; 
        }
        for(int end = st ; end  <= b; end++){
            for(int i = st ; i < end ; i++){
                cout << a[i]<< " " ; 
            }
            cout << " " ;
        }
        cout << endl ; 
    }
    return  0 ;
}