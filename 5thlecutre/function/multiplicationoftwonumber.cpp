#include<iostream>
using namespace std ;
int into(int a , int b ){
    int z = a*b;
    return z; 
}
int main(){
int x,y;
cout<< " enter the value of the a  :" ;
cin >> x ;
cout << " enter the value of the b :" ;
cin >> y ;
cout<<"the into of two number is "<< into(x,y);
return 0 ; 
}