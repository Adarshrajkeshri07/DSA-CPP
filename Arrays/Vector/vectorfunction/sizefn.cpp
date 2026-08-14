#include<iostream>
 #include<vector>
 using namespace std ; 
 int main(){
    vector<int> adarsh = {7,0,6,1,2,6,0,1,0,3};
    for(int i : adarsh){
        cout << i  << " " ;
      
    }
    cout << " size : " << adarsh.size();
    return 0 ;
 }