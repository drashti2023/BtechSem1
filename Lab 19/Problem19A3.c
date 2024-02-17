#include <stdio.h>
#include <string.h>

void stringFunctions(char str1[], char str2[]) {
    int length;
    int compare;
    char result[100];
    
    length = strlen(str1);
    printf("Length of str1: %d\n", length);
    
    compare = strcmp(str1, str2);
    if (compare == 0) {
        printf("str1 and str2 are equal\n");
    } else if (compare < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is greater than str2\n");
    }
    
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: %s\n", result);
    strlwr(result);
    printf("Lowercase string: %s\n", result);
    
    strupr(result);
    printf("Uppercase string: %s\n", result);
    
    strrev(result);
    printf("Reversed string: %s\n", result);
    
   
}

int main() {
    char str1[] = "Drashti";
    char str2[] = "Rathod";
    
    stringFunctions(str1, str2);
    
    return 0;
}
