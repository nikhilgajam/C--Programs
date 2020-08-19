#include <iostream>

using namespace std;

int main(void) {

    int a, b;

    for(a = 65, b = 90; a<=90, b>=65; a++, b--){

        cout << (char)a << " " << (char)b << endl;

    }

    return 0;

}
