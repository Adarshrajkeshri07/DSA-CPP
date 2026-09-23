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
// == == == == == == == == RECURSION SHORT NOTE == == == == == == == ==

//     1. RECURSION
//         Recursion = jab ek function khud ko hi call karta hai.

//Har recursive function mein mainly 2 parts hote hain :
// • Base Case → recursion stop karta hai.
// • Recursive Case → function khud ko call karta hai.

//     2. CALL STACK
//         Har function call STACK mein ek stack frame banata hai.

//     Example :

//     sum(5)
//         sum(4)
//             sum(3)
//                 sum(2)
//                     sum(1)
//                         sum(0) ← Base Case

//                             Base case ke baad calls reverse order mein return hoti hain.

//     IMPORTANT:
// SC = Height of Stack × Space Per Call

//      3. RECURSION TREE
//          Recursive calls ko tree /
//      diagram ke form mein represent karna
//          Recursion Tree kehlata hai.

//      Example :

//     f(5) /
//      f(4) /
//      f(3) /
//      f(2) /
//      f(1)

//          Agar ek call se multiple recursive calls nikalti hain,
//     to tree branches mein divide hota hai.

//     4. RECURRENCE RELATION
//         Recursive function ke TC ko equation ke form mein likhna.

//     Example :

//     T(n) = T(n - 1) + O(1)

//                           Yahan : T(n - 1) = recursive call ka work
//     O(1) = current call ka work

//            Expand karke TC find karte hain.

//            5. TIME COMPLEXITY(TC)

// Simple formula :

//     TC = Total Calls × Work Per Call

//         Example :

//     n calls × O(1)

//     = O(n)

//         6. SPACE
//         COMPLEXITY(SC)

// Recursion mein :

//     SC = Height of Stack × Space Per Call

//         Example :

//     n × O(1)

//     = O(n)

//       == == == == == == == == QUICK REVISION == == == == == == == ==

//       Base Case      → Stop recursion
//           Recursive Case → Smaller problem
//               Call Stack     → Active function calls
//                   Recursion Tree → Calls ka visual structure
//                       Recurrence     → TC ki mathematical equation
//                           TC             → Total work
//                               SC             → Maximum stack memory

//       == == == == == == == == == == == == == == == == == == == == == == == == ==