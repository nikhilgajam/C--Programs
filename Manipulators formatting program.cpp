#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    cout << setw(10) << setfill('$') << setprecision(3) << setiosflags(ios::showpos) << 100 << resetiosflags(ios::showpos);


    return 0;

}
