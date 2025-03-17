#include <stdio.h>


int main(int argc, char const *argv[])
{
    int i, j;
// Outer loop
for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times
  
    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
  }
    return 0;
}





// int i;

// for (i = 0; i < 5; i++) {
//   printf("%d\n", i);
// }