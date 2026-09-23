#include <iostream>
using namespace std;

// Recursive function
int sum(int n)
{

    // BASE CASE:
    // Jab n = 0 ho gaya, recursion ko stop karna hai.
    // 0 ka sum = 0
    if (n == 0)
    {
        return 0;
    }

    // RECURSIVE CALL:
    // Har call mein n ko 1 se decrease kar rahe hain.
    //
    // Example:
    // sum(5) → 5 + sum(4)
    // sum(4) → 4 + sum(3)
    // sum(3) → 3 + sum(2)
    // ...
    // sum(0) → 0  ← BASE CASE
    //
    // IMPORTANT:
    // Pehle recursive call neeche jaata hai,
    // phir return ke time values add hoti hain.
    return n + sum(n - 1);
}

int main()
{

    int n;

    cout << "enter the value of n : ";
    cin >> n;

    // Function ko call kiya
    int ans = sum(n);

    // Final answer print
    cout << ans;

    return 0;
}
