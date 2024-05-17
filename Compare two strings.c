#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    printf("Enter string 1: ");
    gets(str1);

    printf("Enter string 2: ");
    gets(str2);
    
    int result = strcmp(str1, str2);
    (result == 0) ? printf("The strings are equal") : printf("The strings are not equal");

    return 0;
}