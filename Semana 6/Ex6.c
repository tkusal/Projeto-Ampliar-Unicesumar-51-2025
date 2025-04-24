#include <stdio.h>

typedef struct {
    int idade;
    float nota;
} Aluno;

void imprime(Aluno *P) {
    printf("%d\n", P->idade);
    //printf("%d\n", (*P).idade);
}

int main () {
    Aluno aluno;
    aluno.idade = 22;

    imprime(&aluno);
    //printf("%d", aluno.idade);

    return 0;
}