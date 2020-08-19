#include <iostream>

using namespace std;

void sum_of_sums(long long num);

int main(){

    long long x;

    cout << "Enter a number: ";
    cin >> x;

    sum_of_sums(x);

    return 0;

}

void sum_of_sums(long long num){

    long long n, r=0, count=0;

    cout << "\nThe summation: \n\n";

    if(num >= 10){

        while(num >= 10){

            for(; num>0; num/=10){
                n = num % 10;
                cout << n << "+";
                r = r+n;
            }

            cout << "\b";   // This deletes the extra symbol
            num = r;
            r = 0;

            cout << " = " << num << endl;

        }

    }else{
        cout << num << " = " << num << endl;
    }


}
