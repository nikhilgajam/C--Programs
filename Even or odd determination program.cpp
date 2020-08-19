#include <iostream>

using namespace std;

int main(){

    cout << "Even Or Odd Number Determination Program\n" << endl;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num%2 == 0){
        cout << num << " is a Even Number\n";
    }else{
        cout << num << " is a Odd Number\n";
    }

    return 0;

}
