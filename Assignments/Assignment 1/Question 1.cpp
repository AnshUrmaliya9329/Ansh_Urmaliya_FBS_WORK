#include <stdio.h>

int main() {
    int num, original, reverse = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    reverse = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    if (original == reverse)
        printf("%d is a Palindrome number", original);
    else
        printf("%d is not a Palindrome number", original);

    return 0;
}
