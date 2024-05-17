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
    int largest = a[0], smallest = a[0], sum = a[0], avg;
    for(int i = 1; i < n; i++) {
        if(largest < a[i])
            largest = a[i];
        if(smallest > a[i])
            smallest = a[i];
        sum += a[i];
    }
    avg = sum / n;

    printf("The largest value is value in array is %d\n", largest);
    printf("The smallest value is value in array is %d\n", smallest);
    printf("The average value of array is %d\n", avg);

    return 0;
}