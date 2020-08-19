#include <iostream>

using namespace std;

void primes(int num);

int main() {

    primes(100);

    return 0;

}

void primes(int num){

    int count;

    for(int i=1; i<=num; i++){

        count = 0;

        for(int j=1; j<=num; j++){

            if(i%j == 0){

                count++;

            }

        }

        if(count == 2){

            cout << i << endl;

        }

    }

}
