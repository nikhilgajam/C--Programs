#include <iostream>
#include <string>
using namespace std;


template <class N>
class Area{
    public:
        N value;

        Area(N x){
            value = x;
        }

        void area(){
            cout << "Area of squares: " << value*value << endl;
        }

};


int main(){

    Area<int> x(99);
    x.area();

    Area<double> y(99.9);
    y.area();

    return 0;

}









