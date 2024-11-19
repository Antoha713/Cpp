#include <iostream>

int main() {
    // 6
    int c0;
    int steps = 0;
    std::cout << "Enter c0:";
    std::cin >> c0;
    std::cout << c0 << "\n";
    if (c0>0) {
        while (!(c0 == 1)) {
            if(c0%2 == 0) {
                c0 = c0 / 2;
                std::cout << c0 << "\n";
            } else {
                c0 = 3 * c0 + 1;
                std::cout << c0 << "\n";
            }
            steps ++;
        }
    }
    std::cout << "steps: " << steps << "\n";

    //7
    double pi4 = 0.;
    long n1;
    long num = 1;
    int minus = 1;
    std::cout << "Number of iterations? ";
    std::cin >> n1;
    for (int i = 0; i<n1; i++) {
        pi4 += (double)minus/num;
        num += 2;
        minus *= -1;

    }
     std::cout.precision(20);
     std::cout << "Pi = " << (pi4 * 4.);


     //10
     using namespace std;

     int n;
     cout << "Enter side size";
     cin >> n;
     if (n<0) {
         cout << "You can't use this value";
     }
     if (n>20) {
         cout << "Sorry, the side size is too big";
     }
     if (n>=0 && n<=20) {
         cout << '+';
         for(int i = 0; i < n; i++)
             cout << '-';
         cout << '+' << endl;
         for(int i = 0; i < n; i++) {
             cout << '|';
             for(int j = 0; j < n; j++)
                 cout << ' ';
             cout << '|' << endl;
         }
         cout << '+';
         for(int i = 0; i < n; i++)
             cout << '-';
         cout << '+' << endl;
         return 0;
     }
}
