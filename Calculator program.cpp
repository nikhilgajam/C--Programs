#include <iostream>

using namespace std;

int main(){

    cout << "Calculator Program\n" << endl;

    double a, b;
    double ans;
    char op;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    cout << "Enter a operator like +, -, *, /, %: ";
    cin >> op;


    switch(op){
        case '+':
            ans = a+b;
            cout << "Answer = " << ans << endl;
            break;
        case '-':
            ans = a-b;
            cout << "Answer = " << ans << endl;
            break;
        case '*':
            ans = a*b;
            cout << "Answer = " << ans << endl;
            break;
        case '/':
            ans = a/b;
            cout << "Answer = " << ans << endl;
            break;
        case '%':
            ans = (int)a%(int)b;
            cout << "Answer = " << ans << endl;
            break;
        default:
            cout << "Enter valid operator" << endl;

    }

    return 0;

}
