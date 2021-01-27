#include <iostream>
using namespace std;

class B;
class C;

class A{
private:
    int num;
public:
    A(int x){
        num = x;
    }
    
    friend void big(A a, B b, C c);
};

class B{
private:
    int num;
public:
    B(int x){
        num = x;
    }
    
    friend void big(A a, B b, C c);
};

class C{
private:
    int num;
public:
    C(int x){
        num = x;
    }
    
    friend void big(A a, B b, C c);
};

void big(A a, B b, C c){
    
    if(a.num > b.num && a.num > c.num)
        cout << "Object A is bigger: " << a.num << endl;
    if(b.num > a.num && b.num > c.num)
        cout << "Object B is bigger: " << b.num << endl;
    if(c.num > a.num && c.num > a.num)
        cout << "Object C is bigger: " << c.num << endl;
    
}

int main(){
    
    A o1(100);
    B o2(90);
    C o3(80);
    
    big(o1, o2, o3);
    
    return 0;
    
}
