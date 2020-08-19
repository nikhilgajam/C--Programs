#include <iostream>

using namespace std;

/*

    When we use inline function the compiler is going to place the statements in that function in that calling function body

*/

inline void show(){

    for(int i=0; i<=1000; i++){

        cout << i << endl;

    }

}

int main(){

    show();

    return 0;

}
