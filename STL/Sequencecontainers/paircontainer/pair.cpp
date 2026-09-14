#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    // pair = 2 values ko ek saath store karta hai
    // Dono values ka datatype same ya different ho sakta hai

    // ==================== BASIC PAIR ====================

    // pair create kiya
    pair<int, string> p;

    // first mein pehli value store hoti hai
    p.first = 10;

    // second mein dusri value store hoti hai
    p.second = "Adarsh";

    // pair ki first value access karna
    cout << "First: " << p.first << endl;

    // pair ki second value access karna
    cout << "Second: " << p.second << endl;

    // ==================== PAIR INITIALIZATION ====================

    // Directly pair ko values ke saath create kar sakte hain
    pair<int, int> p2 = {10, 20};

    cout << p2.first << " ";
    cout << p2.second << endl;

    // make_pair() → pair banane ka ek aur tarika
    pair<int, string> p3 = make_pair(101, "Adarsh");

    cout << p3.first << " ";
    cout << p3.second << endl;

    // {} se bhi pair create kar sakte hain
    pair<int, int> p4 = {5, 7};

    // pair ko update bhi kar sakte hain
    p4.first = 100;
    p4.second = 200;

    // ==================== PAIR KE PAIR ====================

    // Ek pair ke andar doosra pair bhi rakh sakte hain
    pair<int, pair<int, int>> p5 = {1, {2, 3}};

    // p5.first → 1
    cout << p5.first << endl;

    // p5.second.first → 2
    cout << p5.second.first << endl;

    // p5.second.second → 3
    cout << p5.second.second << endl;

    // ==================== PAIR COMPARISON ====================

    // Pair ko compare bhi kar sakte hain
    // Pehle first compare hota hai
    // Agar first same ho to second compare hota hai

    pair<int, int> a = {2, 5};
    pair<int, int> b = {3, 1};

    if (a < b)
    {
        cout << "a is smaller" << endl;
    }

    // ==================== VECTOR + PAIR ====================

    // Vector ke andar pair store kar sakte hain
    // Ye DSA mein bahut common hai

    vector<pair<int, int>> v;

    // push_back() → ready-made pair ko vector mein add karta hai
    v.push_back({10, 20});

    v.push_back({30, 40});

    // emplace_back() → pair ko directly vector ke andar construct karta hai fast hota hai ...
    // Pair ke constructor ko directly values de sakte hain

    v.emplace_back(50, 60);

    v.emplace_back(70, 80);
    // push_back()
    // → Pair pehle banta hai
    // → Phir vector mein add hota hai

    v.push_back({10, 20});

    // emplace_back()
    // → Pair directly vector ke andar construct hota hai

    v.emplace_back(10, 20);

    // Vector ke pair ko access karna
    cout << v[0].first << " ";
    cout << v[0].second << endl;

    cout << v[2].first << " ";
    cout << v[2].second << endl;

    // Vector ke saare pairs ko print karna
    for (pair<int, int> val : v)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}