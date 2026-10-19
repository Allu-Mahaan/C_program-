#include<stdio.h>
void main()
{
    int x, y, temp;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("\n The numbers after swapping are:%d %d",x,y);
    
}