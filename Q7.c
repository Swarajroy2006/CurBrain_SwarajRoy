#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, arr[100], result;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    result = arr[0];

    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }

    printf("GCD of array = %d", result);

    return 0;
}