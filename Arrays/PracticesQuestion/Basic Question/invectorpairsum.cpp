#include<iostream>
#include<vector>
using namespace std ; 
vector<int> pairsum(vector<int> nums , int target ) {
    vector<int> ans ; 
    int n =  nums.size();
    int i = 0 , j = n - 1 ,sum = 0 ;
    while(i < j ){
        sum = nums[i] + nums[j] ; 
        if(sum < target){
            i++;
        }else if(sum >  target) {
            j--;
        }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans ; }
    } 
    return ans ; 
}
int main(){
    vector<int> nums = { 1,2,4,5,6};
     vector<int> ans = pairsum(nums , 11);
     cout << ans[0] <<  ans[1] ;
    return 0 ; 
} 