#include <iostream>

using namespace std;

void matrix_addition();
void matrix_subtraction();
void matrix_multiplication();

int main(){

    matrix_multiplication();

    return 0;

}

void matrix_multiplication(){


    int r1, r2, c1, c2, i, j, k;

    cout << "Matrix Multiplication Program\n\n";

    cout << "Enter no of rows & columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter no of rows & columns of Matrix 2: ";
    cin >> r2 >> c2;

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(c1 == r2){

        cout << "\nEnter Elements Of Matrix 1\n\n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){
                   cin >> matrix1[i][j];
            }

        }

        cout << "\nEnter Elements Of Matrix 2\n\n";

        for(i=0; i<r2; i++){

            for(j=0; j<c2; j++){
                   cin >> matrix2[i][j];
            }

        }

        for(i=0; i<r1; i++){

            for(j=0; j<c2; j++){

                    ans[i][j] = 0;

                    for(k=0; k<c1; k++){

                   ans[i][j] += matrix1[i][k] * matrix2[k][j];

                    }
            }

        }


        cout << "\n\nMatrix Multiplication: \n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){

                cout << "   ";
                cout << ans[i][j] << "\t";

            }

            cout << "\n";

        }

    }else{

        cout << "Dimensional Error\n";

    }


    }

    void matrix_subtraction(){

    int r1, r2, c1, c2, i, j, k;

    cout << "Matrix Subtraction Program\n\n";

    cout << "Enter no of rows & columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter no of rows & columns of Matrix 2: ";
    cin >> r2 >> c2;

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

        cout << "\nEnter Elements Of Matrix 1\n\n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){

                   cin >> matrix1[i][j];

            }

        }

        cout << "\nEnter Elements Of Matrix 2\n\n";

        for(i=0; i<r2; i++){

            for(j=0; j<c2; j++){

                cin >> matrix2[i][j];

            }

        }

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){

                   ans[i][j] = matrix1[i][j] - matrix2[i][j];

            }

        }


        cout << "\n\nMatrix Subtraction: \n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){

                cout << "   ";
                cout << ans[i][j] << "\t";
            }

            cout << "\n";

        }

    }else{

        cout << "Rows and Columns must be same to execute the operation\n";

    }


}

void matrix_addition(){


    int r1, r2, c1, c2, i, j, k;

    cout << "Matrix Addition Program\n\n";

    cout << "Enter no of rows & columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter no of rows & columns of Matrix 2: ";
    cin >> r2 >> c2;

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

        cout << "\nEnter Elements Of Matrix 1\n\n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){
                   cin >> matrix1[i][j];
            }

        }

        cout << "\nEnter Elements Of Matrix 2\n\n";

        for(i=0; i<r2; i++){

            for(j=0; j<c2; j++){
                   cin >> matrix2[i][j];
            }

        }

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){

                   ans[i][j] = matrix1[i][j] + matrix2[i][j];

            }

        }


        cout << "\n\nMatrix Addition: \n";

        for(i=0; i<r1; i++){

            for(j=0; j<c1; j++){
                cout << "   ";
                   cout << ans[i][j] << "\t";
            }

            cout << "\n";

        }


    }else{

        cout << "Rows and Columns must be same to execute the operation\n";

    }



}
