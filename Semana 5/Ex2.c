/*
    Escreva um programa em C que apresente um menu para o usuário com as seguintes opções: 

    1. Cadastrar alunos
    2. Listar alunos
    3. Sair do sistema

    Cada aluno possui nome e idade.
    O programa deverá receber 3 alunos na opção de "cadastrar alunos".
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define qtAlunos 3

typedef struct {
    char nome[30];
    int idade;
}Aluno;

int main() {
    Aluno alunos[qtAlunos];
    int opcao;

    do {
        printf("Escolha uma das opções: \n");
        printf("1. Cadastrar alunos\n2. Listar alunos\n3. Sair do sistema\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                for (int i = 0; i < qtAlunos; i++) {
                    printf("Informe o nome:");
                    getchar();
                    fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
                    alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

                    printf("Informe a idade: ");
                    scanf("%d", &alunos[i].idade);
                }
                printf("\n============\n");
                break;
            case 2:
                for (int i = 0; i < qtAlunos; i++) {
                    printf("Nome: %s\nIdade: %d\n", alunos[i].nome, alunos[i].idade);
                    printf("---------------\n");
                }
                break;
            case 3:
                printf("Encerrando...");
                return 0;
                break;
            default:
                printf("Opção inválida.");
                printf("\n============\n");
                break;            
        }
    } while (1);
}