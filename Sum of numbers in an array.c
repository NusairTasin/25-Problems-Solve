#include <stdio.h>

void arrayInput(int n,int arr[]) {
    for(int i = 0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}

int sumOfArrays(int n,int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    printf("Number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    arrayInput(n,arr);
    printf("Sum of the numbers in array: %d\n",sumOfArrays(n,arr));

    return 0;
}