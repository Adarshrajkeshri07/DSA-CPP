// standard template library .................

 //1.> containers
 //2.> iterators
 //3.> algorithms
 //4.> functors

 //1.> Vector :- dynamic size in nature ..............
 // each step increase capacity 2x ..............

 // vector function that's time complexity is O(1) ; 


 // * vec.size();
 // * vec.capacity();
 // * vec.push_back(); == vec.emplace_back ;
 // * vec.pop_back();
 // vec.emplace_back;
 //vec[index] == vec.at(index) ; 
 //vec.front() ; 
 //vec.back() ; 
//vector<int> arr(3,10) ; size = 3 and element are 10 ;



// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> vec1 = {5,4,14,2,3} ; 
//     vector<int> vec2(vec1) ; 
//     for(int i : vec2) {
//         cout << i << " " ;
//         cout << endl;
//     }

//     return 0 ; 
// }



// vector function that's time complexity is O(n)  in the worst case ;
// {
// //vec.erase ...........
// // vec.begin() + n ; <> vec.end() - n - 1  ; 
// }

// #include<iostream>
// #include<vector>
// using namespace std ;
// int main(){
//     vector<int> vec1 = {5,4,14,2,3} ;
//     vector<int> vec2(vec1) ;
//     // vec2.erase(vec2.begin() + 3); // 2,3...,n-1
//     vec2.erase(vec2.begin() + 1 , vec2.begin() + 3); /// {] its just like other type working open close interval (st , end) but end - 1 is actually work in the range .....
//     for(int i : vec2){
//         cout <<  i << " " ;
//     } 
// }





// other value are shift right side ...............
//{vec.insert}
// #include<iostream>
// #include<vector>
// using namespace std ; 
// int main(){
//     vector<int> vec = {1,2,5,25,4} ; 
//     vec.insert(vec.begin() + 2 , 3) ;
//     vec.insert(vec.begin() + 3 , 4) ;
//     vec.insert(vec.begin() + 4 , 5) ;
//     vec.insert(vec.begin() + 6 , 7) ;
//     for(int i : vec){
//         cout << i << " " ; 
//     }
// }
  




//{vec.clear} 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 5, 25, 4};
//     vec.clear() ; 
//     for (int i : vec)
//     {
//         cout << i << " ";
//     }
//     cout << vec.size() << endl;  //<> vec.empty() ........... 1 or 0 .
//     cout << vec.capacity() << endl;  
//     cout << vec.empty() << endl;   //<> true (1) or false (0) ; 

// }
