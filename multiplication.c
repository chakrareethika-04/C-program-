/Multiplication table 
#include <stdio.h>
int main() {
    int i,number;
    scanf("%d", &number);
    printf("Multiplication table for %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
   return 0;
}
