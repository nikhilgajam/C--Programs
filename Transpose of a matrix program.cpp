#include <iostream>

using namespace std;

void matrix_transpose();

int main(){

    matrix_transpose();

    return 0;

}

void matrix_transpose(){

    cout << "Matrix Transpose Program\n\n";

    int r, c, i, j;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c], transpose[r][c];

    cout << "Type array elements: \n";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            cin >> a[i][j];

        }
    }


    cout << "\nTransposed Elements: \n";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            transpose[i][j] = a[j][i];

            cout << " ";
            cout << "\t" <<transpose[i][j];
        }
        cout << endl;
    }


}
