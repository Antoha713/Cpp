#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {{1, 2, 3, 9}, {6, 7, 8, 5}, {6, 1, 2, 4}, {2, 8, 9, 13}};
    int *b = &arr[0][0];
    int even = 0, odd = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(*(b + i * 4 + j) % 2 == 0) {
                even++;
            }else {
                odd++;
            }
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << "main diagonal" << "\n";
    for(int i = 0; i < 4; i++) {
        cout.width(4);
        cout <<  *(b + i * 4 + i);
    }
    cout << "\n" << "side diagonal" << "\n";
    for(int j = 0; j < 4; j++) {
        cout.width(4);
        cout <<  *(b + j * 4 - 1) + 4 - 1;
    }
    cout << "\n" << "even numbers: " << even << "\n";
    cout << "odd numbers: " << odd << "\n";
}
