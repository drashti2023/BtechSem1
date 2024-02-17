#include <stdio.h>
#include <string.h>

void replaceCharacter(char str[], char oldChar, char newChar) {
    int length = strlen(str);
    int i;
    
    for ( i = 0; i < length; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
    
    printf("Modified string: %s\n", str);
}

int main() {
    char str[] = "Hello, World!";
    char oldChar = 'o';
    char newChar = 'x';
    
    replaceCharacter(str, oldChar, newChar);
    
    return 0;
}
