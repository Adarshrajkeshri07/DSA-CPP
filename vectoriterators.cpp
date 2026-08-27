// vector
// vec.begin () ;  // first element of the vector ..
// vec.end () ; // end + 1 element of the vector ..... because {]
// its work like pointer .........using * before it

//  #include<iostream>
//  #include<vector>
//  using namespace std ;
//  int main(){
//     vector<int>  vec = {1,2,3,4,5} ;
//     cout << *vec.begin () << endl ;
//     cout << *vec.end () ; // its give occured value or end value means end + 1 . that not exist in the vector 5 is end - 1 element ...
//  }

// iterator in vector 
// iterator is pointer ............*iterator is what at the iterator ...





// forward iterator ...............

// vector<int> :: iterator iteratorName ; 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     vector<int>::iterator itr; // iterator is inbuilt or itr is its user define name ........
//     for (itr = vec.begin(); itr < vec.end(); itr++)
//     { // != generally ye use hota hai .....
//         cout << *itr << " ";
//     }
//     return 0;
// }




//backword iterators ...........

// vector<int> :: reverse_iterator iteratorName ;




// using function 
// 1 : -  vec.rbegin() ; <> opposite of vec.begin() ; 
// 2 : -  vec.rend() ; <> opposite of vec.end() ; 


#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector<int> vec = {1,2,3,4,5} ; 
    vector<int> :: reverse_iterator it ; 
    for(it = vec.rbegin() ; it != vec.rend() ; it++){
        cout << *it << " " ; 
    }
}