#include <stdio.h>
#include "utils.h"

void preencherMatrizA(int matrizA[][TAMANHO]) {
    int i = 0, j = 0;
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        puts(" ");
    }
}

void escreverMatrizA(int matrizA[][TAMANHO]) {
    int i = 0, j = 0;
    puts("Matriz A");
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf(" %d", matrizA[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}

void lerescreverMatrizB(int matriz[][TAMANHO]) {
    int i, j;
    int matrizB[TAMANHO][TAMANHO];

    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            matrizB[j][i] = matriz[i][j];
        }
    }

    puts("Matriz B");
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf(" %d", matrizB[i][j]);
        }
        puts(" ");
    }
}