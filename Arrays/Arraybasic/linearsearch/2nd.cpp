#include<iostream>
using namespace std ;
int main(){
    int a[5] , size = 5 ; 
int x ; 

     bool found ;
    cout << " enter the value of element :" ; 
    for(int i= 0 ; i < 5 ; i++){
        cin >> a[i];
    }
    cout << " enter the value of x : ";
    cin >> x;
    for(int i = 0 ; i < 5 ; i++){
        found = false ;
        if(x ==  a[i]){
            found = true ; 
            cout << " index value is :" << i  << endl;
            break;
        }
    }
    if(found == true){
        cout << " number is exist : " << x ; 
    }else 
    cout << " invalid ; " ; 
    return 0 ;

}