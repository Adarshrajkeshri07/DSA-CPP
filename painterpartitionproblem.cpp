 #include<iostream>
#include<climits>
using namespace std ;
bool ispossible(int a[], int size, int worker, int maxtime) // mid =maxtime
{
    int painters = 1, time = 0;
    for (int i = 0; i < size; i++)
    {
        if (time + a[i] <= maxtime)
        {
            time += a[i];
        }
        else
        {
            painters++;
            time = a[i];
        }
    }
    if (painters <= worker)
    {
        return true;
    }
    else
        return false;
}
int main(){
    int a[4] = {40,30,10,20} ; 
    int worker = 2 ; 
    int st = a[0] ,end = 0 ,ans = -1;
    for(int i = 1 ; i < 4 ; i++){
        st = max(st ,a[i]) ;
    } 
    for(int i = 0 ; i < 4 ; i++){
        end += a[i] ; 
    }
    while(st <= end){
        int mid = st + (end - st) / 2 ;
        if(ispossible(a,4,2,mid)){
            ans = mid ; 
            end = mid - 1 ;
        }else {
            st = mid + 1 ; 
        }


    }
    cout << ans ; 
    return 0 ; 
}
