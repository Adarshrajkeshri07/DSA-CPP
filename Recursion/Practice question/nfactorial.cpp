#include <iostream>
using namespace std;

int factorial(int n)
{

    // ================================
    // BASE CASE
    // ================================
    if (n == 1 || n == 0)
    {
        return 1;
    }

    // Ek recursive call
    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{

    int n;

    cout << "enter the value of n : ";
    cin >> n;

    cout << factorial(n);

    return 0;
}

/*
========================================================
METHOD 1: TC = TOTAL RECURSIVE CALLS × WORK IN EACH CALL
========================================================

Suppose n = 5

Calls:

factorial(5)
    ↓
factorial(4)
    ↓
factorial(3)
    ↓
factorial(2)
    ↓
factorial(1)   ← base case

Total recursive calls = n
                      = 5

Har call ke andar:

    int ans = n * factorial(n - 1);

Yahan multiplication aur baaki ka kaam constant hai.

Work in each call = O(1)

Therefore:

TC = Total recursive calls × Work in each call

   = n × O(1)

   = O(n)

So,

TIME COMPLEXITY = O(n)


========================================================
METHOD 2: RECURSIVE RELATION
========================================================

Har call mein:

factorial(n)
     ↓
n * factorial(n-1)

Current call ka work = O(1)

Isliye:

T(n) = T(n-1) + O(1)


Expand:

T(n) = T(n-1) + 1

T(n-1) = T(n-2) + 1

Therefore:

T(n) = T(n-2) + 1 + 1

Aage:

T(n) = T(n-3) + 1 + 1 + 1

...

T(n) = T(1) + n-1

T(1) = O(1)

Therefore:

T(n) = O(n)


FINAL:

Time Complexity = O(n)
Space Complexity = O(n)
                 ↑
          recursion call stack
*/
// == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
//     SPACE COMPLEXITY == == == == == == == == == == == == == == == == == == == == == == == == == == == ==

//     IMPORTANT :

//     Recursion mein har function call ka ek
//         STACK FRAME banta hai.

//     For n = 5 :

//     factorial(5)   ← Stack Frame 1 factorial(4)   ← Stack Frame 2 factorial(3)   ← Stack Frame 3 factorial(2)   ← Stack Frame 4 factorial(1)   ← Stack Frame 5

//     Jab tak BASE CASE nahi milta,
//         saare calls memory mein STACK par rehte hain.

//         Maximum Stack Frames = n

//             Formula :

//     SC = Maximum Recursive Calls × Space Used Per Call
// SC = Height of Recursion Stack × Space Used Per Call

    //     = n × O(1)

    //     = O(n)

    //         Therefore :

    //     SPACE COMPLEXITY = O(n)

    //                        == == == == == == == == == == == == == == == == == == == == == == == == == == == ==
    //                        FINAL ANSWER == == == == == == == == == == == == == == == == == == == == == == == == == == == ==

    //                        TIME COMPLEXITY = O(n)

    //                            SPACE COMPLEXITY = O(n)
    //                    ↑ CALL STACK

    //                                                   Remember :

    //     Recursive function mein :

    //     TIME  → kitne calls × har call ka work

    //         SPACE → maximum kitne calls ek saath
    //             CALL STACK mein present hain == ==
    //     == == == == == == == == == == == == == == == == == == == == == == == == == ==
    //     */