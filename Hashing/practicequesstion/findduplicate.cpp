#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
    int a[] = {3,1,3,4,2} ; 
    int n = 5 ;
    unordered_map<int , int >  m ; 
    for(int i = 0 ; i < n ; i++){
            int duplicate = a[i] ; 
            if(m.find(duplicate) != m.end()){
                cout << a[i] ; 
                return 0 ; 
            }
            m[duplicate] = a[i] ; 
    }
    return 0 ; 
}