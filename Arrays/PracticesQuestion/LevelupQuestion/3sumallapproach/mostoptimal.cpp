#include<iostream>
#include<set>
#include<algorithm>
using namespace std ; 
int main(){
    int a[6] = {-1,0,1,2,-1,-4} ; 
    int n = 6 ; 
    sort(a , a+n) ; 
    for(int i = 0 ; i < n ; i++){
        int first = a[i] ;
        int j = i + 1 , k = n - 1 ; 
        while(j < k ){
           int sum = a[i] + a[j] + a[k] ;
           if (sum == 0)
            {
                cout << a[i] << a[j] << a[k] ; 
                return 0 ;
            }
            else if(sum > 0 ){
                k-- ; 
            }else{
                j++ ; 
            }
        }
    }
}