#include <iostream>
using namespace std;

const int DivideByZero = 111;

float internaldiv(float arg1, float arg2) {
    if (arg2 == 0) {
        throw DivideByZero;
    }
    return arg1 / arg2;
}

float div(float arg1, float arg2) {
    return internaldiv(arg1, arg2);
}

// float div(float arg1, float arg2) {
//     if (arg2 == 0){
//         throw DivideByZero;
//     }
//     return arg1 / arg2;
// }

int main() {
    float a, b;
    while (cin >> a >> b) {
        try {
            float r = div(a, b);
            cout << r << endl;
        } catch (int e) {
            if (e == DivideByZero) {
                cout << "Are you kidding me?" << endl;
                cout << "Your input is not valid. You can't divide by zero." << endl;
            } else {
                cout << "Unknown error." << endl;
            }
        }
    }
    return 0;
}
