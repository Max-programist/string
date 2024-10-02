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

void my_strcpy(char str1[], char str2[]) {
    for(int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i]; 
    }
    
}

void my_strcat(char str1[], char str2[]) {
    
}

int main() {
    char arr[] = "i love spb";
    char arr2[] = "i love Mowaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    my_strcpy(arr, arr2);
    std::cout << arr << std::endl;
    return 0;
}