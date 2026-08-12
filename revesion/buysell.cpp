#include<iostream>
#include<vector>
#include<climits>
using namespace std ; 
int maxprofit(vector<int>& arr){
    int n = arr.size() ; 
    int bestbuy = arr[0] ; 
    int maxprofit = 0 ; 
    for(int i = 1 ; i < n ; i++){
        if(bestbuy <= arr[i]){
            maxprofit = max(maxprofit , arr[i] - bestbuy) ; 
        }
        bestbuy = min(bestbuy , arr[i]) ; 
    }
    return maxprofit ; 
}
     int main(){
        vector<int> arr = {7, 1, 2, 5, 4};

        int ans = maxprofit(arr);

        cout << ans;

        return 0;
    }
    
       
    