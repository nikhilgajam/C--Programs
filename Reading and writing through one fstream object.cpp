#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    fstream obj("k.txt", ios::out | ios::in | ios::trunc);

    obj << "Hello World" << endl;

    string str;

    obj.seekg(0);
    char ch;

    while(!obj.eof()){
        ch = obj.get();
        cout << ch;
    }

    return 0;
}


















