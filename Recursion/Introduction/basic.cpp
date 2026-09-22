#include <iostream>
using namespace std;

// ==================== RECURSION ====================

// Recursion:
// Jab ek function khud ko hi call karta hai.

// Recursion ke 2 main parts:
//
// 1. Base Case
//    -> Recursion ko STOP karta hai.
//
// 2. Recursive Case
//    -> Function khud ko dobara call karta hai.

// ==================== CALL DOWN ====================
//
// Example: n = 3
//
// printnumber(3)
//       ↓
// printnumber(2)
//       ↓
// printnumber(1)
//       ↓
//    BASE CASE
//
// Matlab function neeche-neeche ja raha hai.
//
// 3 → 2 → 1 → STOP

// ==================== CALL STACK ====================
//
// Har baar function call hota hai,
// uska ek call Stack me store hota hai.
//
// Stack:
//
// printnumber(1)  ← TOP
// printnumber(2)
// printnumber(3)
//
// Base case milne ke baad
// Stack se function ek-ek karke bahar aata hai.

// ==================== CALL BACK / RETURN ====================
//
// Jab base case milta hai:
//
// 3 → 2 → 1 → STOP
//
// Ab function wapas aata hai:
//
// 1 → 2 → 3
//
// Isliye recursion ko samajhte waqt
// "CALL DOWN" aur "CALL BACK" dono samajhna important hai.
//
// return ka matlab:
// Current function khatam karo
// aur jis function ne ise call kiya tha,
// uske paas wapas jao.

void printnumber(int n)
{

    // BASE CASE
    // Yahan recursion STOP hoga.
    if (n == 1)
    {
        cout << n;
        return;
    }

    // Current number print karo
    cout << n << " ";

    // RECURSIVE CALL
    // Function khud ko dobara call kar raha hai.
    printnumber(n - 1);

    // Is line ke baad function
    // CALL BACK phase me aayega.
}

int main()
{

    int n = 3;

    printnumber(n);

    return 0;
}