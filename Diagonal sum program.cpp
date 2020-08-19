#include <iostream>

using namespace std;

void matrix_diagonal_sum_program();

int main(){

    matrix_diagonal_sum_program();

    return 0;

}
void matrix_diagonal_sum_program(){

    cout << "Diagonal Sum Program\n\n";

    int r, c;

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int a[r][c], i, j, sum=0;

    cout << "\nEnter elements: \n";

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }

    cout << "\nDiagonal Sum: " << sum << endl;

}
