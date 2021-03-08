#include <iostream>
using namespace std;

void handling(double x, double y){

    double ans;

    try{
        if(y != 0){
            ans = x/y;
            cout << "Division: " << ans << endl;
        }else{
            throw y;
        }
    }catch(double x){
        cout << "Error handling" << endl;
        throw;
    }
}


int main(){

    try{
        handling(1.1, 0);
    }catch(double d){
        cout << "Rethrown error: " << d << endl;
    }

    return 0;

}

















