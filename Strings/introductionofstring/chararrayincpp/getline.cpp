#include<iostream>
#include<string>
#include<cstring>
using namespace std ; 
int main(){
    char str[12] ; 
    cout << " enter the name : " ; 
    cin.getline(str , 12 , '.') ;
    // cout<< str ; 
    for(char ch : str){
        cout << ch << " " ; 
    }
    // int arr[5] = {1,2,3,4,5} ; 
    // for(int i : arr){
    //     cout << i << " " ; 
    // }
    return 0 ; 
}