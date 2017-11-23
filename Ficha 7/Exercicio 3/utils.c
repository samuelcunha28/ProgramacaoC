#include <stdio.h>
#include "utils.h"

void preencherMatriz(int matriz[][COLUNAS]) {
    int i = 0, j = 0;
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf("Linha[%d]: introduza o seu valor para codigo, nota1 e nota2 respetivamente: ", i + 1);
            scanf("%d", &matriz[i][j]);
        }
        puts(" ");
    } 
}

void escreverMatriz(int matriz[][COLUNAS]) {
    int i = 0, j = 0;
    printf("Codigo  Nota1  Nota2  Media\n");
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %4d ", matriz[i][j]);
        }  printf("     %.2f ", (float)(matriz[i][1] + matriz[i][2]) / 2);
        puts(" ");
    } 
}