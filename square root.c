#include<stdio.h>
#include<math.h>

void main()
{
    int num;
    float ans;
    printf("Enter the number:");
    scanf("%d",&num);
    ans=sqrt(num);
    printf("\n The square root of %d=%f",num,ans);
}