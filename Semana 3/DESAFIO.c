/*
    Escreva um programa que leia a idade de uma pessoa e informe se ela é maior ou igual à 18 anos 
    ou menor de 18 anos.
*/

#include <stdio.h> //STANDARD INPUT OUTPUT . HEADER

int main() {

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Maior ou igual a 18 anos.");
    } else if (idade >=0) {
        printf("Menor de 18 anos.");
    } else {
        printf("Idade inválida, valor menor que zero.");
    }

    return 0;
}