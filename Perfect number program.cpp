#include <iostream>

using namespace std;

int main(){

    int num, i, sum=0;

    cout << "Perfect Number Checking Program\n";
    cout << "Ex: 6 = 3+2+1 = 6\n" << endl;

    cout << "Enter a number: ";

    cin >> num;

    cout << "Number Divides By: ";

    for(i=1; i<num; i++){

        if(num%i == 0){

            sum += i;
            cout <<i<<"+";

        }

    }

    if(num == sum){

        cout << " = " << num;
        cout << "\n\n" << num << " is a Perfect Number" << endl;

    }else{

        cout << " != " << num;
        cout << "\n\n" << num << " is not a Perfect Number" << endl;
    }



    return 0;

}
