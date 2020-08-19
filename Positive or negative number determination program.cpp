#include <iostream>

using namespace std;

int main(){

    cout << "Positive Or Negative Number Determination Program\n" << endl;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num > 0){
        cout << num << " is a Positive Number\n";
    }else if(num == 0){
        cout << num << " is a Neither Postive Nor Negative\n";
    }else{
        cout << num << " is a Negative Number\n";
    }

    return 0;

}
