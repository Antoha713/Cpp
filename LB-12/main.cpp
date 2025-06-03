#include <iostream>

using namespace std;

int main(void) {
    //1
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);
    int *a = &vector[0];
    int min;
    for (int i = 1; i < n; i++) {
        *a++;
        if (*a < *(a+1)) {
            min = *a;
        }
    }
    cout << "min number: " << min ;

    cout << '\n';

    //2
    int matrix[10][10] = { };
    int *b = &matrix[0][0];
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            *(b + i * 10 + j) = (i + 1) * (j + 1);
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
}