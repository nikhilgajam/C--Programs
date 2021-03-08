#include <iostream>
using namespace std;

class A{
    public:
        int num;
        A(){
            num = 100;
        }

        void show(){
            cout << "Hello" << endl;
        }
};

class B: virtual public A{
    // Statements
};

class C: virtual public A{
    // Statements
};

class D: public B, public C{
    // Statements
};

int main(){

    D obj;
    cout << "Num value is: " << obj.num << endl;

    return 0;

}
