/*
    Escreva um algortimo em C que receba 3 números inteiros
    e informe qual deles é o maior.
*/

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Informe o primeiro número inteiro: ");
    scanf("%d", &n1);
    printf("Informe o segundo número inteiro: ");
    scanf("%d", &n2);
    printf("Informe o terceiro número inteiro: ");
    scanf("%d", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("O maior número é %d", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("O maior número é %d", n2);
    }
    else if (n3 > n2 && n3 > n1)
    {
        printf("O maior número é %d", n3);
    }
    else
    {
        printf("Todos os valores são iguais: %d", n1);
    }

    return 0;
}