/*
    Escreva um programa que receba a idade de 5 pessoas e informe qual a mais velha
*/

#include <stdio.h>

int main()
{
    int idade[5], maiorIdade = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Informe uma idade: ");
        scanf("%d", &idade[i]);

        if (idade[i] > maiorIdade) {
            maiorIdade = idade[i];
        }
    }

    printf("A maior idade é %d", maiorIdade);

    return 0;
}