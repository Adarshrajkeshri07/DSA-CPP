#include<iostream>
#include<set>
using namespace std ; 
int main(){
    int a[6] = {-1,0,1,2,-1,-4};
    int n = 6 ; 
    for(int i = 0 ; i < n ; i++){
        int target = -a[i] ; 
        set<int> s ; 
        for(int j = i + 1 ; j < n ; j++){
            int sec = a[j] ;
            int third = target - sec ;   
            if(s.find(third) != s.end()){
                    cout << target << " " << sec << " " << third ;
                    return 0 ; 
            }
            s.insert(sec) ; 

        }
    }
}

// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &a)
//     {
//         int n = a.size();

//         set<vector<int>> uniquetriplet;
//         for (int i = 0; i < n; i++)
//         {
//             int target = -a[i];
//             set<int> s;
//             for (int j = i + 1; j < n; j++)
//             {
//                 int third = target - a[j];
//                 if (s.find(third) != s.end())
//                 {
//                     vector<int> triplet = {a[i], a[j], third};
//                     sort(triplet.begin(), triplet.end());
//                     uniquetriplet.insert(triplet);
//                 }
//                 s.insert(a[j]);
//             }
//         }
//         vector<vector<int>> ans(uniquetriplet.begin(), uniquetriplet.end());
//         return ans;
//     }
// };