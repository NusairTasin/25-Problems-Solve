#include <stdio.h>



int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];

    printf("Elements of the original array : ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }
    printf("\n");

    printf("Elements of the coppied array : ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}