#include<iostream>
#include<vector>
using namespace std ; 
int main(){
  
    vector<int> nums = {3,2,4};
    vector<int> ans ;
    int target = 6;
    int I, J;
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = i +1 ; j < nums.size();j++){
            if(nums[i]+nums[j]==target){
                I= i , J = j;
                break;

           
            }
        }
    }
    cout << I <<J ; 
    return 0 ; 
}