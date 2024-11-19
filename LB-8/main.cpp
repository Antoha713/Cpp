#include <iostream>
#include <algorithm>

int main() {
    //1
    int length = 12;
    int m[length]={9,-7,1,-8,6,73,59,33,-23,8,1};

    std::cout << "sorted by ascending order:" << "\n";
    std::sort(m, m+length);
    for (int i=0; i < length; ++i) {
        std::cout << m[i] << ' ';
    }

    std::cout << "\n" << "sorted in descending order:" << "\n";

    std::sort(m, m+length, std::greater<int>());
    for (int i=0; i < length; ++i) {
        std::cout << m[i] << ' ';
    }

    std::cout << "\n" << "#2" << "\n";

    //2
    int length1 = 12;
    int array[length1]={9,-7,1,-8,6,73,59,33,-23,8,1};

    int max = m[0];
    for(int i = 0; i < 5; ++i){
        if(m[i] > max){
            max = m[i];
        }
    }

    int maxi = 0;
    for (int i=0; i < length; ++i) {
        if(array[i]==max) {
            maxi = 1;
        }
        if(maxi==0) {
            if(array[i]<0) {
                array[i]=0;
            }
        }
        std::cout << array[i] << ' ';
    }
}
