/*
    Escreva um programa em C que receba as informações de um funcionário.
    Funcionário possui nome, salário e idade. 
    Se o funcionário tiver acima de 30 anos, deverá receber um aumento de 10%. 
    Escreva na tela o nome do funcionário e o novo salário. 
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char nome[30];
    int idade;
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe o nome: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    /*
        fgets, ao ler a informação passada pelo usuário, grava dentro do vetor o caractere de
        quebra de linha (\n). Sendo assim, é necessário removê-lo, substituindo pelo caractere nulo (\0).
        Como não sabemos em que indice foi savo o '\n', usamos a função do strcspn() para encontrá-lo.
    */
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Informe a idade: ");
    scanf("%d", &funcionario.idade);

    printf("Informe o salario: ");
    scanf("%f", &funcionario.salario);

    if (funcionario.idade > 30) {
        funcionario.salario = funcionario.salario * 1.1;
    }

    printf("Funcionario: %s\nSalario: %.2f", funcionario.nome, funcionario.salario);

    return 0;
}