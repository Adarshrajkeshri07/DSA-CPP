#include<iostream>
#include<climits>
using namespace std ;
int main(){
    int a[9] = {1,8,6,2,5,4,8,3,7};
    int maxwater = INT_MIN ; 
    
    for(int i = 0 ; i <  9 ; i++){
        int area = 1;
        for(int j = i + 1 ; j < 9 ; j++){
            area = min(a[i],a[j])*(j-i);
            maxwater = max(area , maxwater);
        }
    }
    cout << maxwater ;

}