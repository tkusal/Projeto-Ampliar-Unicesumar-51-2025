/*
    Escreva um programa que apresente as quatro operações aritmeticas pro usuário.
    Como uma calculadora. O usuário deverá escolher qual operação ele quer realizar
    e informar 2 números.

    1. Soma
    2. Subtração
    3. Divisão
    4. Multiplicação
*/

#include <stdio.h>

int main() {
    float num1, num2;
    int opcao;

    printf("Informe o primeiro número: ");
    scanf("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operação:\n"
        "1. Soma\n"
        "2. Subtração\n"
        "3. Divisão\n"
        "4. Multiplicação\n");
    scanf("%d", &opcao);

    float result;

    switch (opcao) {
        case 1:
            //soma
            result = num1 + num2;
            break;
        case 2:
            //subtração
            result = num1 - num2;
            break;
        case 3:
            //divisão
            if (num2 == 0) {
                print("Valor inválido para divisão");
                return 0;
            } else {    
                result = num1 / num2;
            }    
            break;
        case 4:
            //multiplicação
            //printf("O resultado é: %f\n", num1*num2);
            //return 0;
            result = num1 * num2;
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    printf("O resultado é: %.2f\n", result);

    return 0;
}