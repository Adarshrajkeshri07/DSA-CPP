#include<iostream>
#include<string>
using namespace std  ; 
class teacher{
    //properties // attributes 
    private :
        double salary;

    public:
        string name;
        string dept;
        string subject;
// member function // method  /// 
        void changedep(string newdep)
        {
            dept = newdep;
        }
        //setter function 
        void setsalary(double s){
            salary  = s ; 
        }
        // getter function
        double getsalary(){
            return salary ; 
        }
};
// class student {
//     public :
//     string name ; 
//     string course ; 
//     int roll ; 
//     int age ; 

// };
int main(){
    teacher t1 ; 
    // called to constructor ...... call ; 

    t1.name = "adarsh raj keshri" ; 
    t1.dept = "computer science " ; 
    t1.subject = "c++" ; 
    t1.setsalary(1200000);
    cout << t1.name ;
    cout << t1.getsalary();
    ;
} 