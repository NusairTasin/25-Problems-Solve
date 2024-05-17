#include <stdio.h>

int printFactorization(int a) {
    int product = 1;
    for(int i = 1; i <= a; i++) {
        product *= i;
    }
    return product;
}

int main() {
    int n,r;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);

    int nCr = printFactorization(n) / (printFactorization(r) * printFactorization(n - r));
    printf("The value of nCr is : %d\n", nCr);  

    int nPr = printFactorization(n) / printFactorization(n - r);
    printf("The value of nPr is : %d", nPr);

    return 0;
}