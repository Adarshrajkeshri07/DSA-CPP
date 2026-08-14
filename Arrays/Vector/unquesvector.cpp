// #include<iostream>
// using namespace std ;
// int main(){
//     int a ;
//     cout << " enter the value of a : " ;
//     cin >> a ;
//     if(a > 1 &&  (a&(a-1))==0){
//         cout << " the number is the power of two" ;
//     }
//     else
//     cout << " invalid " ;
//     return 0 ;
// }
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {4, 1, 2, 1, 2, 4, 7, 8};
    int ans = 0;
    for (int val : vec)
    {
        ans ^= val;
    }
    cout << ans;
    return 0;
}
// vector me index value nhi hota element value hota hai array type ka jbki array me index value loop chalta hai or vector element value  .....