/* program to find the sum and profuct of two number`*/
#include<stdio.h>
void main()
{
    int a,b,sum,product;
    printf("Enter the two number:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    product=a*b;
    printf("\n The sum of %d and %d=%d",a,b,sum);
    printf("\n The product of %d and %d=%d",a,b,product);
}
