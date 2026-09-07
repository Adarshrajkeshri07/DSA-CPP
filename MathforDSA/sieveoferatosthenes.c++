#include <iostream>
#include <vector>
using namespace std;
class solution
{
public:
    int coutprime(int n)
    {
        vector<bool> isprime(n + 1, true);
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isprime[i])
            {
                count++;
                for (int j = i * 2; j < n; j += i)
                {
                    isprime[j] = false;
                }
            }
        }

        return count;
    }
};
int main()
{

    solution obj;

    int n = 16;

    cout << obj.coutprime(n);

    return 0;
}

// #include<iostream>
// #include<string>
// using namespace std ; 
// bool prime(int n){
//         bool isprime = true ; 
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 isprime = false;
//                 break;
//             }
//         }

//         return isprime;
// }
// int main(){
//     int n = 16 ; 
//    for(int i = 2 ; i < n ; i++){
//     if(prime(i)){
//         cout <<  i << " " ; 
//     }
//    }
//    return 0 ; 
// }
