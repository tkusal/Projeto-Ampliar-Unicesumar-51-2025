/*
    Escreva um programa que calcule a soma de 2 numeros inteiros utilizando subrotina
*/

#include <stdio.h>

int entradaDados () {
    int num;
    printf("Informe o número: ");
    scanf("%d", &num);
    return num;
}

int soma(int num1, int num2) {
    return num1+num2;
}

int main() {
    int n1, n2;
    n1 = entradaDados();
    n2 = entradaDados();    
    printf("Resultado = %d", soma(n1, n2));

    /*int resultado;

    printf("Informe o número 1: ");
    scanf("%d", &n1);
    
    printf("Informe o número 2: ");
    scanf("%d", &n2);
    */

    //resultado = soma(n1, n2);

    //printf("Resultado = %d", resultado);
    

    return 0;
}