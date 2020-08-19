#include <iostream>

using namespace std;

void ra_triangle(int num);
void another_ra_triangle(int num);
void combined_ra_triangle(int num);
void rl_triangle(int num);
void another_rl_triangle(int num);
void combined_rl_triangle(int num);
void eq_triangle(int num);
void another_eq_triangle(int num);
void combined_eq_triangle(int num);

int main(){

    ra_triangle(6);

    return 0;

}

void ra_triangle(int num){
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " "; // We can replace j with a *, #, $ etc
            }
            cout << endl;
        }
    }


void another_ra_triangle(int num){
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}


void combined_ra_triangle(int num){
    int i, j;
    for(i=1; i<=num; i++){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    for(i=num-1; i>=1; i--){
        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void rl_triangle(int num){
    int i, j, k = 2 * num - 2;
    for(i=1; i<=num; i++){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k - 2;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void another_rl_triangle(int num){
    int i, j, k = 2 * num - 2;
    for(i=num; i>=1; i--){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k + 2;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void combined_rl_triangle(int num){
    int i, j, k = 2 * num - 2;

    for(i=1; i<=num; i++){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k - 2;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    k = num - 5;   // We need to adjust this when the numbers did not align properly

    for(i=num-1; i>=1; i--){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k + 2;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void eq_triangle(int num){
    int i, j, k = 2 * num - 2;

    for(i=1; i<=num; i++){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k -1;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void another_eq_triangle(int num){
    int i, j, k = 2 * num - 2;
    for(i=num; i>=1; i--){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k + 1;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}


void combined_eq_triangle(int num){
    int i, j, k = 2 * num - 2;

    for (i = 1; i <= num; i++) {
        for (j = 1; j <= k; j++) {
            cout << " ";
        }

        k = k - 1;

        for (j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    k = num;

    for(i=num-1; i>=1; i--){
        for(j=1; j<=k; j++){
            cout << " ";
        }

        k = k + 1;

        for(j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

