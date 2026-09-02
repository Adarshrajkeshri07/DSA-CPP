#include<iostream>
#include<string>
using namespace std ; 
bool isfreqsame(int freq1[] , int freq2[]){
    for(int i = 0 ; i < 26 ; i++){
        if(freq1[i] != freq2[i]){
            return false ;
        }
    }
    return true ; 
}
int main(){
    string s1 = "ab" ;
    string s2 = "eidbaooo" ;
    int freq[26] = {0} ;
    for(int i = 0 ; i < s1.length() ; i++){
        int idx = s1[i] - 'a' ; 
        freq[idx]++ ;
    }
    int windowsize = s1.length() ; 
    for(int i = 0 ; i < s2.length() ;i++){
        int windowindex = 0 , idx = i ;
        int winfreq[26] = {0};
        while(windowindex < windowsize && idx < s2.length()){
            winfreq[s2[idx] - 'a']++ ; 
            windowindex++ , idx++ ; 

        }
        if(isfreqsame(freq ,winfreq)){
            return true ;
        }else {
            return false ; 
        }
    }
}