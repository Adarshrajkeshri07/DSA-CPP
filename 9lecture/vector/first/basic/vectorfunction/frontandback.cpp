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
    adarsh.push_back(9);
    adarsh.push_back(6);
    adarsh.push_back(1);
    adarsh.push_back(2);
    adarsh.push_back(9);
    adarsh.push_back(2);
    adarsh.push_back(0);
    adarsh.push_back(4);
    cout << " size after  : " << adarsh.size() << endl;
        cout << adarsh.front() << " ";// front value ke liye 
        cout << adarsh.back() << " "; // last value ke liye 
        cout << adarsh.back() << " "; // last value ke liye 
        cout << adarsh.back() << " "; // last value ke liye
        cout << adarsh.front() << " "; // front value ke liye
        // we find index value to the element value we use at 
        //adarsh.at(i) = adarsh[i];
        cout << adarsh[0] ;
        cout << adarsh.at(0);
        cout << adarsh.at(2);

        return 0;
}