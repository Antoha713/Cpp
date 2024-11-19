#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
   srand(time(NULL));
   //3
   int length = 12;
   int m[length]={};
   int a,b;
   for(int i = 0; i < length; ++i) {
      m[i] = rand()%41-20;
   }
   for (int i=0; i < length; ++i) {
      std::cout << m[i] << ' ';
   }

   std::cout << "\n";

   int max = m[0];
   for(int i = 0; i < length; ++i){
      if(m[i] > max){
         max = m[i];
         a =i;
      }
   }
   int min = m[0];
   for(int i = 0; i < length; ++i){
      if(m[i] < min){
         min = m[i];
         b=i;
      }
   }

   std::swap(m[a],m[b]);

   for (int i=0; i < length; ++i) {
      std::cout << m[i] << ' ';
   }
   std::cout << "\n";
   //4
   int array[length]={};
   int A;
   int cout = 0;

   for(int i = 0; i < length; ++i) {
      array[i] = rand()%41-20;
   }
   for (int i=0; i < length; ++i) {
      std::cout << array[i] << ' ';
   }

   std::cout << "\n" << "Enter A:";
   std::cin >> A;

   for (int i=0; i < length; ++i) {
      if(array[i]>A) {
         cout ++;
      }
   }
   std::cout << "Elements > A: " << cout << "\n";

   //5
   int array2[length]={};
   int ind;

   for(int i = 0; i < length; ++i) {
      array2[i] = rand()%41-20;
   }
   for (int i=0; i < length; ++i) {
      std::cout << array2[i] << ' ';
   }
   std::cout << "\n";

   int max1 = array2[0];
   for(int i = 0; i < length; ++i){
      if(array2[i] > max1){
         max1 = array2[i];
         ind = i;
      }
   }
   int max2 = array2[0];
   for(int i = 0; i < length; ++i){
      if(array2[i]!=array2[ind]) {
         if(array2[i] > max2){
            max2 = array2[i];
         }
      }
   }
   std::cout << "Second max number: " << max2 << "\n";

   //6
   int array3[length]={};
   int zero =0;

   for(int i = 0; i < length; ++i) {
      array3[i] = rand()%41-20;
   }
   for (int i=0; i < length; ++i) {
      std::cout << array3[i] << ' ';
   }
   std::cout << "\n";

   for (int i=0; i < length; ++i) {
      if(array3[i]==0) {
         zero = i;
         i=length;
      }
   }
   if (zero==0) {
      std::cout << "Don't have zero element";
   }else {
      std::cout << "First zero element:" << zero;
   }
}
