#include <chrono>
#include <iostream>
#include <ctime>
using namespace std;
struct Date {
    int year;
    int month;

    int day;
};
bool isLeap(int year) {
    return (year%4==0)&&(year%100!=0||year%400==0);
}
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
}
Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date d;
    d.year = tl.tm_year + 1900;
    d.month = tl.tm_mon + 1;
    d.day = tl.tm_mday;
    return d;
}
int countDays (int year, int month, int day) {
    int res =0;
    for (int y = 1; y < year; y++) {
        res += isLeap(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        res += monthLength(year, m);
    }
    res += day;
    return res;
}

int main(void) {
    Date t = today();
    Date dateBirsth = {2025, 04, 29};

    int res = countDays(t.year,t.month,t.day) - countDays(dateBirsth.year, dateBirsth.month,dateBirsth.day);
    cout << res << endl;
    return 0;
}