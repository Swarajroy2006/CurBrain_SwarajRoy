
#include<stdio.h>

int reverse_and_double(int n);

int main()
{
    int n, revnum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;

    while(temp != 0)
    {
        int remainder = temp % 10;
        revnum = revnum * 10 + remainder;
        temp = temp / 10;
    }

    int result = reverse_and_double(n);

    printf("Reverse = %d ;  %d\n", revnum, result);

    return 0;
}

int reverse_and_double(int n)
{
    int revnum = 0, remainder;

    while(n != 0)
    {
        remainder = n % 10;
        revnum = revnum * 10 + remainder;
        n = n / 10;
    }

    return revnum * 2;
}
