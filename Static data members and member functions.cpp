#include <iostream>
using namespace std;

class Hello{
private:
    static int num;
public:
    static void print(){
        cout << "NUM Value is: " << num << endl;
    }
};

int Hello::num = 100;

int main(){
    
    Hello::print();
    
    return 0;
}






















