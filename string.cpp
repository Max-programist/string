#include <iostream>

int main() {
   char arr[] = "i love spb";
   int a = 0;
   int i = 0;
   while(arr[i++] != '\0') {
    a++;
   }
   std::cout << a << std::endl;
    return 0;
}