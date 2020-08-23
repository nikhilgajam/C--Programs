#include <iostream>

using namespace std;

int main(){

    cout << "Switch Range Program In C++\n" << endl;

    int x;

    cout << "Enter a number: ";
    cin >> x;

    cout << endl;

    /*

    We cannot take a number as a case in the range we declared it gives an error

    */


    switch(x){

    case 1 ... 1000:
        cout << "You entered a number between 1 to 1000" << endl;
        break;

    case 0:
        cout << "This is null" << endl;
        break;

    default:
        cout << "You entered a number which is not in the range of 1000" << endl;

    }

    return 0;

}
