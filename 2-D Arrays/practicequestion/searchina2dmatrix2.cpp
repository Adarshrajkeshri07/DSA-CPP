#include<iostream>
using namespace std ; 
int main(){
    int a[4][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
        {9, 11, 13, 15},
        {10, 12, 14, 16}};
        int rows = 4 , cols = 4 ; 
        int target = 12 ; 
        int r = 0 , c = cols - 1 ; 
        while(r < rows && c >= 0 ){
            int mid  = a[r][c] ; 
            if(target == mid) {
                cout << mid ; 
                return 0 ; 
            }else if(target > mid){
                r++ ; 
            }else if(target < mid){
                c-- ; 
            }

        }         
        return 0 ; 
}