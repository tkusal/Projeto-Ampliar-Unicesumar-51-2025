/*
    Escreva um programa em C que leia 2 notas de um aluno e calcule 
    a média dessas notas.
*/

#include <stdio.h>

int main() {

    float nota1;
    float nota2;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1+nota2) /2;

    printf("A média entre %.2f e %.2f é de %.2f", nota1, nota2, media);

    return 0;
}