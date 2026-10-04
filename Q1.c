#include<stdio.h>
int main()
{
    int n,count=0;
    int t;
    printf("enter the number:");
    scanf("%d",&n);
    t=n;
    do{
        t /= 10;
        count++;

    }while(t!=0);
    //printf("count = %d",count);
    if(count % 2 == 0){
        printf("true \n");
        printf("%d has %d digits which is even\n",n,count);
        if(n<0){
        printf("the minus sign is not a digit , %d has %d digits which is even ",n,count);
        }
    }
    else  {
        printf("false\n");
        printf("%d has %d digits which is odd\n",n,count);
        if(n<0){
            printf("the minus sign is not a digit, %d has %d digits which is odd\n",n,count);

        }

    }


    return 0;
    }
