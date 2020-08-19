#include <iostream>

using namespace std;

struct mem{

    int id;
    string name;
    int age;

};

int main() {

    int k, n;
    cout << "How many members?: ";
    cin >> n;

    mem mems[n];

    for(k=0; k<n; k++){
        mems[k].id = k+1;
        cout << "Enter information for user: " << mems[k].id << endl;

        cout << "Name: ";
        cin >> mems[k].name;

        cout << "Age: ";
        cin >> mems[k].age;

        cout << endl;
    }

    for(k=0; k<n; k++){

        cout << "Information of: " << mems[k].id << endl;

        cout << "Name: " << mems[k].name << endl;

        cout << "Age: " << mems[k].age  << endl;

        cout << endl;

    }

    return 0;

}
