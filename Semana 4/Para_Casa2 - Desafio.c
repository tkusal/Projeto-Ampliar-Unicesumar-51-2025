/*
    Escreva um programa que leia a idade de 5 pessoas e armazene em um vetor.
    O programa deverá imprimir na tela essas cinco idades em ordem crescente.

    //Bubble Sort
*/

#include <stdio.h>

#define qtdIdades 5

int main() {
    int idade[qtdIdades];
    int box;

    for (int x = 0; x < qtdIdades; x++) {
        printf("Escreva a idade %d: ", x+1);
        scanf("%d", &idade[x]);
    }

    //Selection Sort
    for (int x = 0; x < qtdIdades-1; x++) {
        for (int z = x+1; z < qtdIdades; z++) {
            if (idade[x] > idade [z]) {
                box = idade[x];
                idade[x] = idade[z];
                idade[z] = box;
            }
        }
    }

    for (int x = 0; x < qtdIdades; x++) {
        printf("%d - ", idade[x]);
    }

    return 0;
}