// Diferença entre While e Do-While

#include <stdio.h>

int main() {

    int i = 10;
    while (i != 10) {
        printf("Não é 10\n");
    }
/*
    do {
        printf("Não é 10\n");
    } while(i != 10);
*/
    return 0;
}