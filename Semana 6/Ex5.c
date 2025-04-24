#include <stdio.h>

void imprime(int *P) {
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", P[i]);
    }    
}

int main () {

    int idades[4];
    
    for (int i = 0; i < 4; i++)
    {
        idades[i] = 30+i;
    }

    imprime(idades);

    return 0;
}