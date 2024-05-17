#include <stdio.h>

int Count(int n) {
    int count = 0;
    while(n!= 0) {
        count++;
        n /= 10;
    }
    return count;
}

int power(int n, int count) {
    int result = 1;
    for(int i = 0; i < count; i++) {
        result *= n;
    }
    return result;
}

int checkArmstrong(int n) {
    int count = Count(n);
    int sum = 0;
    int temp = n;
    while(temp!= 0) {
        int rem = temp % 10;
        sum += power(rem, count);
        temp /= 10;
    }
    printf("= %d\n", sum);
    if(sum == n) {
        printf("%d is an Armstrong number!\n", n);
    }
    else {
        printf("%d is not an Armstrong number!\n", n);
    }
}

int main() {
    long long int number;
    printf("Enter then number to be checked : ");
    scanf("%lld", &number);
    checkArmstrong(number);

    return 0;
}