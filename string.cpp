#include <iostream>
void to_upper(char* arr); 

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
    int len =  my_strlen(str2);
    for(int i = 0; str2[i] != '\0'; i++) {
        str1[i] = str2[i];
         
    }
    str1[len] = '\0';
}

void my_strcat(char* destination, const char* source) {
  int len = my_strlen(destination);

  for (int i = 0; source[i] != '\0'; i++) {
    destination[len + i] = source[i];
  }

  destination[len + my_strlen(source)] = '\0';
}

void my_reverso(char* arr) {
    int len = my_strlen(arr);

    for(int i = 0; i < len / 2; i++) {
        char tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}

int my_palindrom(const char* str) {
    int len = my_strlen(str);
    char arr[len] = {};
    my_strcpy(arr, str);
    to_upper(arr);
    for(int i = 0; i < len / 2; i++) {
        if(arr[i] != arr[len - i - 1]) {
            return 0;
        } 
    }
    return 1;

}

void to_lower(char* arr) {
    int len = my_strlen(arr);

    for(int i = 0; i < len; i++) {
        if((arr[i] >= 64) && (arr[i] <= 90)) {
            arr[i] = arr[i] + 32;
        }
    }
}



int main() {
    char arr[] = "Poop";
    char arr2[] = "i love Mowa";
    int len = my_strlen(arr2);
    char* arr3 = NULL;
    //my_strcpy(arr3, arr2);
    arr3 = arr2;
    arr2[0] = 'a';
    //arr2[0] = 'B';
    std::cout << arr3 << std::endl;
    std::cout << arr2 << std::endl;
    return 0;
}

void to_upper(char* arr) {
    int len = my_strlen(arr);

    for(int i = 0; i < len; i++) {
        if((arr[i] >= 97) && (arr[i] <= 122)) {
            arr[i] = arr[i] - 32;
        }
    }    
}