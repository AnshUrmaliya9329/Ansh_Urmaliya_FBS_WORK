#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float average;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    average = (a + b + c + d + e) / 5.0;

    printf("Average of five numbers = %.2f", average);

    return 0;
}
