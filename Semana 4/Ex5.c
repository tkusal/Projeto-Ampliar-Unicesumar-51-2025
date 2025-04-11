/*
    Escreva um algoritmo que imprima na tela todas as tabuadas de multiplicação 1 a 10.
*/

#include <stdio.h>

int main() {
    //int result;]
    int n1, n2;
    for (n1 = 1; n1 <= 10; n1++) {
        for (n2 = 1; n2 <= 10; n2++) {
            //result = n1 * n2;
            printf("%d x %d = %d \n", n1, n2, n1*n2);
        }
        printf("-----------------------------------------------\n");
    }

    printf("Valor de N1 terminou em: %d\n", n1);
    printf("Valor de N2 terminou em: %d", n2);

    return 0;
}