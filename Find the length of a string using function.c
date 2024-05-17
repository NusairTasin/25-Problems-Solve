#include <stdio.h>

int strLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[11] = "Hello World";
    printf("Length of the string : %d", strLength(str));

    return 0;
}