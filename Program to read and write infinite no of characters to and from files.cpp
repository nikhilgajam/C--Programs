#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;

void write_all(char name[]);
void read_all(char name[]);

int main(){

    char str[] = "name.txt";

    write_all(str);
    read_all(str);

    return 0;
}

void write_all(char name[]){

    fstream w(name, ios::out);

    char ch;

    cout << "Enter ` to exit:" << endl;
    ch = getchar();

    while(ch != '`'){
        w.put(ch);
        ch = getchar();
    }

    w.close();
}

void read_all(char name[]){

    fstream r(name, ios::in);

    char ch;

    while(!r.eof()){
        ch = r.get();
        cout << ch;
    }

    r.close();
}
