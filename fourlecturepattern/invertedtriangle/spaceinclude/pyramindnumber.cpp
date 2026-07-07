 #include<iostream>
 using namespace std ;
 int main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >> n ;

    for(int i = 0 ; i < n ; i++){
        int k = 1;
       
       int  m = i ;
        for(int j = n  ; j >= i ; j--){
 cout <<" ";
        }
        for(int j = 0 ; j <= i ; j++){
            cout << k  ;
            k = k + 1;
        }
        for(int j = i   ; j > 0 ; j--){
          
             cout << m ;
             m = m - 1;
        }
      
        cout << "\n";
    }
    return 0 ; 
 }