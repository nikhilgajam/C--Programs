#include <iostream>

using namespace std;

void matrix_determinant();

int main(){

    matrix_determinant();

    return 0;

}

void matrix_determinant(){

    cout << "Matrix Determinant Program\n\n";

    int i, j, r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c], det;

    cout << "\nEnter elements: \n";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }


    if(r == 3 && c == 3){

        det = a[0][0] * ((a[1][1] * a[2][2]) -  (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
        cout << "\n3X3 Determinant: " << det << endl;

    }else{

        det = det = a[0][0] * (a[1][1]) - a[0][1] * (a[1][0]);
        cout << "\n2X2 Determinant: " << det << endl;

    }

}
