#include <iostream>
#include <list>
using namespace std;

int main()
{
    // list banayi — ye doubly linked list hoti hai
    list<int> l = {2, 7, 8, 9, 6};

    // list ke end mein element add karta hai
    l.push_back(1);

    // list ke end mein element add karta hai
    // emplace_back bhi end mein element add karta hai
    l.emplace_back(2);

    // list ke starting mein element add karta hai
    l.push_front(3);

    // list ke starting mein element add karta hai
    // emplace_front bhi starting mein element add karta hai
    l.emplace_front(4);

    // last element ko delete karta hai
    l.pop_back();

    // first element ko delete karta hai
    l.pop_front();

    // list ka first element return karta hai
    cout << "Front: " << l.front() << endl;

    // list ka last element return karta hai
    cout << "Back: " << l.back() << endl;

    // list mein kitne elements hain wo batata hai
    cout << "Size: " << l.size() << endl;

    // check karta hai ki list empty hai ya nahi
    // empty hone par true, warna false
    cout << "Empty: " << l.empty() << endl;

    // begin() → first element ka iterator deta hai
    auto itr = l.begin();

    // *itr → jis element par iterator hai uski value
    cout << "Begin: " << *itr << endl;

    // end() → last element ke BAAD wali position ka iterator
    auto itr2 = l.end();

    // end() ko directly dereference nahi karna
    // *itr2 ❌

    // rbegin() → last element se reverse traversal start karta hai
    auto ritr = l.rbegin();

    // *ritr → last element ki value
    cout << "Rbegin: " << *ritr << endl;

    // rend() → first element se pehle wali reverse position
    auto ritr2 = l.rend();

    // rend() ko directly dereference nahi karna
    // *ritr2 ❌

    // insert() → given position par element add karta hai
    auto pos = l.begin();
    ++pos;

    l.insert(pos, 100);

    // erase() → given position ka element delete karta hai
    auto del = l.begin();
    ++del;

    l.erase(del);

    // remove() → list se given value ke saare occurrences delete karta hai
    l.remove(8);

    // reverse() → list ka order ulta kar deta hai
    l.reverse();

    // sort() → list ko ascending order mein arrange karta hai
    l.sort();

    // unique() → consecutive duplicate elements ko remove karta hai
    l.unique();

    // clear() → list ke saare elements delete kar deta hai
    // l.clear();

    // list ke har element ko ek-ek karke val mein laayega
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}