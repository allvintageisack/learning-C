#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;

    printf("Enter the value of X");
    scanf("%d", &x);

    printf("Enter the value of Y");
    scanf("%d", &y);

    printf("Enter the value of Z");
    scanf("%d", &z);

    int sum= x + y + z;
    printf("The sum of the three numbers is %d\n", sum);

    return 0;

}