#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int digit;
    int count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        arr[count] = digit;
        count++;

        n = n / 10;
    }

    printf("Digits: ");

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}