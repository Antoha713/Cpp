#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
class Fraction{
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
private:
    int numerator;
    int denominator;
};

Fraction::Fraction(int numerator, int denominator) {
    this-> numerator = numerator;
    this-> denominator=denominator;
}

string Fraction::toString() {
    string print = "";
    int num1 = 0,
    num = 0;
    if (abs(numerator)>abs(denominator)) {
        num1 = numerator/denominator;
        num = numerator%denominator;
        if(num==0) {
            print = to_string(num1);
        }else {
            if (denominator<0) {
                print = to_string(num1) + " " + to_string(abs(num)) + "/" + to_string(0-denominator);
            }else if(numerator<0){
                print = to_string(num1) + " " + to_string(0-num) + "/" + to_string(denominator);
            }else{
                print = to_string(num1) + " " + to_string(num) + "/" + to_string(denominator);
            }
        }
    }else{
        if (denominator<0) {
            print = to_string(0-numerator) + "/" + to_string(0-denominator);
        }else {
            print = to_string(numerator) + "/" + to_string(denominator);
        }
    }
    return print;
}

double Fraction::toDouble() {
    int num1 = 0;
    double res = 0.0;
    if (numerator>denominator) {
        num1 = numerator/denominator;
        numerator = numerator%denominator;
        res = num1 + (double)numerator/denominator;
    }else {
        res = (double) numerator/denominator;
    }
    return res;
}



int main(void) {
    int num, den;
    string input = "";
    getline(cin, input);
    size_t pos = input.find('/');
    string numS = input.substr(0, pos);
    string denS = input.substr(pos+1);
    num = stoi(numS);
    den = stoi(denS);
    Fraction fraction(num, den);
    cout << fixed << setprecision(2) << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
    return 0;
}