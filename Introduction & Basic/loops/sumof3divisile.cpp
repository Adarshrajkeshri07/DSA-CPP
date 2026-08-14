#include<iostream>
int main(){
int i , sum , n ;
sum = 0 ; 
std::cout<<"enter the value of n :" ;
std::cin >> n ;
for(i=1 ; i<=n ; i++){
    if(i%3==0){
        sum+=i;
    }
}
std::cout << sum ;
return 0 ; 
}