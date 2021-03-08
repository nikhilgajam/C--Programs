#include <iostream>
using namespace std;

int main(){

    cout.setf(ios::left);
    cout.width(10);
    cout.fill('*');
    cout << "Hello";
    cout << "World\n";
    cout.unsetf(ios::left);

    cout.setf(ios::showpos);
    cout.setf(ios::right);
    cout << 100;

    return 0;

}
