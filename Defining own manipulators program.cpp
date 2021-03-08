#include <iostream>
#include <iomanip>
using namespace std;

ostream &rs(ostream &output){

    output << "Rs: ";
    return output;

}


ostream &show(ostream &o){

    o.setf(ios::showpos);
    o.setf(ios::showpoint);
    o.precision(3);
    o.fill('*');
    o << setiosflags(ios::fixed) << setw(10);
    return o;

}


int main(){


    cout << rs << show << 7864.6 << endl;


    return 0;

}









