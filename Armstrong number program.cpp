#include <iostream>

using namespace std;

int main(){

    cout << "Armstrong Number Program" << endl;
    cout << "Ex: 153 = 1^3+5^3+3^3 = 153\n" << endl;

    int num, n, r=0, temp;


    cout << "Enter a number: ";
    cin >> num;


    temp = num;


    for(; num>0; num/=10){

        n = num%10;
        r = r+(n*n*n);

    }

    if(temp == r){

        cout << temp << " is Armstrong Number" << endl;

    }else{

        cout << temp << " is Ordinary Number" << endl;

    }


    return 0;

}
