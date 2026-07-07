#include<iostream>
#include<utility>
#include<vector>
using namespace std;
void reverse(vector<int>&vec ,int  size){
    int start = 0 , end  = size - 1  ;

    while(start < end ){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> vec = {21,2,4,5,9,7};
    reverse(vec,vec.size());//size nikalne ke liye vec.size ka use krte hai ....
    for(int v : vec){
        cout << v ; 
    }
    return 0 ;

}