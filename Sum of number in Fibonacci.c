#include <stdio.h>

int main() {
    int n;
    printf("Enter the nth number of position: ");
    scanf("%d", &n);

    int a = 0, b = 0, c = 1, sum = 1;

    if(n <= 0) {
        sum = 0;
    }
    else {
        printf("0 + 1 ");
        for(int i = 1; i < n-1; i++) {
            a = b;
            b = c;
            c = a + b;
            sum += c;
            printf(" + %d", c);
        }
        printf(" = %d\n", sum);
    }

    return 0;
}