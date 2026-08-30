#include<iostream>
#include<algorithm>
#include<string>
using namespace std ; 
int main(){
    string a = "helloworld" ; 
    int st = 0 , end = a.length() - 1 ; 
    while(st < end){
        swap(a[st] ,a[end]) ; 
        st++ , end--; 
    }
    cout << a ; 

}
