#include <iostream>

using namespace std;

int main(){

    long long a=0, b=1, c=0, num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The fibonacci sequence:\n";

    for(int i=0; i<=num; i++){
        cout << a << endl;
        c = a+b;
        a = b;
        b = c;
    }

    return 0;

}
