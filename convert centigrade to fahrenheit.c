#include <stdio.h>
void main()
{
    float centi, fahr;
    printf("Enter the temperature in centigrade:");
    scanf("%F",&centi);
    fahr=9.0/5*centi+32;
    printf("\n The temperature in fahrenheit is:%f",fahr);
    printf("\n The temperature in centigrade is:%f",centi);
}