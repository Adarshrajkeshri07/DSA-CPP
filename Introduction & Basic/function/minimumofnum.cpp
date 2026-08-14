#include<iostream>
using namespace std ;
int minoftwo(double a, double b){//parameters.........
    if(a >= b){
        return 1 ;
    }else if (a < b ){
        return 0 ;
    }

}
int main(){
    int a , b ; 
    a = 18 , b = 9 ;
    cout << minoftwo(a,b);//argument.................
}