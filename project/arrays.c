#include<stdio.h>
int main() {
int items [5];
printf("Enter 5 numbers: ");

for(int i = 0; i < 5; i++) {
    scanf("%d", &items[i]);
}
printf("display items: ");
for(int i = 0; i < 5; i++) {
    printf("%d\n", items[i]);
}

return 0;
}