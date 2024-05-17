#include <stdio.h>

int LeapYear(int year) {
    int flag;
    if((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)) {
        flag = 1;
    } else flag = 0;
    return flag;
}

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    int result = LeapYear(year);
    (result == 1) ? printf("%d is a Leap Year", year) : printf("%d is not a Leap Year", year);
    return 0;
}