#include <iostream>

using namespace std;

int main(){

    // To get the input as a whole line then we need to use getline(). cin will read until space is pressed

    string str;

    cout << "Enter a string: ";

    getline(cin, str);

    cout << str << endl;

    return 0;

}
