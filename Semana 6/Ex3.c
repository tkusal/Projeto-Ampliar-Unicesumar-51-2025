#include <stdio.h>

int main () {

    int x, y, *p;
    x = 10;

    //printf("X = %d\n", x);
    //printf("&X = %p\n", &x);
    //printf("_____\n");
    p = &x;
    //printf("P = %p\n", p);
    //printf("*P = %d\n", *p);
    //printf("_____\n");
    //printf("&P = %p\n", &p);
    //printf("_____\n");
    y = *p/2;
    *p = y + 20;
    printf("Y = %d\n", y);
    printf("X = %d\n", x);
    printf("_____\n");

    return 0;
}