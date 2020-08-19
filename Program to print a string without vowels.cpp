#include <iostream>

using namespace std;

int main(){

    string a;

    cout << "Program to print given string without vowels\n" << endl;



    cout << "Enter a name: ";
    getline(cin, a);

    cout << "\nString without vowels: \n";

    for(int i=0; i<a.length(); i++){

        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){

            continue;

        }else{

            cout << a[i];

        }
    }

    cout << endl;







    return 0;

}
