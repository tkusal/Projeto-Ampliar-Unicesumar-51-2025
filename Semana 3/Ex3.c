/*
    Escreva um algoritmo em C que receba 4 notas de um aluno, calcule a media das 4 notas
    e informe se o auno está aprovado (>= 7), em recuperação (>5 e <7) ou reprovado (<5).
*/

#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7)
    {
        printf("Aprovado - Média %.2f", media);
    }
    else if (media >= 5)
    {
        printf("Em recuperação - Média %.2f", media);
    }
    else
    {
        printf("Reprovado - Média %.2f", media);
    }

    return 0;
}