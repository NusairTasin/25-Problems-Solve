#include <stdio.h>

int checkPrime(int x) {
    if(x <= 1) return 0;
    for(int i = 2; i < x; i++) {
        if(x%i == 0) return 0;
    }
    return 1;
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

    printf("The array is: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

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
    

    return 0;
}