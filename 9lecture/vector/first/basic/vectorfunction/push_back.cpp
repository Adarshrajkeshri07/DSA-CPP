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
    cout << " size after  : " << adarsh.size() << endl ;
    for(int i : adarsh){
        cout << i  << " ";
    }
    return 0;
}