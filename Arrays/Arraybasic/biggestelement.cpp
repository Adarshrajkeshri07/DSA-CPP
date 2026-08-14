#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int a[4] ;
    cout <<" enter the value of element " << endl ;
    for(int i = 0 ; i < 4 ; i++){
        cin >> a[i];
    }
    int largest = a[0];
    for(int i = 0 ; i <  4 ; i++){
        // if (largest < a[i])// we use instead of this code = max (a[i] ,largest) ;
        {
            largest = max(a[i] ,largest);
            //largest = a[i] ;
        }
    }
    cout << "the number is the largest element in the array" << " " << largest ;
    
return 0 ;
}