#include <iostream>

int my_strelen(char arr[]) {
    int a = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        a++;
    }
    return a;
}

int main() {
   char arr[] = "i love spb";
   std::cout << my_strelen(arr) << std::endl;
    return 0;
}