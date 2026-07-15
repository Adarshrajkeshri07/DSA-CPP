//brute force approch ....
#include<iostream>
#include <climits>
using namespace std ; 
int main(){
    int a[7] = {3,-4,5,4,-1,7,-8};
   int maxsum = INT_MIN;
    for(int st = 0 ; st < 7 ; st++){
        int sum = 0;
        for(int end = st ; end <7 ; end++){
          sum+=a[end];
          maxsum = max(sum,maxsum);
        }
       
    }
    cout << " maximum subaaray " << maxsum;
    return 0 ; 
}