#include <iostream>
using namespace std;

class MinValue;

class TwoValue{
public:
    int a, b;
    TwoValue(int x, int y){
        a = x;
        b = y;
    }
    
    friend void display(MinValue, TwoValue);
};

class MinValue{
private:
    int a, b;
public:
    MinValue(int x, int y){
        a = x;
        b = y;
    }
    
    friend void display(MinValue, TwoValue);
    
    void minimum(TwoValue v){
        if(a > v.a && b > v.b){
            cout << "Object of MinValue is bigger from member function: " << a << endl;
        }else{
            cout << "Object of TwoValue is bigger from member function: " << v.a << endl;
        }
    }
};

void display(MinValue m, TwoValue v){
    if(m.a > v.a && m.b > v.b){
        cout << "Object of MinValue is bigger from friend function: " << m.a << endl;
    }else{
        cout << "Object of TwoValue is bigger from friend function: " << v.a << endl;
    }
}

int main(){
    
    MinValue obj(100, 200);
    TwoValue obj1(90, 70);
    
    obj.minimum(obj1);
    display(obj, obj1);
    
    return 0;
    
}
