#include <iostream>

using namespace std;

void area(int s);
void area(int l, int b);
void area(float r);


int main(){

    area(4);
    area(4, 5);
    area((float)10.0);

    return 0;

}

void area(int s){

    cout << "Area of square: " << s*s << endl;

}

void area(int l, int b){

    cout << "Area of rectangle: " << l*b << endl;

}

void area(float r){

    cout << "Area of circle: " << 3.14159265358979*(r*r) << endl;

}





