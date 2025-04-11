#include <stdio.h>
int main() {
  char greetings[] = {'H','e','l','l','o'};
  for ( int i= 0; i < 5; i++)
  {
    printf("%c",greetings[i]);
  }
  return 0;
}
/*string function 
strlen () - length
strncat - concatenate
strcpy - copy

write a c program that asks a user to enter a string and then prints the length of the string using the string length function .
write a c program that takes two strings from the user their first name and last name then use sting cat function to combine them into a single full name (with a space btw them) print the result 
write a c program that asks the user to enter a string then copies that string into another variable using the string copy function and prints the both the original and copied string

*/