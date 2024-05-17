#include <stdio.h>

int checkEven(int x) {
    if(x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int num[n];

    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int even[n];
    int odd[n];
    int j = 0, k = 0;

    for(int i = 0; i < n; i++) {
        int flag = checkEven(num[i]);

        if(flag == 1) {
            if(num[i] == 0) continue;
            else{ 
                even[j] = num[i];
                j++;
            }
        } else {
            odd[k] = num[i];
            k++;
        }
    }

    printf("Even numbers: ");
    for(int i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd numbers: ");
    for(int i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}