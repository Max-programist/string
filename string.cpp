#include <iostream>

int my_strelen(char arr[]) {
    int a = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        a++;
    }
    return a;
}
int my_strcmp(char str1[], char str2[]) {
    int len1 = my_strelen(str1);
    int len2 = my_strelen(str2);
    if(len1 != len2) {
        return 1;
    } 
    for(int i = 0; i < len1; i++) {
        if(str1[i] != str2[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
   char arr[] = "i love Mow";
   char arr2[] = "i love Mow";
   std::cout << my_strcmp(arr, arr2) << std::endl;
    return 0;
}