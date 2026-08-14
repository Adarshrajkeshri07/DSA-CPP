#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
int binarysearch(vector<int>& arr , int target ){
    int st = 0 , end = arr.size() - 1 ,mid ; 
    while(st <= end ){
        mid =  st + (end - st) / 2;
        if(arr[mid] >  target){
            end = mid - 1 ; 
        }else 
        if(arr[mid] < target){
            st = mid + 1 ; 
        }else {
            return  mid ; 
        }
    }
    return -1 ; 
}
int  main(){
    int n ; 
    cout << " enter the value of n : " ; 
    cin >> n ; 
    vector<int> arr(n) ; 
    cout << " enter the value of arr : " ; 
     for(int& val : arr){
        cin >> val ; 
     }
     sort(arr.begin(),arr.end());
     int target ; 
     int ans ; 
     cout << " enter the value of target : " ; 
     cin >> target; 
      ans = binarysearch(arr,target);
      if(ans!=-1){
        cout << " the target element is = : " << arr[ans] <<  " and its index value is " << ans ; 
      }else 
      cout << " invalid " ; 
     return 0 ; 
}