#include <iostream>

using namespace std;

class Op{

private:
    double x, y;

public:
    Op(){

       x = y = 0;

    }

    Op(double x, double y){

        this->x = x;
        this->y = y;

    }

    void show_all(){
        cout << x << ", " << y << "\n" << endl;
    }

    Op operator+(Op o){

        Op ans;
        ans.x = x + o.x;
        ans.y = y + o.y;
        cout << "+ operator" << endl;
        return ans;
    }

    Op operator-(Op o);

    friend Op operator*(Op &o, Op oo);

    Op operator/(Op o){

        Op ans;
        ans.x = x/o.x;
        ans.y = y/o.y;
        cout << "/ operator" << endl;
        return ans;

    }

    void operator++(){

        cout << "prefix ++ operator" << endl;
        x += 1;
        y += 1;

    }

    friend void operator--(Op &o);

    void operator++(int){

        cout << "postfix ++ operator" << endl;
        x += 1;
        y += 1;

    }

    void operator--(int);

    void operator+=(Op o){

        cout << "+= operator" << endl;
        x = x + o.x;
        y = y + o.y;

    }

    void operator-=(Op o){

        cout << "-= operator" << endl;
        x = x - o.x;
        y = y - o.y;

    }

    void operator*=(Op o){

        cout << "*= operator" << endl;
        x = x * o.x;
        y = y * o.y;

    }

    void operator/=(Op o){

        cout << "/= operator" << endl;
        x = x / o.x;
        y = y / o.y;

    }

};

Op Op :: operator-(Op o){

    Op ans;
    ans.x = x - o.x;
    ans.y = y - o.y;
    cout << "- operator" << endl;
    return ans;

}

Op operator*(Op &o, Op oo){

    Op ans;
    ans.x = o.x * oo.x;
    ans.y = o.y * oo.y;
    cout << "* operator" << endl;
    return ans;

}

void operator--(Op &o){

    cout << "prefix -- operator" << endl;
    o.x -= 1;
    o.y -= 1;

}

void Op::operator--(int){

    cout << "postfix -- operator" << endl;
    x -= 1;
    y -= 1;

}



int main(){

    cout << "Operator overloading on two or more variable members\n" << endl;

    Op op, op1(1000, 100), op2(100, 1000), op3;

    op3 = op1 + op2;
    op3.show_all();

    op3 = op1 - op2;
    op3.show_all();

    op3 = op1 * op2;
    op3.show_all();

    op3 = op1 / op2;
    op3.show_all();

    op.show_all();

    ++op;
    op.show_all();

    --op;
    op.show_all();

    op++;
    op.show_all();

    op--;
    op.show_all();

    op1 += op2;
    op1.show_all();

    op1 -= op2;
    op1.show_all();

    op1 *= op2;
    op1.show_all();

    op1 /= op2;
    op1.show_all();

    return 0;

}
