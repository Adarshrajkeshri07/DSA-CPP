#include <iostream>
using namespace std;

int fibonacci(int n)
{

    // Base Case
    if (n == 0 || n == 1)
    {
        return n;
    }

    // Har call se 2 recursive calls:
    // fibonacci(n-1) + fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    cout << fibonacci(7);

    /*
    TIME COMPLEXITY:
    O(2^n)

    Kyuki har function call se lagbhag 2 naye calls
    generate hote hain.

    SPACE COMPLEXITY:
    O(n)

    Kyuki recursion ki maximum depth n tak ja sakti hai.
    Ek time par stack me maximum n calls rahengi.
    */
}