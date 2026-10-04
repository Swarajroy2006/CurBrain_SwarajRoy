#include<stdio.h>
int main(){
    int n,temp,digit;
    int sum;
    int product=1;
    printf("enter a number:");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        digit=temp%10;
        sum+=digit;
        product=product*(temp%10);
        temp/=10;
    }
    printf("sum=%d",sum);
    printf("product = %d",product);
    int result= product-sum;
    printf("result = %d",result);
    


return 0;
}
