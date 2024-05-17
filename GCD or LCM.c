#include <stdio.h>

int GCD(int x, int y) {
    if(y==0) return x;
    else return GCD(y, x%y);
}

int LCM(int x, int y) {
    if(x == 0 || y == 0) {
        return 0;
    } else
        return (x*y)/GCD(x,y);
}

int main() {
    int x,y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("---Select Option---\n");
    printf("1. GCD 2.LCM\n");
    printf("Enter preference: ");
    int choice;
    scanf("%d", &choice);

    if(choice == 1){
        int result = GCD(x,y);
        printf("GCD of %d and %d is %d\n", x, y, result);
    }
    else if(choice == 2){
        int result = LCM(x,y);
        printf("LCM of %d and %d is %d\n", x, y, result);
    }
    return 0;
}