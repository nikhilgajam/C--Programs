#include <iostream>
using namespace std;

int main(){

    double a, b, ans;

    cout << "Enter num 1: ";
    cin >> a;
    cout << "Enter num 2: ";
    cin >> b;

    try{

        if(b != 0){
            ans = a/b;

            cout << "Division: " << ans << endl;

        }else{
            throw(b);
        }

    }catch(double e){

        cout << "\nCannot divide any number by " << e << endl;

    }

    return 0;

}














