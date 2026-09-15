#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> a = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 4, 6}};

    int n = a.size();
    vector<int > ans ; 

    unordered_set<int> s;
    int adding  = 0  , expsum = 0 ; 

    int first , second ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            adding += a[i][j];
            if(s.find(a[i][j]) != s.end()){
                first = a[i][j] ; 
                ans.push_back(first) ; 
            }
            s.insert(a[i][j]);
          
        }     
     
    }
    expsum = (n * n) * (n * n + 1 ) / 2;
    second = expsum + first - adding ; 
    ans.push_back(second) ; 

    for(int i : ans){
        cout << i << " " ; 
    }  

    return 0;
}