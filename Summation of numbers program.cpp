#include <iostream>

using namespace std;

int main(){

    cout << "Summation Of Numbers Program\n" << endl;

    int num, n, r=0, temp;

    cout << "Enter a number: ";
    cin >> num;

    for(; num>0; num/=10){
        n = num%10;
        r = r+n;
    }

    cout << "Summation = " << r << endl;

    return 0;

}
