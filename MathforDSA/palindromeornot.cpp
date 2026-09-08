#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int temp = n ; 
    int ld, rev = 0;
    while (n != 0)
    {
        ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }
    return temp == rev ; 
}
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;
   if(palindrome(n)){
    cout << " palindrome number ....." ; 
   }else {
       cout << "not  palindrome number !!!!!!!";
   }
    return 0;
}