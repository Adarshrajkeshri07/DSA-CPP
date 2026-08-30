#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[15];
    // Ye 15 characters ki capacity wala character array hai.
    // Isme hum C-style string store kar sakte hain.
     cout << " enter the character of your name  : " ; 
    cin >> str;

    // cin >> str sirf space tak ka input read karta hai.
    // Agar input "adarsh raj keshri" hai,
    // to sirf "adarsh" read hoga.
    // Kyunki space milte hi cin input lena stop kar deta hai.



    // User se string input lene ke liye cin use kiya hai.
    // cin space tak ka input read karta hai.

    cout << "your name is : "<< str;
    // Ye input ki hui string ko print karega.

    return 0;
}