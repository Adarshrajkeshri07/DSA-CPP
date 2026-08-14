#include<iostream>
#include<vector>
using namespace std ; 
int main(){
vector<int> pi ; 
cout << pi.size()<< endl;
cout << pi.capacity()<< endl;
pi.push_back(7);
pi.push_back(0);
pi.push_back(6);
pi.push_back(6);
pi.push_back(6);
cout << pi.size() << endl;
cout << pi.capacity() << endl;
return 0; 
}