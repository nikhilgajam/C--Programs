#include <iostream>

using namespace std;

int main() {

    char a;

    cout << "Determining Vowel Or Consonant Program" << endl;

    cout << "\nType a letter: ";
    cin >> a;

    switch(a){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << a << " is a Vowel" << endl;
            break;
        default:
            cout << a << " is a Consonant" << endl;
    }

    return 0;
}
