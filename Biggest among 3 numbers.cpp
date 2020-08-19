#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cout << "Enter number A: ";
    cin >> a;
    cout << "Enter number B: ";
    cin >> b;
    cout << "Enter number C: ";
    cin >> c;

    cout << "\n";

    if(a > b){
        if(a > c){

            cout << "A = " << a << " is Bigger" << endl;

        }
    }

    if(b > a){
        if(b > c){

            cout << "B = " << b << " is Bigger" << endl;

        }
    }

    if(c > a){
        if(c > b){

            cout << "C = " << c << " is Bigger" << endl;

        }
    }

    return 0;

}
