#include <iostream>


int my_strlen(const char* arr) {
    int a = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        a++;
    }
    return a;
}

int my_strcmp(const char str1[],const char str2[]) {
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
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

void my_strcpy(char str1[], const char str2[]) {
    for(int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i]; 
    }
    
}



void my_strcat(char* destination, const char* source) {
  int len = my_strlen(destination);

  for (int i = 0; source[i] != '\0'; i++) {
    destination[len + i] = source[i];
  }

  destination[len + my_strlen(source)] = '\0';

  
}

int main() {
    char arr[100] = "i love spb ";
    char arr2[] = "i love Mowa";
    my_strcat(arr, arr2);
    std::cout << arr << std::endl;
    return 0;
}