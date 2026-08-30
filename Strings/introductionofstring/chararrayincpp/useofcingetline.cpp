#include <iostream>
using namespace std;

int main()
{
    char str[50];

    cout << "Enter your full name: ";

    cin.getline(str, 50);
    // cin.getline() poori line ko read karta hai.
    // Ye spaces ko bhi read karta hai.
    //
    // Example:
    // Input:  adarsh raj keshri
    // Output: adarsh raj keshri
    //
    // getline() '\n' (Enter) milne tak characters read karta hai.
    // '\n' ko array mein store nahi karta.
    // Enter milte hi reading stop ho jaati hai.
    //
    // Reading ke end mein getline() automatically '\0' add karta hai.
    // '\0' C-style string ka ending character hai.
    //
    // str[50] ka matlab:
    // Maximum 49 actual characters store ho sakte hain
    // aur 1 position '\0' ke liye hoti hai.

    cout << "Your name is: " << str << endl;

    return 0;
} 





