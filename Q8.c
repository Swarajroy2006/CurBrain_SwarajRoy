
#include <stdio.h>

int main() {
    int n, k, arr[100], count = 0, temp;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[count] = i;
            count++;
        }
    }

    if (k > count) {
        printf("-1");
    } else {
        printf("%d", arr[k - 1]);
    }

    return 0;
}