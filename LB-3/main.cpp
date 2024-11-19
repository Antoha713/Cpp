#include <iostream>

int main(){
    //#1
    int mainNumber;
    std::cout << "Enter a three-digit number:";
    std::cin >> mainNumber;

    int number1 = mainNumber/100;
    int number2 = (mainNumber-(number1*100))/10;
    int number3 = mainNumber-((number2*10)+(number1*100));
    int result = 0;

    if(number1>3){
        result= result+1;
    }
    if(number2>3){
        result= result+1;
    }
    if(number3>3){
        result= result+1;
    }
    std::cout << "number1 :" << number1 << "\n" << "number2 :" << number2 << "\n"
    << "number3 :" << number3 << "\n" << "number >3 :" << result << "\n";

    //#2
    int monthNumber;
    std::cout << "Enter number of the month:";
    std::cin >> monthNumber;
    switch(monthNumber){
        case 1: std::cout << "January"; break;
        case 2: std::cout << "February"; break;
        case 3: std::cout << "March"; break;
        case 4: std::cout << "April"; break;
        case 5: std::cout << "May"; break;
        case 6: std::cout << "June"; break;
        case 7: std::cout << "July"; break;
        case 8: std::cout << "August"; break;
        case 9: std::cout << "September"; break;
        case 10: std::cout << "October"; break;
        case 11: std::cout << "November"; break;
        case 12: std::cout << "December"; break;
        default: std::cout << "This is not a month"; break;
    }
}