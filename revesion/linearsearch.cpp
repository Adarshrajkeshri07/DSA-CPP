#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {23,43,54,2,64};
    int x ; 
    cout << " enter the value of x " ; 
    cin >> x ; 
    bool found ;
    found = false;
    for(int i = 0 ; i < 5 ; i++){
      
        if(a[i]==x){
          found = true ;
          break;
        }
    }
    if(found == true){
        cout << "found " ;
    }
    else
    cout << " invalid " ; 
    return 0 ; 
}