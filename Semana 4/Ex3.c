/*
    Escreva um programa que faça uma contagem regressiva de 50 a 0.
*/

#include <stdio.h>

int main() {

    int i = 50;
    while (i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
    /*
    for (int i = 50; i >= 0; i--) {
        printf("%d\n", i);
    }
    */
    return 0;
}