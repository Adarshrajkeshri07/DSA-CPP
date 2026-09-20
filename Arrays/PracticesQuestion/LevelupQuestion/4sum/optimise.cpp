#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
class question{
    public :
        vector<vector<int>> fourSum(vector<int> &a)
        {
            int n = a.size();
            sort(a.begin() , a.end()) ; 
            vector<vector<int>> answer;
            for (int i = 0; i < n; i++)
            {
                if(i > 0 && a[i] == a[i-1])continue;
                for (int j = i + 1; j < n; j++)
                {
                    if (j > i + 1 && a[j] == a[j - 1])
                        continue;
                    int p = j + 1, q = n - 1;
                    while (p < q)
                    {
                        long long sum =(long long) a[i] + a[j] + a[p] + a[q];
                        if (sum < 0)
                        {
                            p++;
                        }
                        else if (sum > 0)
                        {
                            q--;
                        }
                        else
                        {
                            answer.push_back({a[i], a[j], a[p], a[q]});
                            p++, q--;
                            while(p < q && a[p] == a[p-1]) p++ ; 
                            while(p < q && a[q] == a[q+1]) q-- ; 
                        }
                    }
                }
            }
            return answer ; 
        }
};
int main(){
   vector<int> a = {1,-2 ,2,-1,-1,2,-1,1} ; 
   question obj ; 
   vector<vector<int>> answer = obj.fourSum(a) ; 
   for(auto quatlet : answer){
        cout << " [ " ; 
        for(int x : quatlet){
            cout << x << " " ; 
        }
        cout << " ] " ; 
   }
   return 0 ; 
}




//for revesion seen below ......................................

// #include <iostream>
// #include <vector>
// #include <algorithm>
//     using namespace std;

// class question
// {
// public:
//     vector<vector<int>> fourSum(vector<int> &a)
//     {
//         // Array ka size
//         int n = a.size();

//         // Sorting zaroori hai:
//         // 1. Two-pointer approach ke liye
//         // 2. Duplicate values ko easily skip karne ke liye
//         sort(a.begin(), a.end());

//         // Saare valid quadruplets store honge
//         vector<vector<int>> answer;

//         // First element fix kar rahe hain
//         for (int i = 0; i < n; i++)
//         {
//             // Same value ka duplicate quadruplet avoid karne ke liye
//             if (i > 0 && a[i] == a[i - 1])
//                 continue;

//             // Second element fix kar rahe hain
//             for (int j = i + 1; j < n; j++)
//             {
//                 // Same j value ko dobara process hone se rokta hai
//                 if (j > i + 1 && a[j] == a[j - 1])
//                     continue;

//                 // Third element ke liye left pointer
//                 int p = j + 1;

//                 // Fourth element ke liye right pointer
//                 int q = n - 1;

//                 // Jab tak dono pointers cross nahi karte
//                 while (p < q)
//                 {
//                     // 4 numbers ka sum
//                     // long long overflow se bachne ke liye
//                     long long sum =
//                         (long long)a[i] + a[j] + a[p] + a[q];

//                     // Sum chhota hai:
//                     // sorted array me bada number chahiye
//                     // isliye p ko right move karo
//                     if (sum < 0)
//                     {
//                         p++;
//                     }

//                     // Sum bada hai:
//                     // chhota number chahiye
//                     // isliye q ko left move karo
//                     else if (sum > 0)
//                     {
//                         q--;
//                     }

//                     // Sum exactly 0 mil gaya
//                     else
//                     {
//                         // Valid quadruplet answer me add karo
//                         answer.push_back(
//                             {a[i], a[j], a[p], a[q]});

//                         // Naye pair ko search karne ke liye
//                         p++;
//                         q--;

//                         // p ki duplicate values skip karo
//                         // taaki same quadruplet dobara na aaye
//                         while (p < q && a[p] == a[p - 1])
//                             p++;

//                         // q ki duplicate values skip karo
//                         // taaki same quadruplet dobara na aaye
//                         while (p < q && a[q] == a[q + 1])
//                             q--;
//                     }
//                 }
//             }
//         }

//         // Saare unique quadruplets return karo
//         return answer;
//     }
// };

// int main()
// {
//     // Test array
//     vector<int> a = {1, -2, 2, -1, -1, 2, -1, 1};

//     // Object create
//     question obj;

//     // FourSum function call
//     vector<vector<int>> answer = obj.fourSum(a);

//     // Saare quadruplets print karo
//     for (auto quatlet : answer)
//     {
//         cout << "[ ";

//         for (int x : quatlet)
//         {
//             cout << x << " ";
//         }

//         cout << "] ";
//     }

//     return 0;
// }

