/*
    Faça um programa em C que leia uma temperatura em graus Celsius e a converta para Fahrenheit.
    Fórmula: F=(Cx9/5)+32
*/

#include <stdio.h>

int main() {

    float celsius, fahr;

    printf("Insira a temperatura em Celsius: \n");
    scanf("%f", &celsius);

    fahr = (celsius*9/5) + 32;

    printf("O valor convertido de %.2fºC é de %.2fºF", celsius, fahr);

    return 0;
}