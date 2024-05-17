#include <stdio.h>

int main() {
    int num[5] = {1,4,3,8,2};
    int size = (sizeof(num)/ sizeof(num[0]));
    printf("The array is: ");
    for(int i=0; i<size; i++) {
        printf("%d ",num[i]);
    }
    printf("\n");

    for(int i=0; i<size/2; i++) {
        for(int j=size-1; j>=size/2; j--) {
            int temp = num[i];
            num[i] = num[j];
            num[j] = temp;
            i++;
        }
    }
    printf("The reversed array is: ");
    for(int i=0; i<size; i++) {
        printf("%d ",num[i]);
    }
    

    return 0;
}