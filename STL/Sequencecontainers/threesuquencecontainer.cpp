// 🔥 Placement ke liye bas ye 3 lines yaad rakh

// Vector = Fast indexing

// Deque = Fast front + back operations + indexing

// List = Fast insertion / deletion with iterator, but no indexing

// ===================== VECTOR =====================

// Vector = Dynamic Array
// Elements contiguous memory mein store hote hain.

// Main advantage:
// → Indexing / Random Access fast hota hai → O(1)
// Example: v[2]

// Important functions:

// push_back(x)
// → End mein element add karta hai
// → Amortized O(1)

// emplace_back(x)
// → End mein element add karta hai
// → Object ko directly construct kar sakta hai

// pop_back()
// → Last element remove karta hai
// → O(1)

// front()
// → First element deta hai

// back()
// → Last element deta hai

// size()
// → Total elements batata hai

// empty()
// → Check karta hai vector empty hai ya nahi

// begin()
// → First element ka iterator

// end()
// → Last element ke BAAD wali position ka iterator

// rbegin()
// → Reverse traversal mein last element se start

// rend()
// → Reverse traversal mein first element ke pehle wali position

// insert()
// → Given position par element add
// → Generally O(n)

// erase()
// → Given position/range se element delete
// → Generally O(n)

// clear()
// → Saare elements delete

// [] / at()
// → Index se element access
// → v[2] = O(1)

// Interview point:
// → Vector mein random access fast hota hai.
// → Front/middle insertion/deletion costly hoti hai.

// 🔥 Yaad rakho:
// Vector = Dynamic Array + Fast Indexing
//-------------------------------------------------------------------------------------------------------------
// ===================== LIST =====================

// List = Doubly Linked List

// Har node mein:
// → Data
// → Previous node ka link
// → Next node ka link

// Memory contiguous nahi hoti.

// Main advantage:
// → Known iterator/position par insertion/deletion fast → O(1)

// Important functions:

// push_back(x)
// → End mein element add → O(1)

// push_front(x)
// → Front mein element add → O(1)

// emplace_back(x)
// → End mein element add

// emplace_front(x)
// → Front mein element add

// pop_back()
// → Last element remove → O(1)

// pop_front()
// → First element remove → O(1)

// front()
// → First element deta hai

// back()
// → Last element deta hai

// size()
// → Total elements

// empty()
// → Check karta hai list empty hai ya nahi

// begin()
// → First element ka iterator

// end()
// → Last element ke BAAD wali position

// rbegin()
// → Last element se reverse traversal

// rend()
// → First element ke pehle wali reverse position

// insert()
// → Given iterator position par element add → O(1)

// erase()
// → Given iterator position ka element delete → O(1)

// remove(x)
// → Given value ke elements remove karta hai

// sort()
// → List ko ascending order mein sort karta hai

// reverse()
// → List ka order reverse karta hai

// unique()
// → Consecutive duplicate elements remove karta hai

// clear()
// → Saari list delete/empty

// ❌ List mein indexing nahi hoti:
// l[2] ❌

// Agar 3rd element chahiye:
// iterator se traverse karna padega.

// Interview point:
// → Random access slow → O(n)
// → Known iterator par insertion/deletion fast → O(1)

// 🔥 Yaad rakho:
// List = Doubly Linked List + Fast Insertion/Deletion
//         + No Random Indexing
//-------------------------------------------------------------------------------
// ===================== DEQUE =====================

// Deque = Double Ended Queue

// Front aur Back dono ends se
// insertion + deletion kar sakte hain.

// Deque internally contiguous single array jaisa
// simple nahi hota; segmented memory use kar sakta hai.

// Main advantage:
// → Front + Back operations fast
// → Random access bhi possible

// Important functions:

// push_back(x)
// → Back mein element add → O(1) amortized

// push_front(x)
// → Front mein element add → O(1) amortized

// emplace_back(x)
// → Back mein element add

// emplace_front(x)
// → Front mein element add

// pop_back()
// → Back se element remove → O(1)

// pop_front()
// → Front se element remove → O(1)

// front()
// → First element

// back()
// → Last element

// size()
// → Total elements

// empty()
// → Check karta hai deque empty hai ya nahi

// begin()
// → First element ka iterator

// end()
// → Last element ke BAAD wali position

// rbegin()
// → Last element se reverse traversal

// rend()
// → First element ke pehle wali reverse position

// [] / at()
// → Index se element access
// → O(1)

// insert()
// → Given position par element add
// → Generally O(n)

// erase()
// → Given position/range se element delete
// → Generally O(n)

// clear()
// → Saare elements delete

// Interview point:
// → Random access possible → O(1)
// → Front + Back insertion/deletion fast
// → Middle insertion/deletion vector ki tarah generally O(n)

// 🔥 Yaad rakho:
// Deque = Fast Front + Back Operations + Fast Indexing






//---------------------------------------------------------------------



// Vector = Dynamic Array + Fast Indexing

// List = Doubly Linked List + Fast Insertion/Deletion
//        with iterator, but no indexing

// Deque = Fast Front + Back Operations + Fast Indexing




//==================================================================================================

// pair<T1, T2>
// → 2 values ko ek unit ki tarah store karta hai

// first
// → first value access

// second
// → second value access

// make_pair()
// → pair create karta hai

// pair<int, string>
// → different datatype bhi store kar sakte hain

// pair<int, int>
// → same datatype bhi store kar sakte hain

// pair ka size
// → exactly 2 elements

// Pair comparison
// → pehle first compare
// → first same ho to second compare