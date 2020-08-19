#include <iostream>
#include <string>

using namespace std;

int main(){

    cout <<"Palindrome String Determination Program\n" << endl;

    string s1, s2;


    cout << "Enter a string: ";

    cin >> s1;

    s2 = s1;

    for(int i=0; i<s1.length(); i++){

        s2[i] = s1[s1.length() - i - 1];

    }


    if(s1 == s2){

        cout << "\n" << s1 << " = " << s2 << " is A Palindrome String\n";

    }else{

        cout << "\n" << s1 << " != " << s2 << " is Not A Palindrome String\n";

    }


    return 0;


}
