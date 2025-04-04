/*
    Escreva um algoritmo em C que receba um número e informe se ele é par ou ímpar.
    Dica: necessário usar o operador de módulo.
*/

#include <stdio.h> //STANDARD INPUT OUTPUT . HEADER

int main() {

    int numero;

    printf("Informe o numero: ");
    scanf("%d", &numero);

    if (numero%2 == 0) {
        printf("PAR");
    } else {
        printf("IMPAR");
    }
    
    return 0;
}