#include <stdio.h>

int Dec_Oct(int dec) {
    int oct = 0, i = 1;
    while (dec!= 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}

int Oct_Dec (int oct) {
    int dec = 0, i = 1;
    while (oct!= 0) {
        dec += (oct % 10) * i;
        oct /= 10;
        i *= 8;
    }
    return dec;
}

int main() {
    printf("Choose option: \n");
    printf("1. Decimal to octal\n");
    printf("2. Octal to decimal\n Option: ");
    int option;
    scanf("%d", &option);

    int num;
    printf("Input number : ");
    scanf("%d", &num);
    int result = (option == 1) ? (result =  Dec_Oct(num)) : (result = Oct_Dec(num));
    printf("Result : %d", result);

    return 0;
}