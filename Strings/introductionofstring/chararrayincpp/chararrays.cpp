// It is also known as a C-string.

#include <cstring>
#include <iostream>

using namespace std;

int main()
{

    char str[] = {'a', 'b', 'c', 'd', '\0'};
    // '\0' is necessary to mark the end of a C-string.
    // Otherwise, the string does not know where it ends.

    int arr[] = {1, 2, 3};

    cout << arr << endl;
    // It prints the memory address of the array.

    cout << str << endl;
    // It prints the characters of the string.

    cout << strlen(str) << endl;
    // strlen() returns the length of the string.
    // It does not count '\0'.
    char str[] = "helloworld";
    // This is a C-style string.
    // The compiler automatically adds '\0' at the end of the string.

    cout << strlen(str) << endl;
    // strlen() counts the number of characters in the string.
    // It does not count the '\0' character.

    return 0;
}
