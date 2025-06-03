#include <iostream>

using namespace std;

//1
bool isLeap(int year) {
    return (year%4==0)&&(year%100!=0||year%400==0);
}

//2.1
int monthLength(int year, int month) {
    switch (month) {
        case 1: return 31;
        case 2:return isLeap(year) ? 29 : 28;
        case 3:return 31;
        case 4:return 30;
        case 5:return 31;
        case 6:return 30;
        case 7:return 31;
        case 8:return 31;
        case 9:return 30;
        case 10:return 31;
        case 11:return 30;
        case 12: return 31;
        default: return -1;
    }

    // //2.2
    // int vector[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    // if(isLeap(year)) {
    //     vector[1]= 29;
    // }
    // return vector[month - 1];
}

int main(void) {
    //1
     for(int yr = 100; yr < 201; yr++) {
         cout << yr <<"->" << isLeap(yr) << endl;
     }

    //2
    for(int yr = 2000; yr < 2002; yr++) {
        for(int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr,mo) << " ";
        cout << endl;
    }
}



