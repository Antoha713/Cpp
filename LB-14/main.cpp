#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    //1
    srand(time(NULL));
    int plus =0, minus = 0;
    float *mas = new float [13];
    cout << "mas = " << endl;
    for (int i = 0; i < 13; i++) {
        mas[i] = ((float)rand() / RAND_MAX) * 4 - 2;
        cout << setprecision(2) << mas[i] << endl;
        if (mas[i]>0) {
            plus++;
        }else {
            minus++;
        }
    }
    cout << "even number: " << plus << endl;
    cout << "odd number: " << minus << endl;
    delete [] mas;

    //2

    int even =0, odd = 0;

    srand(time(NULL));
    int **arr = new int* [3];

    for (int count = 0; count < 3; count++) {
        arr[count] = new int [3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = (rand() % 10 + 1);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(*(*(arr + i) + j) % 2 == 0) {
                even++;
            }else {
                odd++;
            }
        }
    }
    cout << "main diagonal" << "\n";
    for(int i = 0; i < 3; i++) {
        cout.width(4);
        cout << *(*(arr + i) + i) << " ";
    }
    cout << "\n" << "side diagonal" << "\n";
        for(int j = 0; j < 3; j++) {
            cout.width(4);
            cout << *(*(arr + j) + (2 - j)) << " ";
        }

    cout << "\n" << "even numbers: " << even << "\n";
    cout << "odd numbers: " << odd << "\n";
    for (int count = 0; count < 3; count++) {
        delete [] arr [count];
    }
    delete [] arr;
}
