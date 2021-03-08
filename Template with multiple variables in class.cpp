#include <iostream>
#include <string>
using namespace std;


template <class N, class R>
class A{
    public:
        N name;
        R rollno;

        A(N x, R y){
            name = x;
            rollno = y;
        }

        void show(){
            cout << "Name: " << name << "\nRoll No: " << rollno << endl;
        }

};


int main(){

    A<string, int> a("Ram", 100);
    a.show();

    return 0;

}










