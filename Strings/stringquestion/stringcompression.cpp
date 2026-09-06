#include<iostream>
#include<string>
using namespace std ; 
int main(){
    char c[] = {'a','a','b','b','c'} ; 
    int idx = 0  ; 
    for(int i = 0 ; i < 5 ; i++){
        char ch = c[i] ; 
        int freq = 0 ;
        while (i < 5  && ch == c[i])
        {
            freq++ , i++ ;
        }
        if(freq == 1){
            c[idx++] = ch;
        }else {
            c[idx++] = ch ; 
          string str = to_string(freq);
          for(char value : str){
            c[idx++] = value ; 
          }

        }
        i--;
       
        
    }
    for(int i = 0 ; i < idx ; i++){
        cout << c[i] ; 
    }
    return 0 ; 
}