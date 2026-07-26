#include<iostream>
#include<algorithm>
#include<climits>
using namespace std ; 
int main(){
    int a[6] = {7,1,5,3,6,4};
    int bestbuy = a[0] ; 
    int maxprofit = 0 ; 
    for(int i = 1 ; i < 6 ; i++){
        if(bestbuy<=a[i]){
            maxprofit = max(maxprofit,a[i]-bestbuy);
        }
        bestbuy = min(bestbuy,a[i]);
    }
    cout << maxprofit ; 
    return 0 ; 
}
