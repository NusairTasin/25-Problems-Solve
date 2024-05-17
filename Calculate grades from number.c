#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks > 100 || marks < 0)
        printf("Invalid marks");
    else if(marks >= 90 && marks <100)
        printf("You've got A+!");
    else if(marks >=80 && marks < 90)
        printf("You've got A!");
    else if(marks >=70 && marks < 80)
        printf("You've got B!");
    else if(marks >=60 && marks < 70)
        printf("You've got C!");
    else if(marks >=50 && marks <60)
        printf("You've got D!");
    else if(marks != 0 && marks < 50)
        printf("You've failed!");

    return 0;
}