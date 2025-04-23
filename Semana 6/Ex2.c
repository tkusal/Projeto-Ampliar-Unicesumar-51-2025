/*
    Escreva um programa que receba o cadastro de ATÉ 10 pessoas.
    Cada pessoa possui:
    - Nome
    - Endereço
    - Matricula

    Cada endereço possui:
    - Rua
    - Numero
    - CEP

    O programa deve permitir:
    1. Cadastrar Pessoa
    2. Listar Pessoas
    3. Buscar pessoa por matrícula
    4. Sair

    Divida as operações em subrotinas conforme julgar mais adequado.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char rua[30];
    int numero;
    int cep;
} Endereco;

typedef struct {
    char nome[30];
    Endereco endereco;
    int matricula;
} Pessoa;

#define qtdPessoas 10

Pessoa pessoas[qtdPessoas];

int cadastrarPessoa(int i) {
    if (i >= qtdPessoas) {
        printf("Número total de pessoas cadastradas atingido");
        return i;
    } else {
        printf("Informe o nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';

        printf("Informe a rua do endereço: ");
        fgets(pessoas[i].endereco.rua, sizeof(pessoas[i].endereco.rua), stdin);
        pessoas[i].endereco.rua[strcspn(pessoas[i].endereco.rua, "\n")] = '\0';

        printf("Informe o número do endereço: ");
        scanf("%d", &pessoas[i].endereco.numero);
        getchar();

        printf("Informe o CEP do endereço: ");
        scanf("%d", &pessoas[i].endereco.cep);
        getchar();

        printf("Informe a matricula: ");
        scanf("%d", &pessoas[i].matricula);
        getchar();

        return ++i;
    }
}

void listarPessoas (int contador) {
    for(int i = 0; i <= contador; i++){
        printf("%s\n", pessoas[i].nome);
    }
}

void buscarMatricula (int contador) {
    int matricula, aux = 0;
    printf("Informe qual matricula deseja buscar: ");
    scanf("%d", &matricula);
    getchar();

    for (int i = 0; i <= contador; i++) {
        if (matricula == pessoas[i].matricula) {
            printf("%s\n", pessoas[i].nome);
            aux++;
        }
    }

    if (aux == 0) {
        printf("Pessoa não encontrada.\n");
    }
}

int main () {
    int opcao, contadorPessoas = 9;

    do {
        prinf("Escolha uma das alternativas: \n");
        printf("1. Cadastrar Pessoa\n2. Listar Pessoas\n3. Buscar pessoa por matrícula\n4. Sair");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            contadorPessoas = cadastrarPessoa(contadorPessoas);            
            break;
        case 2:
            listarPessoas(contadorPessoas);
            break;
        case 3:
            buscarMatricula(contadorPessoas);
            break;
        case 4:
            printf("Encerrando...");
            return 0;
            break;

        default:
            printf("Opção inválida. Tente noamvente. \n");
            break;
        }

    } while (1);

}