#include <iostream>

using namespace std;

int temperature_conversion();

int main(){

    temperature_conversion();

    return 0;

}

int temperature_conversion(){

    int temp, cases;
    float op;

    cout << "Temperature Conversion Program\n";

    cout << "\nPress 1 =  Celsius    -  Kelvin\n";
    cout << "Press 2 =  Celsius    -  Fahrenheit\n";
    cout << "Press 3 =  Kelvin     -  Fahrenheit\n";
    cout << "Press 4 =  Kelvin     -  Celsius\n";
    cout << "Press 5 =  Fahrenheit -  Celsius\n";
    cout << "Press 6 =  Fahrenheit -  Kelvin\n";

    cout << "\nType: ";
    cin >> cases;

    cout << "\nType temperature: ";
    cin >> temp;

    cout << "\nConversion: \n";


    switch(cases){
    case 1:
        op = temp + 273.15;
        cout << "°C - °K = " << op << endl;
        break;

    case 2:
        op = (temp * 9/5) + 32;
        cout << "°C - °F = " << op << endl;
        break;

    case 3:
        op = (temp - 273.15) * 9/5 + 32;
        cout << "°K - °F = " << op << endl;
        break;

    case 4:
        op = temp - 273.15;
        cout << "°K - °C = " << op << endl;
        break;

    case 5:
        op = (temp - 32) * 5/9;
        cout << "°F - °C = " << op << endl;
        break;

    case 6:
        op = (temp - 32) * 5/9 + 273.15;
        cout << "°F - °K = " << op << endl;
        break;

    default:
        cout << "Type Only The Numbers Shown On The Screen\n";

    }

    return (op);

}
