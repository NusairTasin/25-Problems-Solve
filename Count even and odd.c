#include <stdio.h>



int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    
    for(int i = 0; i < n; i++) {
        printf("Enter the elements of array: ");
        scanf("%d", &a[i]);
    }
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0)
            even++;
        if(a[i]%2==1)
            odd++;
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}