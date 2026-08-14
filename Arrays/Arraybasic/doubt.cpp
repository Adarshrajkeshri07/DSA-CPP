
#include<iostream>
using namespace std ; 
  int change(int a)
{
    a = 100;
}

int main()
{
    int x = 10;

    change(x);

    cout << x;
}