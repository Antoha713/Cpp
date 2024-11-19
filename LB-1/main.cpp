#include <iostream>
#include <math.h>

int main(){
    //#1
    double a = 2;
    double b = 11.05;

    double res = pow((0.1*log(pow(M_E,3)))/(pow(sin(a/b*M_PI),2)+(pow(cos(a/b*M_PI),2))),1./3);

    std::cout << res << "\n";

    //#2
    double a1 = 3;
    double b1 = 0.521;

    double res1 = pow(pow((0.127*pow(M_E,(a1/b1)))/(1-pow(cos(b1/a1*M_PI),1./3)),2),1./3);

    std::cout << res1;
}