#include<iostream>
int main(){
    int a , b ;
    std::cout <<"enter the value of a : " ;
    std::cin >>a;
    std::cout << "enter the value of b : ";
    std::cin >> b;
    int c = a + b ;
    int d = a * b ;
    int e = a / b ;
    int f = a % b ;
std :: cout << "addition is  =  " << c << "\n";
std :: cout << " multiplication is  =  " << d <<"\n" ;
std :: cout << "division  is  =  "<< e << "\n";
std :: cout << "reminder  is  =  "<< f <<"\n" ;
std::cout << (a > b)<<"\n";
std::cout << (a < b) <<"\n" ;
std::cout << (a >= b) << "\n";
std::cout << (a <= b) << "\n";
std::cout << (a == b) << "\n";
std::cout << (a != b) << "\n";
if(a > b || a < b){
    std ::cout << "helllow world ";
}else 
std :: cout <<"not world";

return 0; 
}