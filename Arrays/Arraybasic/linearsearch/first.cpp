 #include<iostream>
 using namespace std ; 
 int main(){
    int a[5] = {54 , 5 , 87 , 9 , 36} ; 
    int index = 5 ;
    int x ; 
    bool found  ;
    cout <<" enter the value of x : " ;
    cin >> x ; 
    for(int i = 0 ; i < index ; i++){
        if(x == a[i]){
            cout << " the value is exist in the array "<< i  ; 
         found = true ;
            break;
        }
    }
    if(found == false) {
        cout << " invalid" ;
    }
   
    return 0 ; 
 }