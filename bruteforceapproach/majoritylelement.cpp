#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    int n ; 
    
     cout << " enter the value of n : " ; 
     cin >>  n ; 
  vector<int> nums (n) ; 
  cout<<" enter the value of element : " ; 
  for(int &val : nums){
    cin >> val ; 
  }
  for(int val : nums){
   int  frequency = 0 ; 
    for( int element : nums){
        if (element==val )
        {
            frequency++;
        }
    }
    if (frequency > (n / 2))
    {
        cout <<" the majority element is : "<< val; 
        break;
       
    }
  }
  
    return -1 ; 
}

// class Solution
// {
// public:
//     int majorityElement(vector<int> &arr)
//     {
//         // code here
//         for (int i = 0; i < arr.size(); i++)
//         {
//             int freq = 0;
//             for (int j = 0; j < arr.size(); j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     freq++;
//                 }
//             }
//             if (freq > ((arr.size()) / 2))
//             {
//                 return arr[i];
//             }
//         }
//         return 0;
//     }
// };