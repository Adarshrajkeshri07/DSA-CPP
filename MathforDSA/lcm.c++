#include <iostream>
using namespace std;
int lowestfactor(int a , int b){
    int ld , lcm = 1 ; 
    int temp = a*b ; 
    while (b != 0)
    {
        ld = a % b;
        a = b;
        b = ld;
    }
    lcm = temp / a;
    cout << lcm ;
    return 0 ; 
  
}
int main()
{
    int a, b;
    cout << "enter the value of a and b ";
    cin >> a >> b;
    lowestfactor(a,b) ; 
    return 0 ; 

}