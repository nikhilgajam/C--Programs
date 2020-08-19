#include <iostream>

using namespace std;

int main(){

    long long fact=1, num;

    cout << "Enter a number: ";
    cin >> num;

    for(; num>0; num--){
      fact = fact*num;
    }

    cout << "Answer: " << fact << endl;

    return 0;

}
