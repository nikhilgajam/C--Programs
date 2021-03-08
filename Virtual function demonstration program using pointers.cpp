#include <iostream>
using namespace std;

class Base{
    public:

        // Remove virtual and see the output

        virtual void hello(){
            cout << "Hello from Base Class" << endl;
        }

        void ok(){
            cout << "OK from Base Class" << endl;
        }
};


class Derived: public Base{
    public:
        void hello(){
            cout << "Hello from Derived Class" << endl;
        }

        void ok(){
            cout << "OK from Derived Class" << endl;
        }
};


int main(){

    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->hello();
    ptr->ok();

    return 0;

}
