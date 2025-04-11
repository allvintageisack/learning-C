#include <stdio.h>
int main ()

{
    float a,b,sum;
    printf("Enter a number\n");
    scanf("%f",& a);
    printf("Enter another number\n");
    scanf("%f",& b);
    sum = a + b;
    printf("The sum of the two numbers is %f\n", sum);

    return 0;
}