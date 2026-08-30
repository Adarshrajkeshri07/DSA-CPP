#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char strings[] = "adarsh" ;  // == char string[] = {'a', 'd', 'a', 'r', 's', 'h', '\0'} ;



    string name = "adarshrajkeshri";
    // string is used to store a sequence of characters.



    // cout << name;
    // This prints the value stored in the string.




    char str[] = "helloworld";
    // This is a C-style string.
    // The compiler automatically adds '\0' at the end of the string.



    
    cout << strlen(str) << endl;
    // strlen() counts the number of characters in the string.
    // It does not count the '\0' character.

    return 0;
}