/*
    Escreva um programa que receba a idade de 5 pessoas e as imprima na tela.
*/

#include <stdio.h>

int main() {
    int idades[5];

    for (int i = 0; i < 5; ++i) {
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
    }

    for (int EMILY = 0; EMILY < 5; EMILY++) {
        printf("%d \n", idades[EMILY]);
    }    

    return 0;
}