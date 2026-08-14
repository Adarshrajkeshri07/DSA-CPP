#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> adarsh = {7, 0, 6, 1, 2, 6, 0, 1, 0, 3};
    for (int i : adarsh)
    {
        cout << i << " ";
    }
    cout << " size : " << adarsh.size();
    adarsh.push_back(9);
    adarsh.push_back(2);
    cout << " size after push back  : " << adarsh.size() << endl;
    for (int i : adarsh)
    {
        cout << i << " ";
    }
    adarsh.pop_back();
    adarsh.pop_back();
    adarsh.pop_back();
    // last index value oko hatayega ;
    //  2nd last index value oko hatayega ;
    cout << " size after popback  : " << adarsh.size() << endl;
    for (int i : adarsh)
    {
        cout << i << " ";
    }

    return 0;
}