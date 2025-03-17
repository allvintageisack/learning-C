// #include <stdio.h>
// void increment(int x)
// {
//     x= x+1;
//     printf("inside function%d\n",x);
// }
// int main()
// {
//     int num =5;
//     increment(num);
//     printf("outside function%d", num);
//     return 0;
// }

#include <stdio.h>
void increment(int x)
{
	x = x+1;
	printf("Inside fuction%d\n", x);
}
int main()
{
int num = 5;
increment(num);
printf("Outside function %d", num);
return 0;
}