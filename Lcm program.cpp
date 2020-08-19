#include <iostream>

using namespace std;

int Lcm(int num1, int num2);

int main(){

    int x, y, z;

    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;

    z = Lcm(x, y);

    cout << "\nLCM : " << z;

    return 0;

}

int Lcm(int num1, int num2){

    int gcd = 0, lcm = 0;

    for(int i=1; i<=num1 && i<=num2; i++){

        if(num1%i == 0 && num2%i == 0){

            gcd = i;

        }

    }

    lcm = (num1*num2)/gcd;

    return lcm;

}
