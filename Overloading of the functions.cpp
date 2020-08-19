#include <iostream>

using namespace std;

void display();
void display(int a);
void display(int a, int b);
void display(int a, float b);
void display(float a, float b);


/*

    This overloading can be done with different parameters or arguments but without different return type

 */

int main(){

    display(100, 1000);

    // To enter a float as the parameter we need to typecast ((float)99.99) it or indicate(0.01f) as the float value otherwise it will take them as double values

    return 0;

}

void display(){

    cout << "Nothing to display" << endl;

}

void display(int a){

    cout << "Only integer " << a << endl;

}

void display(int a, int b){

    cout << "Both integers " << a << ", " << b << endl;

}

void display(int a, float b){

    cout << "Integer and float " << a << ", " << b << endl;

}

void display(float a, float b){

    cout << "Both floats " << a << ", " << b << endl;

}
