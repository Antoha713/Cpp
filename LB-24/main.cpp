#include <iostream>
#include <string>
using namespace std;
class Fraction{
public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble();
    // ...
    bool isGreaterThan(Fraction that);
    bool isLessThan(Fraction that);
    bool isEqual(Fraction that);
private:
    int numerator;
    int denominator;
    void reduce();
};
Fraction::Fraction(int numerator, int denominator) {
    this-> numerator = numerator;
    this-> denominator=denominator;
    reduce();
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
        int num = numerator%denominator;
        res = num1 + (double)num/denominator;
    }else {
        res = (double) numerator/denominator;
    }
    return res;
}

int evkl(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a!=0&&b!=0) {
        if(a>b) {
            a=a%b;
        }else {
            b=b%a;
        }
    }
    return a+b;
}

void Fraction::reduce() {
    int a = evkl(numerator,denominator);
    numerator = numerator/a;
    denominator = denominator/a;
    if (denominator<0) {
        numerator = 0-numerator;
        denominator = 0-denominator;
    }
}

bool Fraction::isEqual(Fraction that) {
    bool equal = (this->numerator*that.denominator == that.numerator*this->denominator);
    return equal;
}

bool Fraction::isGreaterThan(Fraction that) {
    bool greater = (this->numerator*that.denominator > that.numerator*this->denominator);
    return greater;
}

bool Fraction::isLessThan(Fraction that) {
    bool greater = (this->numerator*that.denominator < that.numerator*this->denominator);
    return greater;
}

int main() {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);

    size_t pos1 = input1.find('/');
    int num1 = stoi(input1.substr(0, pos1));
    int den1 = stoi(input1.substr(pos1 + 1));

    size_t pos2 = input2.find('/');
    int num2 = stoi(input2.substr(0, pos2));
    int den2 = stoi(input2.substr(pos2 + 1));

    Fraction f1(num1, den1);
    Fraction f2(num2, den2);

    if (f1.isGreaterThan(f2)) {
        cout << f1.toString() << " > " << f2.toString() << endl;
    } else if (f1.isLessThan(f2)) {
        cout << f1.toString() << " < " << f2.toString() << endl;
    } else {
        cout << f1.toString() << " = " << f2.toString() << endl;
    }

    return 0;
}
