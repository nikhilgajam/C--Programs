#include <iostream>

using namespace std;

int main(){

    cout << "Palindrome Determination Program\n" << endl;

    int num, n, r=0, temp;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    for(; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    if(r == temp){
        cout << temp << " is a Palindrome Number" << endl;
    }else{
        cout << temp << " is a Ordinary Number" << endl;
    }

    return 0;

}
