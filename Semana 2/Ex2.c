/*
    Escreva um programa que calcule e exiba a área de um círculo.
    Como dado de entrada, o programa deverá solicitar o raio do círculo ao usuário.
    Fórmula: Área = pi x raio²
*/

#include <stdio.h>

#define pi 3.1416

int main() {

    float raio, area;

    printf("Informe o raio do círculo: ");
    scanf("%f", &raio);

    area = (raio * raio) * pi;

    printf("Área = %.2f", area);

    /*
        %d = inteiros decimais
        %f = numeros float
        %c = 1 caractere
        %s = conjunto de caracteres (string)
    */    

    return 0;
}