#include <iostream>
using namespace std;

class Number{
    public:
    int num;
    
    Number(int k){
        num = k;
    }
    
    bool operator>(Number x){
        if(num > x.num){
            return true;
        }else{
            return false;
        }
    }
    
    friend bool operator<(Number, Number);
    
};

bool operator<(Number x1, Number x2){
    
    if(x1.num < x2.num){
            return true;
        }else{
            return false;
        }
    
}

int main(){
    
    Number x1(100), x2(1000);
    bool k = x1 > x2;
    cout << k << endl;
    k = x1 < x2;
    cout << k << endl;
    
    return 0;
    
}

