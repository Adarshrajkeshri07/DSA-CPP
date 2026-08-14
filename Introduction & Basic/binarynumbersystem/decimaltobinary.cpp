#include<iostream>
using namespace std ;
int binary(int decimal){
    int ld = 0 ; 
    int  pow = 1 ; 
    int answer = 0 ;
    for( ; decimal > 0 ; decimal /= 2){
        ld = decimal % 2 ; 
        ld = ld * pow ;
        answer+= ld ;
        pow*=10 ;

    }
    return answer ; 
}
int main(){
int n ; 
cout << " enter the value of n : " ;  
cin >> n  ;
for(int  i = 1 ; i <= n ;i++){
    cout << binary(i)<<" ";
}

return 0 ;
}