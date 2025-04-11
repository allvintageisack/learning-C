#include <stdio.h>

int main() {
    char name[100]; 
    printf("Enter your name: ");
    scanf("%s", name);  
    for (int i = 0; name[i] != '\0'; i++) {  
        printf("%c", name[i]);
    }

    printf("\n"); 

    return 0;
}
// add gates idk whats that 
