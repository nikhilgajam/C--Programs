#include <iostream>

using namespace std;

int main(){

// Using goto

    int k;

    while(k<=5){

        if(k == 2){

            goto Quit; //It will execute and go to next statements in program and will not come back

        }

        cout << "Hello";

    }

    Quit: cout << "Quitting the program\n"; //If you are not using then it is going to be executed like a normal print

    cout << "Done";

    return 0;

}


/*
USING BREAK

    int k = 1;

    while(k <= 5){

        if(k == 3){
            break; //It will exit the block and executes the other statements
        }

        cout << k;

        k++;
    }


*/


/*
USING CONTINUE

   int k = 0;

    while(k <= 5){

        k++; //When using continue we need to write increment before continue construct

        if(k == 3){
            continue;

        }

        cout << k;
    }

*/


/*
USING GOTOXY

//In newer versions gotoxy has been removed but we can use by creating it

#include <windows.h>

void gotoxy(int, int);

int main(){

    gotoxy(10, 1);

    cout << "Hello World";

    return 0;
}


void gotoxy(int x, int y){

    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

*/
