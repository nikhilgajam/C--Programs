#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    cout << "Command Line Arguments\n\n\n";

    cout << "Total no of arguments: " << argc << endl << endl << endl;

    int i;

    // We can use argv[1] to get entered words in command line and argv[0] is command to start program
    cout << "Arguments: \n" << endl;

    for(i=0; i<argc; i++){
        cout << argv[i];
    }

    return 0;

}
