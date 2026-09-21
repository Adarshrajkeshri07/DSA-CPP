#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {9,4,20,3,10,5} ; 
    int n = 6 ; 
    int target ;
    cout << "enter the value of target : " ; 
    cin >> target ; 
    int vote = 0 ,  sum ; 
    for(int i = 0 ; i < n ; i++){
        sum = 0 ; 
        for(int j = i ; j < n ; j++){
            sum += a[j] ; 
            if(sum ==  target) vote++ ; 
        }

    }
    cout << "The number of sum  = " ;
    cout << vote ; 
    return 0 ; 
}