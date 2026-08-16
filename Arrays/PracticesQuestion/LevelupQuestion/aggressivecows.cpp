#include<iostream>
#include<climits>
#include<algorithm>
using namespace std ; 
bool ispossible(int a[] , int n ,int c ,int mid);
int main(){
    int a[5] = {1,2,8,4,9} ;

    int n = 5 ;
    sort(a, a + n);
    int st = 1 ,end; 
    int ans = -1 ; 
    
    end =  a[n-1] - a[0] ; 
  while(st <= end){
    int mid = st + (end - st) / 2 ; 
    if(ispossible(a,n,3,mid)){
        ans = mid ;
        st = mid + 1;
        
    }else {
        end = mid - 1;
    }
  }
  cout << ans ; 
  return 0 ; 
}
bool ispossible(int a[], int n, int c, int mid){
   

    int cow = 1  , laststallpos = a[0] ; 
    for(int i = 1 ; i < n ; i++ ){
        if( a[i] - laststallpos >= mid ){
            cow++ ;
            laststallpos = a[i] ; 
        }
      
    }
    if (cow == c)
    {
        return true;
    }
    else
    {
        return false;
    }
}