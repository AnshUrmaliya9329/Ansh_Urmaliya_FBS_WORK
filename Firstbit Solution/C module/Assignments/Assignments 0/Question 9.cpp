#include <stdio.h>
int  main() {
    int sub1 = 70;
    int sub2 = 65;
    int sub3 = 80;
    int sub4 = 75;
    int sub5 = 60;

    int total;
    float percentage;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    printf("Marks of 5 Subjects:\n");
    printf("Subject 1 = %d\n", sub1);
    printf("Subject 2 = %d\n", sub2);
    printf("Subject 3 = %d\n", sub3);
    printf("Subject 4 = %d\n", sub4);
    printf("Subject 5 = %d\n", sub5);

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
    return 0;
}
