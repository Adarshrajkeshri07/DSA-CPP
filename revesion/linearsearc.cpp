#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {1,5,6,9,74};
    bool found = false ; 
    int x ; 
    cout <<  " enter the value of x : " ; 
    cin >> x ; 
    for(int i = 0 ; i < 5 ; i++){
        if(a[i]==x){
            found = true ; 
            break;
        }else 
        found =  false ; 
    }
    if(found == true){
        cout << " valid " ; 
    }else 
    cout << " invalid" ; 
    return 0 ; 

}