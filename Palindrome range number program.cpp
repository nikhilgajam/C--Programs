#include <iostream>

using namespace std;

int main(){

    cout << "Palindrome Range Program\n\n";

    int i, n=0, r=0, num=0, temp=0, total=0;

    int start_num, end_num, swap_num;

    cout << "Enter Start Range: ";
    cin >> start_num;
    cout << "Enter End Range: ";
    cin >> end_num;

    if(start_num > end_num){
        swap_num = start_num;
        start_num = end_num;
        end_num = swap_num;
    }

    cout << "Range:\n";

    for(i=start_num; i<=end_num; i++){

        num = i;
        for(; num>0; num/=10){
            n = num%10;
            r = r*10+n;
        }

        if(r == i){
            cout << "Palindrome Number: " << i << endl;
            total++;
        }

        r = 0;
    }

    cout << "\nTotal No Of Palindromes: " << total << endl;

}
