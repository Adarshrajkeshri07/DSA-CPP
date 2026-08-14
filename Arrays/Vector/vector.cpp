#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector <int> vec (5,1);// x is size of this vector and y is which element value is present in a vector ;
    for(int val : vec){
        cout << val <<" " ; 
    }
    cout << " size : " << vec.size() << endl ;
    vector<char> name = { 'a' , 'b' , 'c' ,'d'};
    for(char i : name){ // for each loop 
        cout << i << " " ; 
    }
    cout << " size : " << name.size () ; 
    return 0 ;}