#include <stdio.h>

#define TAMANHO_ARRAY 10

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void imprimirPar(int array[]) {
    int i;

    puts("Os numeros pares sao: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (array[i] % 2 == 0) {
            printf(" %d ", array[i]);
        }
    } 
}

void imprimirImpar(int array[]) {
    int i;
    
    puts("Os numeros impares sao: ");
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (array[i] % 2 != 0) {
            printf("%d ", array[i]);
        }
    }
}
