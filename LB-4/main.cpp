#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    //6
    bool answer;
    int value;
    cout << "Enter a value: ";
    cin >> value;
    answer = (value>=0 && value<10) || (((value*2)<20)&&(value-2>-2)) || (((value-1)>1)&&(value/2<10)) || (value==111); // insert your expression here
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;

    //7
    float val1 = 2.3;
    float val2 = 2.3;
    float val3 = 2.123456;
    float val4 = 2.123456;
    float val5 = 2.123456;

    printf("%.1f\n", val1);
    printf("%.2f\n", val2);
    printf("%.6f\n", val3);
    printf("%.2f\n", val4);
    printf("%.0f\n", val5);

    //8
    int number1;
    int number2;
    std::cout << "Enter num1,2:";
    std::cin >> number1;
    std::cin >> number2;

    float res1 = (1./(float)number1);
    float res2 = (1./(float)number2);

    if (res1 == res2) {
        std::cout << "true" << "\n";
    } else {
        std::cout << "false" << "\n";
    }

    //9
    int num1;
    int num2;
    int num3;
    int num4;

    std::cout << "Enter num1:" << "\n" << "Enter num2:" << "\n" << "Enter num3:" << "\n" << "Enter num4:" << "\n" ;
    std::cin >> num1 >> num2 >> num3 >> num4;

    if((num1<=255)&&(num1>=0)&&(num2<=255)&&(num2>=0)&&(num3<=255)&&(num3>=0)&&(num4<=255)&&(num4>=0)){
        std::cout << num1 << "." << num2 << "." << num3 << "." << num4;
    }else {
        std::cout << "it's wrong number";
    }
}
