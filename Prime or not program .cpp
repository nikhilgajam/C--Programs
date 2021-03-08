#include <iostream>

using namespace std;

void prime_or_not(int num);

int main() {

    prime_or_not(3);

    return 0;

}

void prime_or_not(int num){

    int count = 0;


    for(int i=1; i<=num; i++){

        if(num%i == 0){

            count++;

        }

    }

    if(count == 2){

        cout << num << " is a Prime Number" << endl;

    }else{

        cout << num << " is a Ordinary Number" << endl;

    }

}
