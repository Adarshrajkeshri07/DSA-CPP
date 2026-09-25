#include <iostream>
#include <vector>
using namespace std;

// a      = original array
// ans    = current subset
// i      = current element ka index
void ps(vector<int> &a, vector<int> &ans, int i)
{

    // Saare elements par decision ho gaya
    if (i == a.size())
    {

        // Current subset print karo
        for (auto it : ans)
        {
            cout << it;
        }

        cout << endl;
        return;
    }

    // CHOICE 1: Element ko lo
    ans.push_back(a[i]);

    // Next element par jao
    ps(a, ans, i + 1);

    // BACKTRACK: liya hua element hatao
    ans.pop_back();

    // CHOICE 2: Element ko mat lo
    ps(a, ans, i + 1);
}

int main()
{

    vector<int> a = {1, 2, 3};
    vector<int> ans;

    // Recursion start from index 0
    ps(a, ans, 0);

    return 0;
}


// ==================================================
// TIME COMPLEXITY (TC)
// ==================================================

// Har element ke 2 choices hain:
//     1. TAKE
//     2. DON'T TAKE

// n elements ke liye total subsets = 2^n

// Har subset ko print karne mein maximum O(n) time lag sakta hai.

// Therefore:

// TC = O(n * 2^n)


// ==================================================
// SPACE COMPLEXITY (SC)
// ==================================================

// Recursion ki maximum depth = n
// ans vector mein maximum n elements aa sakte hain.

// Therefore:

// SC = O(n)

// Note:
// ans vector + recursion stack = O(n)
