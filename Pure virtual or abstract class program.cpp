#include <iostream>
using namespace std;

class Phone{
    public;
        int price;
        virtual void display() = 0;
        virtual void camera() = 0;
        virtual void set_price() = 0;
};


class iPhone: public Phone{
    public:
        void display(){
            cout << "Huge Display" << endl;
        }

        void camera(int x){
            cout << x << " MP Camera" << endl;
        }

        void set_price(){
            cout << "Enter price: ";
            cin >> price;
            cout << "Price is: " << price << endl;
        }
};


int main(){

    iPhone p;

    p.display();
    p.camera(100);
    p.set_price();

    return 0;

}
