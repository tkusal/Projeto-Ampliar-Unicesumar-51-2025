#include <stdio.h>

void soma(int *B) {
    printf("%d", *B);
}

int main () {

    int x = 10, y = 5, resultado;
    resultado = y + x;

    soma(&resultado);

    return 0;
}