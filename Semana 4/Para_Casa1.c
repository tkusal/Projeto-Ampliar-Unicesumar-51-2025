/*
    Escreva um programa que leia o nome completo de um aluno e suas 4 notas de matemática.
    O programa deverá calcular a média das notas e por fim imprimir na tela o nome do aluno e informar
    se ele está aprovado (media > 6) ou reprovado.
*/

#include <stdio.h>

#define qtdNotas 4

int main()
{

    char nome[50];
    float nota[qtdNotas], media = 0;
    // const int qtdNotas = 4;

    printf("Informe o nome do aluno: ");
    scanf("%49[^\n]s", nome);

    for (int contador = 0; contador < qtdNotas; contador++)
    {
        printf("Informe a nota %d: ", contador + 1);
        scanf("%f", &nota[contador]);

        media = media + nota[contador];
        // media += nota[contador];
    }

    media /= qtdNotas;
    // media = media / 4;

    if (media > 6)
    {
        printf("Aluno: %s \nMédia: %.2f \nAprovado!", nome, media);
    }
    else
    {
        printf("Aluno: %s \nMédia: %.2f \nReprovado!", nome, media);
    }

    return 0;
}