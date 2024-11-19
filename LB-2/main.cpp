#include <iostream>
#include <math.h>

int main(){
    //#1
    int x1;
    std::cout << "Enter x1:";
    std::cin >> x1;
    double res;

    if(x1>=0){
        res = pow(M_E,(-x1+2));
    }else{
        res = pow(M_E,(-x1))*sin(1/(x1+3.2));
    }

    std::cout << "Result:" << res << "\n";

    //#2
    double x,y;
    std::cout << "Enter x:";
    std::cin >> x;
    std::cout << "Enter y:";
    std::cin >> y;

    if((x>=0)&(y>=0)&(x<=(-y+2))) {
        std::cout << "This point in the figure";
    } else {
        std::cout << "This point is outside the figure";
    }

}