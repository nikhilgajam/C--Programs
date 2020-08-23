#include <iostream>

using namespace std;

class Op{

// Default Access Specifier In C++ Is Private
    double x;

public:
    Op(){

       x = 0;

    }

    Op(double x){

        this->x = x;
    }

    void show_all(){
        cout << x << "\n" << endl;
    }

    void operator++(){

        cout << "prefix ++ operator" << endl;
        x += 1;

    }

    void operator--();

    Op operator++(int){

        cout << "postfix ++ operator" << endl;
        Op temp(*this);
        x += 1;
        return temp;

    }

    friend Op operator--(Op &o, int);

    void operator+=(double num){

        cout << "+= operator" << endl;
        x = x + num;

    }

    void operator-=(double num){

        cout << "-= operator" << endl;
        x = x - num;

    }

    void operator*=(double num){

        cout << "*= operator" << endl;
        x = x * num;

    }

    void operator/=(double num){

        cout << "/= operator" << endl;
        x = x / num;

    }

};

void Op::operator--(){

    cout << "prefix -- operator" << endl;
    x -= 1;

}

Op operator--(Op &o, int a){

    cout << "postfix -- operator" << endl;
    Op temp(o);
    o.x -= 1;
    return temp;

}



int main(){

    cout << "Operator overloading on one variable member\n" << endl;

    Op op1(1000);
    op1.show_all();

    ++op1;
    op1.show_all();

    --op1;
    op1.show_all();

    (op1++).show_all();
    op1.show_all();

    (op1--).show_all();
    op1.show_all();

    op1 += 1;
    op1.show_all();

    op1 -= 1;
    op1.show_all();

    op1 *= 1;
    op1.show_all();

    op1 /= 1;
    op1.show_all();


    return 0;

}
