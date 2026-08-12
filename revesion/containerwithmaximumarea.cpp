#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] = {1,8,4,6,2};
    int st = 0 , end = 4 ; 
    int ans = 0  ;
    while(st < end){
        int heigt = min(a[st], a[end]);
        int width = end - st;
        int area = heigt * width;
         ans = max(area, ans);
        if(a[st]<a[end]){
            st++;
        }else {
            end--;
        }
      
    }

    cout << ans;
    return 0;
}