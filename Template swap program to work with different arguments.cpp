#include <iostream>
using namespace std;

template<class T>
void swaps(T &a, T &b){

    T c = a;
    a = b;
    b = c;

}


int main(){

    int x = 100, y = 1000;
    swaps(x, y);
    cout << "X: " << x << ", Y: " << y << endl;

    char a = 'X', b = 'Y';
    swaps(a, b);
    cout << "A: " << a << ", B: " << b << endl;

    string s = "Hello", s1 = "World";
    swaps(s, s1);
    cout << "S: " << s << ", S: " << s1 << endl;

    return 0;

}
















