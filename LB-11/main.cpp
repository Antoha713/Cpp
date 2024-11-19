#include <iostream>

using namespace std;

int main()
{
    //1
struct Date {
    int hours;
int minutes;
};
Date time;
int  duration = -1;
time.hours = -1;
time.minutes = -1;
while (time.hours < 0 || time.hours > 23) {
     std::cout << "Enter hour: ";
     std::cin >> time.hours;
     if(time.hours < 0 || time.hours > 23) {
         std::cout << "Invalid hour: " << time.hours << "\n";
     }
 }
 while (time.minutes < 0 || time.minutes > 59) {
     std::cout << "Enter minute: ";
     std::cin >> time.minutes;
     if(time.minutes < 0 || time.minutes > 59) {
         std::cout << "Invalid minute: " << time.minutes<< "\n";
     }
 }
 while (duration<0) {
     std::cout << "Enter duration : ";
     std::cin >> duration;
     if(duration < 0) {
        std::cout << "Invalid duration: " << duration << "\n";
     }
 }

 int hh = duration / 60;
 int mm = duration % 60;
 time.minutes += mm;
 time.hours += hh;
 time.hours += time.minutes / 60;
 time.minutes %= 60;
time.hours %= 24;
if(time.hours < 10) {
    std::cout << 0;
 }
 std::cout << time.hours << ":";
if(time.minutes < 10) {
     std::cout << 0;
}
std::cout << time.minutes;

 //2
 struct Date1 {
    int hours;
    int minutes;
 };
Date1 first, second;
 first.hours = -1;
 first.minutes = -1;
 while ((first.hours < 0 || first.hours > 23)||(first.minutes < 0 || first.hours > 59)) {
     std::cout << "Enter first time: ";
     std::cin >> first.hours >> first.minutes;
     if(first.hours < 0 || first.hours > 23) {
        std::cout << "Invalid hour: " << first.hours;
     }
     if(first.minutes < 0 || first.minutes > 59) {
        std::cout << "Invalid minute: " << first.minutes;
     }
 }
 second.hours = -1;
 second.minutes = -1;
while ((second.hours < 0 || second.hours > 23)||(second.minutes < 0 || second.hours > 59)) {
     std::cout << "Enter second time: ";
     std::cin >> second.hours >> second.minutes;
    if(second.hours < 0 || second.hours > 23) {
         std::cout << "Invalid hour: " << second.hours;
     }
     if(second.minutes < 0 || second.minutes > 59) {
        std::cout << "Invalid minute: " << second.minutes;
     }
 }

 int secMinutes = second.hours * 60 + second.minutes;
int firMinutes = first.hours * 60 + first.minutes;

int duration1 = firMinutes - secMinutes;

 int hours = duration1 / 60;
int minutes = duration1 % 60;

if(hours < 10) {
    std::cout << 0;
 }
std::cout << hours << ":";
if(minutes < 10) {
     std::cout << 0;
 }
std::cout << minutes;
 }
