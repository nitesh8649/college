#include <stdio.h>

void copyString(char* source, char* destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int compareStrings(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    if (str1[i] != '\0' || str2[i] != '\0') {
        return 0;
    }
    return 1;
}

void concatenateStrings(char* str1, char* str2) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

void reverseString(char* str) {
    int i = 0, j = 0;
    while (str[j] != '\0') {
        j++;
    }
    j--;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    copyString(str1, str2);
    printf("Copied string: %s", str2);
    
    int result = compareStrings(str1, str2);
    if (result == 1) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    reverseString(str1);
    printf("Reversed string: %s\n", str1);
    
    return 0;
}