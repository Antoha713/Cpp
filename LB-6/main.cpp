#include <iostream>
#include <math.h>

int main(){
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    int num = number;
    int i = 0;
    while (num>0) {
        i++;
        num /=10;
    }
    int result = 0;
    if (number>0) {
        while (i>0) {
            int number1 = (number/pow(10,(i-1)));
            int lastnum = number1 % 10;
            if(lastnum>3) {
                result++;
            }
            i--;
        }
    }
    std::cout << "Numbers > 3: " << result;

}
