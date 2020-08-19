#include <iostream>
#include <fstream>

using namespace std;

/*

    We are here including fstream(file stream) which includes ifstream (input file stream) and ofstream(output file stream)

*/

int main(){

    ofstream w("hello.txt", ios::trunc);
    // ios::app to append and ios::trunc to create a new empty file in a directory


    // We need to use overloaded stream insertion and extraction operators to write or read from that particular file opened


    w << "Hello World!";
    w.close();


    ifstream r("hello.txt");

    char c;
    r >> c;

    while(r.good()){

        cout << c;

        r >> c;

    }

    r.close();

    return 0;

}
