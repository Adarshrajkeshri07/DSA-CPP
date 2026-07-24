// #include<iostream>// brute force se 
// using namespace std ; 
// int main(){
//     int arr[4] = { 2,7,11,15} ; 
//     int target ,I = -1, J = -1 ; 
//     bool match = false ; 
//     cout << " enter the value of target : " ; 
//     cin >> target ; 
//     for(int i = 0 ; i < 4 ; i++){
//         for(int j = i + 1 ; j < 4 ; j++){
//             if(arr[i]+arr[j]==target){
//                 I = i ,J = j ; 
//                 match = true ;
//             }
//         }
//     }
// if(match == true ){
//     cout << I << J ; 
// }
// else
// cout << " invalid " ; 
//     return 0 ; 

// }
// two pointer se ..
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int pairsum(vector<int> arr , int target , int size){
//      int st = 0 ; int end = size - 1 ;
//       int  sum = 0 ;  
//      while(st <  end ){
//         sum = arr[st] + arr[end] ;
//         if(sum <  target){
//             st++;
//         } 
//         else 
//         if(sum >  target){
//             end-- ; 
//         }
//         else 
//          {
//             cout << arr[st] << arr[end] ;
//             return 0 ; 
//          }
//      }
//      cout <<  " not found" ; 
//      return 0 ; 
// }
// int main(){
//     int n ; 
//     cout << " enter the value of n : " ; 
//     cin >> n ; 
//     vector<int> nums (n) ; 
//     cout << "enter the value of elements: " ; 
//     for(int &val : nums){
//         cin >> val ; 
//     }
//     int target ; 
//     cout << " enter the value of target : " ; 
//     cin >> target ; 
//     pairsum(nums ,target ,nums.size() );
//     return 0 ; 
// }
// two pointer using vector style ... 
#include<iostream>
#include<vector>
using namespace std ; 
vector<int> pairsum(vector<int> a , int target , int size){
    vector<int> ans ; 
    int st = 0 , end = size - 1 ,pairsum = 0   ; 
    while(st < end){
        pairsum = a[st] + a[end] ; 
        if(pairsum < target){
            st++ ; 
        }else if
             (pairsum > target)
            {
                end--;
            }
            else{
                ans.push_back(st) ;
                ans.push_back(end) ;
                return ans ;
            }
    }
    return ans ; 
   
}
int main(){
    int n ; 
    cout << " enter the value of   n : " ; 
    cin >> n ;
    vector<int> nums (n); 
    cout <<  " enter the value of element : " ; 
    for(int &val : nums){
        cin >> val ; 
    }
    int target ; 
    cout << " enter the value of target : " ; 
    cin >> target ; 
    vector<int> ans ; 
   ans =  pairsum(nums,target,n);
 if(ans.size()==2){
    cout << ans[0] << ans[1] ; 
 }else{
    cout << " pair sum doent matched " ; 
 }
 return 0 ; 

}