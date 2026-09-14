// ==================== STACK ====================

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // stack = LIFO data structure
    // LIFO = Last In First Out
    // Jo element last mein aayega,
    // wahi sabse pehle bahar jayega.

    // stack create kiya
    stack<int> s;

    // ==================== PUSH ====================

    // push() → stack ke TOP par element add karta hai
    s.push(10);
    s.push(20);
    s.push(30);

    // Stack:
    //
    //       30  ← TOP
    //       20
    //       10
    //
    // Jo last mein add hua = 30
    // wahi pehle remove hoga

    // ==================== TOP ====================

    // top() → stack ke TOP element ko access karta hai
    cout << "Top: " << s.top() << endl;

    // Output:
    // Top: 30

    // ==================== POP ====================

    // pop() → TOP element ko remove karta hai
    // pop() koi value return nahi karta
    s.pop();

    // Ab stack:
    //
    //       20  ← TOP
    //       10

    cout << "Top after pop: " << s.top() << endl;

    // ==================== EMPTY ====================

    // empty() → check karta hai stack empty hai ya nahi
    // Empty hone par true
    // Empty nahi hone par false

    cout << "Empty: " << s.empty() << endl;

    // ==================== SIZE ====================

    // size() → stack mein total elements batata hai
    cout << "Size: " << s.size() << endl;

    // ==================== EMPLACE ====================

    // emplace() → stack ke TOP par element directly construct/add karta hai
    s.emplace(50);

    cout << "Top: " << s.top() << endl;

    // ==================== SWAP ====================

    // swap() → do stacks ke elements exchange karta hai

    stack<int> s2;

    s2.push(100);
    s2.push(200);

    s.swap(s2);

    // Ab s mein s2 ke elements aa gaye
    // Aur s2 mein s ke old elements aa gaye

    // ==================== CLEAR ====================

    // Stack mein direct clear() function nahi hota ❌
    //
    // Saare elements remove karne ke liye:
    while (!s.empty())
    {
        s.pop();
    }

    // Ab stack empty hai
    cout << "After clearing: " << s.empty() << endl;

    return 0;
}