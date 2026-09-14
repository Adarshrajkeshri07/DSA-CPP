
// DEQUE
// → Container
// → C++ STL ka part
// → Front + Back dono se add / delete

//                DEQUEUE
// → Operation
// → Queue se element remove karna
// → Normally front se remove hota hai
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // deque banayi — ye double ended queue hoti hai
    // front aur back dono side se element add/delete kar sakte hain
    deque<int> d = {2, 7, 8, 9, 6};

    // deque ke end mein element add karta hai
    d.push_back(1);

    // deque ke end mein element add karta hai
    // emplace_back bhi end mein element add karta hai
    d.emplace_back(2);

    // deque ke starting mein element add karta hai
    d.push_front(3);

    // deque ke starting mein element add karta hai
    // emplace_front bhi starting mein element add karta hai
    d.emplace_front(4);

    // last element ko delete karta hai
    d.pop_back();

    // first element ko delete karta hai
    d.pop_front();

    // deque ka first element return karta hai
    cout << "Front: " << d.front() << endl;

    // deque ka last element return karta hai
    cout << "Back: " << d.back() << endl;

    // deque mein kitne elements hain wo batata hai
    cout << "Size: " << d.size() << endl;

    // check karta hai ki deque empty hai ya nahi
    // empty hone par true, warna false
    cout << "Empty: " << d.empty() << endl;

    // begin() → first element ka iterator deta hai
    auto itr = d.begin();

    // *itr → jis element par iterator hai uski value
    cout << "Begin: " << *itr << endl;

    // end() → last element ke BAAD wali position ka iterator
    auto itr2 = d.end();

    // end() ko directly dereference nahi karna
    // *itr2 ❌

    // rbegin() → last element se reverse traversal start karta hai
    auto ritr = d.rbegin();

    // *ritr → last element ki value
    cout << "Rbegin: " << *ritr << endl;

    // rend() → first element se pehle wali reverse position
    auto ritr2 = d.rend();

    // rend() ko directly dereference nahi karna
    // *ritr2 ❌

    // insert() → given position par element add karta hai
    auto pos = d.begin();
    ++pos;

    d.insert(pos, 100);

    // erase() → given position ka element delete karta hai
    auto del = d.begin();
    ++del;

    d.erase(del);

    // erase(first, last) → given range ke elements delete karta hai
    // d.erase(d.begin(), d.begin() + 2);

    // clear() → deque ke saare elements delete kar deta hai
    // d.clear();

    // at(index) → given index par element access karta hai
    cout << "At index 2: " << d.at(2) << endl;

    // [] → index ke through element access karta hai
    cout << "Index 2: " << d[2] << endl;

    // deque ke elements ko index se access kar sakte hain
    // kyunki deque random access support karta hai

    // deque ke har element ko ek-ek karke val mein laayega
    for (int val : d)
    {
        cout << val << " ";
    }

    return 0;
}