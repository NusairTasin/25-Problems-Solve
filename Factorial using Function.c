#include <stdio.h>

void factorial(int a) {
    int product = 1, temp = a;
    while (temp) {
        product *= temp;
        temp--;
    }
    printf("The factorial of %d is %d", a, product);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    factorial(n);

    return 0;
}