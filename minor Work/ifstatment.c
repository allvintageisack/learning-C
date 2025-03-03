#include <stdio.h>

int main()
{
    int Marks;
    printf("Enter mark \n");
    scanf("%d", &Marks);
    if(Marks>=40)
    {
        printf("You have passed!");

    }
    else{
        printf("You have failed");
    }
    return 0;
}

// The if statement is used to execute a block of code only if a condition is true.