#include <stdio.h>

int main() {
    int n, a, b;
    int digit;
    int countA = 0, countB = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    if (n == 0) {
        if (a == 0)
            countA++;

        if (b == 0)
            countB++;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit == a)
            countA++;

        if (digit == b)
            countB++;

        n = n / 10;
    }

    int difference = countA - countB;

    if (difference < 0)
        difference = -difference;

    printf("Absolute difference = %d", difference);

    return 0;
}