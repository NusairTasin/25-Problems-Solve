#include <stdio.h>

int checkPrime(int x) {
    if(x <= 1) return 0;
    for(int i = 2; i < x; i++) {
        if(x%i == 0) return 0;
    }
    return 1;
}

void fibonacciPrint(int n1, int n2) {
    int n;
    printf("Fibonacci Series upto : ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = n1;
    fib[1] = n2;
    printf("%d %d ",fib[0], fib[1]);
    for(int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    printf("\n");
}

int main() {
    int k;
    printf("Enter the size of the array: ");
    scanf("%d", &k);
    int n[k];   
    for(int i = 0; i < k; i++) {
        printf("Enter the %dth element: ", i+1);
        scanf("%d", &n[i]);
    }

    int j = 0;
    int prime[j];
    printf("The prime numbers are: ");
    for(int i = 0; i < k; i++) {
        if(checkPrime(n[i]) == 1) {
            prime[j] = n[i];
            j++;
            printf("%d ", prime[j-1]);
        }
    }

    printf("\n");

    int num1 = prime[0];
    int num2 = prime[1];
    fibonacciPrint(num1, num2);
    

    return 0;
}