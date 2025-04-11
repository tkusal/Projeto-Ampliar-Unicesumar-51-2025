#include <stdio.h>

int main() {
    int x = 1, z = 1;

    printf("x = %d \n", x++);
    printf("z = %d \n", ++z);
    printf("---------------------\n");
    printf("x = %d \n", x);
    printf("z = %d \n", z);
    printf("---------------------\n");
    printf("X = %d \n", x+1);
    printf("x = %d \n", x);
    
    return 0;
}