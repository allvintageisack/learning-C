#include <stdio.h>
//format specifiers in c
// &d is used inside the printf() function to print integer values,
// %f is used to print float values,
// %c is used to print character values,
// %s is used to print string values.
int main ()
{
    int num1;
    num1 = 17;
    printf("%d", num1);    
// so all together 
int secondnum =6;
float secondnum2 = 6.55;
char myletter = 'A'; // note in char we use single quotes and not double quotes

printf("My favorite number is : %d", secondnum); //To combine both text and a variable, separate them with a comma inside the printf() function
printf("%f", secondnum2);
    return 0;
}

//i had to push code
//day2