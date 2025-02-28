#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("A soma dos números é igual a: %d\n", resultado);

    return 0;
}