#include <iostream>
#include <math.h>

int main(){
    //1
    int x;
    double y;

    for (int i = 1; i<6; i++) {
        std::cout << "Enter x" << i << ":";
        std::cin >> x;
        y = pow(sin(x),5) + fabs(5*x-1.5);
        std::cout << "Y = " << y << "\n";
    }

    //2
    double num = 0;
    for(int i = 10; i<=20; i++) {
        num += sqrt(i);
    }
    std::cout << num << "\n";

    //3
    int a, b, h;
    std::cout << "Enter a,b,h:";
    std::cin >> a >> b >> h;
    int x1 = a;
    std::cout << "------------------" << "\n" << ": X :" << ": Y :" << "\n" << "------------------" << "\n";
    for (int i = a; i<=b; i+=h) {
        if(x1 >= 7) {
            double y1 = 8 + (sqrt(x1-7)/(x1+5));
            std::cout << " : " << x1;
            std::cout << " : " << y1 << " : " << "\n";
        } else {
            std::cout << " : " << x1 << " : x != R : " << "\n";
        }
        x1 += h;
    }
    std::cout << "------------------";

}
