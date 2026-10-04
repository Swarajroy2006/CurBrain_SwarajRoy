
#include <stdio.h>

int main()
{
    int n, temp, revnum = 0, result;
    int remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        remainder = temp % 10;
        revnum = revnum * 10 + remainder;
        temp = temp / 10;
    }

    if (n >= 0 && n == revnum)
    {
        printf("Number = %d\n", n);
    }
    else
    {
        result = n + revnum;
        printf("Reverse = %d\n", revnum);
        printf("Result = %d + %d = %d\n", n, revnum, result);
    }

    return 0;
}