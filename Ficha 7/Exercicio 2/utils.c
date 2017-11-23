#include <stdio.h>
#include "utils.h"

void preencherMatriz(int matriz[][COLUNAS]) {
    int i = 0, j = 0;
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        puts(" ");
    } 
}

void escreverMatriz(int matriz[][COLUNAS]) {
    int i = 0, j = 0;
    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            printf(" %d", matriz[i][j]);
        }  
        puts(" ");
    } 
}