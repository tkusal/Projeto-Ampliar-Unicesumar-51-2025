/*
    Escreva um programa em C que receba um ano (Ex: 2025)
    e informe se esse ano é bissexto ou não.

    Para um ano ser bissexto ele deve ser divisível por 4,
    mas não pode ser divisível por 100 (exceto se for divisível por 400)
*/

#include <stdio.h>

int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        printf("O ano %d é bissexto.", ano);
    } else {
        printf("O ano %d não é bissexto.", ano);
    }
    return 0;
}