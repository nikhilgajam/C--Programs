#include <iostream>
using namespace std;

void handling(int x){

    try{

        if(x == 1)
            throw(1);
        else if(x == 0)
            throw 'a';
        else if(x == -1)
            throw 100.1;

    }catch(int a){
        cout << "Error caused by int: " << a << endl;
    }catch(char c){
        cout << "Error caused by char: " << c << endl;
    }catch(double d){
        cout << "Error caused by double: " << d << endl;
    }
}


int main(){

    handling(1);
    handling(0);
    handling(-1);

    return 0;

}













