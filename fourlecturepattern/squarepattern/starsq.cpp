#include<iostream>
int main(){
    int i , j , n ; 
    std :: cout << " enter the value of n :" ;
    std :: cin >> n ; 
    for(i = 0 ; i < n ; i++){
        
        for(j = 0 ; j < n ; j++)
{
    std :: cout << "* " ;
}
std :: cout << "\n";
    }
    return 0 ; 
}