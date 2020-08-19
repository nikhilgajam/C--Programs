#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int num, guessnum, rangenum;

    cout << "Random Number Game" << endl;

    cout << "\nType Range of Random Numbers\nEx:(1-6):Type 6\n";
    cout << ": ";
    cin >> rangenum;

    srand(time(0));

    num = (rand()%rangenum)+1;

    cout << "\nType a number: ";
    cin >> guessnum;

    while(guessnum != 0){

        if(guessnum == num){

        cout << "\n" << guessnum << " is Correct Guess\n";

        break;

    }else if(guessnum < num){

        cout << "\nGuess is Little Low\n";

        cout << "Type: ";

    }else{

        cout << "\nGuess is Little High\n";

        cout << "Type: ";

    }

        cin >> guessnum;
    }


    return 0;

}
