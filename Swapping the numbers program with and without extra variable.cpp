#include <iostream>

using namespace std;

void swap_with_extra_variable(int a, int b);
void swap_without_extra_variable(int a, int b);

int main() {

    swap_without_extra_variable(1, 2);

    return 0;
}

void swap_with_extra_variable(int a, int b){

   int c = a;
   a = b;
   b = c;

   cout << a << " " << b << endl;

}

void swap_without_extra_variable(int a, int b){

    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << " " << b << endl;

}
