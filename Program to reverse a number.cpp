#include <iostream>

using namespace std;

int main(){

    int num, n, r=0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    for(; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    cout << r << endl;

    return 0;

}
