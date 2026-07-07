#include<iostream>
using namespace std ; 
int main(){
    int a[5];
   
    int inx ;
    bool found ;
    cout << " enter the value of the elements " ;
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i];
    }
  for(int i = 0 ; i < 5 ; i++){
    found = false  ; 
    int same = a[i];
    for(int j = 0 ; j < 5 ; j++){
        if(j!=i && a[i]==a[j]){
            found = true ;
            break;
        }
    }
    if(found == false ){
        cout << " unique element " << same ;
    }
  }
return 0 ;
}