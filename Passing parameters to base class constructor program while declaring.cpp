#include <iostream>
using namespace std;

class Base{
    public:

        int num;

        Base(int x){
            num = x;
        }
};


class Derived: public Base{
    public:

        // Non parameterized constructor
        Derived(): Base(100){
            // Here we are directly giving the value to the Base constructor
        }

        // Parameterized constructor
        Derived(int x): Base(x){
            // The x in Derived constructor is passed to Base(x)
        }
};


int main(){

    Derived obj;
    cout << obj.num << endl;

    Base obj1(1000);
    cout << obj1.num << endl;

    return 0;

}
