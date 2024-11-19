#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
    //1
    int mas[4][3] = {{1, 2, 3},{4, 4, 4}, {6, 7, 8}, {6, 1, 2}};
    int k = 0;
    for(int i = 0; i < 4; ++i){
        k=0;
        for(int j = 0; j < 3; ++j) {
            if(mas[i][j] % 2==0)
                k++;
        }
        std::cout << "for " << i << " k = " << k << "; ";
    }

    std::cout << "\n";

    //2
    int mas1[6][4] = {{1, 2, 3, 3},{4, 4, 4}, {6, 0, 7, 8}, {6, 1, 3, 2}, {3, 7, 9, 4}, {5, 2, 10, 3}};
    int k1 = 0;
    for(int j = 0; j < 4; ++j) {
        k1=0;
        for(int i = 0; i < 6; ++i){
        if(mas1[i][j] % 2==0)
            k1++;
        }
        std::cout << "for " << j << " k = " << k1 << "; ";
    }

    std::cout << "\n";

    //3
    int mas2[5][7] = {{1, 2, 3, 3, 8},{4, 4, 4, 5, 1, 7, 2}, {6, 0, 7, 8, 5, 2, 1}, {6, 1, 3, 2}, {3, 7, 9, 4, 9, 6, 5}};
    int sum = 0;
    for(int i = 0; i < 5; ++i){
        sum=0;
        for(int j = 0; j < 7; ++j) {
            sum = sum+mas2[i][j];
        }
        std::cout << "for " << i << " sum = " << sum << "; ";
    }

    std::cout << "\n";

    //4
    int mas3[4][6] = {{1, 2, 3, 3, 8},{4, 4, 4, 5, 1, 7}, {6, 0, 7, 8, 5, 2}, {6, 1, 3, 2}};
    int sum2 = 0;
    for(int j = 0; j < 6; ++j){
        sum2=0;
        for(int i = 0; i < 4; ++i) {
            sum2 = sum2+mas3[i][j];
        }
        std::cout << "for " << j << " sum = " << sum2 << "; ";
    }

    std::cout << "\n";

    //5
    int mas4[3][4] = {{1, 2, 3, 3},{14, 4, 4, 5}, {6, 0, 7, 8}};
    int a,b;

    int max = mas4[0][0];
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j) {
            if(mas4[i][j] > max){
                max = mas4[i][j];
                a =i;
                b=j;
            }
        }
    }
    std::cout << "max value = " << max << "; " << "row index = " << a << "; " << " column index = " << b << "; ";

    std::cout << "\n";

    //6
    int mas5[4][7] = {{1, 2, 3, -9, 5, -2, 3},{14, 4, -6, 2, -7, 4, 5}, {6, -7, -10, -3, 0, 7, 8}, {-5, 9 -3, 0, 7, 8}};
    int a1,b1;

    int min = mas5[0][0];
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j) {
            if(mas5[i][j] < min){
                min = mas5[i][j];
                a1 =i;
                b1 =j;
            }
        }
    }
    std::cout << "min value = " << min << "; " << "row index = " << a1 << "; " << " column index = " << b1 << "; ";

    std::cout << "\n";

    //15
    int mas6[3][3] = {{1, 2, 3},{14, 4, -6}, {6, -7, -10}};
    int n = 0;
    int n1 = 2;
    int sum3 =0;
    int sum4 =0;
    for(int i = 0; i < 3; ++i){
        sum3 = sum3 + mas6[n][n];
        sum4 = sum4 + mas6[n][n1];
        n1--;
        n++;
    }
    std::cout << "first diagonal sum = " << sum3 << " ; " << "second diagonal sum = " << sum4;
}
