/*
Você deve implementar um sistema simples para controle de estoque de uma loja. O programa deve:
Cadastrar até 50 produtos. Cada produto possui:

- Código
- Descrição
- Valor unitário
- Quantidade em estoque
- Categoria ('E' para eletrônico, 'A' para alimento, 'V' para vestuário)

O sistema deve permitir:
1. Cadastrar produto
2. Atualizar um produto
    2.1 - Permitir atualizar o valor ou a quantidade.
3. Listar produtos
    3.1 - Permitir listar todos os produtos ou apenas os produtos de uma categoria específica
4. Sair

Obs.: Utilize ponteiros para passagem de parâmetros entre as subrotinas.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define qtdProd 50

typedef struct
{
    int cod;
    char descricao[50];
    float valor;
    int quantidade;
    char categoria;
} Produto;

int contadorProdutos = 0;

char validarCategoria() {
    char cat;
    do {
        printf("Escolha uma categoria: \n");
        printf("Digite A para Alimento\n");
        printf("Digite E para Eletrônico\n");
        printf("Digite V para Vestuário\n");
        scanf("%c", &cat);
        if (cat == 'A' || cat == 'E' || cat == 'V') {
            return cat;
        } else {
            printf("Categoria inválida. Tente novamente.\n");
        }
    } while(1);
}

void cadastrarProdutos(Produto *produto) {
    printf("Informe o código: ");
    scanf("%d", &produto->cod);
    getchar();

    printf("Informe a descrição: ");
    fgets(produto->descricao, sizeof(produto->descricao), stdin);
    produto->descricao[strcspn(produto->descricao, "\n")] = '\0';

    printf("Informe o valor unitário do produto: ");
    scanf("%f", &produto->valor);
    getchar();

    printf("Informe quantos produtos existem em estoque: ");
    scanf("%d", &produto->quantidade);
    getchar();

    produto->categoria = validarCategoria();

    contadorProdutos++;
}

int buscarProduto(Produto *vetor) {
    int cod;
    printf("Informe o código do produto que deseja alterar: ");
    scanf("%d", &cod);
    getchar();

    for (int i = 0; i < contadorProdutos; i++)
    {
        if (cod == vetor[i].cod) {
            return i;
        }
    }
    
    return -1;
    
}

void atualizarProduto(Produto *vetor) {
    // Atualizar um produto - Permitir atualizar o valor ou a quantidade.
    int indice = buscarProduto(vetor);
    if (indice == -1) {
        printf("Código do produto não foi encontrado.\n");
        return;
    }

    int opc;
    do {
        printf("Escolha o que deseja atualizar: \n1. Valor do Produto\n2. Quantidade em estoque");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("Informe o novo valor: ");
            scanf("%f", &vetor[indice].valor);
            getchar();
            printf("\nProduto atualizado com sucesso\n");
            return;
        case 2:
            printf("Informe a nova quantidade: ");
            scanf("%d", &vetor[indice].quantidade);
            getchar();
            printf("\nProduto atualizado com sucesso\n");
            return;    
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

    } while (1);

}

void listarTodosProdutos(Produto *vetor){
    for (int i = 0; i < contadorProdutos; i++)
    {
        printf("- %s\n", vetor[i].descricao);
    }
}

void listarProdutosPorCategoria(Produto *vetor, char cat){
    for (int i = 0; i < contadorProdutos; i++)
    {
        if (cat == vetor[i].categoria) {
            printf("- %s\n", vetor[i].descricao);
        }
    }
}

void menuListarProdutos (Produto *vetor) {
    //Listar produtos - Permitir listar todos os produtos ou apenas os produtos de uma categoria específica
    int opc;
    do {
        printf("Escolha uma opção: \n1. Listar todos\n2. Listar Alimentícios\n3. Listar Eletrônicos\n4. Listar Vestuário\n5. Voltar pro menu");
        scanf("%d", &opc);
        getchar();

        switch (opc)
        {
        case 1:
            listarTodosProdutos(vetor);
            break;
        case 2:
            listarProdutosPorCategoria(vetor, 'A');
            break;
        case 3:
            listarProdutosPorCategoria(vetor, 'E');
            break;
        case 4:
            listarProdutosPorCategoria(vetor, 'V');
            break;
        case 5:
            break;      
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }while(opc < 1 || opc > 5);
    return;
}

int main () {
    setlocale (LC_ALL, "Portuguese_Brazil");
    int opc;
    Produto produtos[qtdProd];

    do{
        printf("---------------------------------\n");
        printf("Escolha uma opção:\n");
        printf("1. Cadastrar produto\n2. Atualizar um produto\n3. Listar produtos\n4. Sair\n");
        scanf("%d", &opc);
        getchar();

        switch(opc) {
            case 1:
                if (contadorProdutos >= qtdProd) {
                    printf("Não há espaços para cadastrar novos produtos.\n");
                } else {
                    cadastrarProdutos(&produtos[contadorProdutos]);
                    printf("\nProduto cadastrado com sucesso\n");
                }
                break;
            case 2:
                atualizarProduto(produtos);                
                break;
            case 3:
                menuListarProdutos(produtos);
                break;
            case 4:
                printf("Encerrando...\n");
                return 0;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while(1);

}