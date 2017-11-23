/* 
 * File:   fp07ex01.c
 * Author: samue
 * FICHA 7
 * Created on 23 de Novembro de 2017, 12:08
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

/* Exercicio 1 Ficha 7*/
int main(int argc, char** argv) {
    int i = 0, j = 0, matriz[TAMANHO][TAMANHO];
    int maior = 0, menor = 0;

    // preencherMatriz(int matriz[TAMANHO][TAMANHO]) {
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts(" ");

    // escreverMatriz(int matriz[]) 
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf(" %d", matriz[i][j]);
        }
        puts(" ");
    }

    maior = matriz[0][0];
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            if (maior < matriz[i][j]) {
                maior = matriz[i][j];
            }
        }
    }
    
    menor = matriz[0][0];
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            if (menor > matriz[i][j]) {
                menor = matriz[i][j];
            }
        }
    }
    
    printf("\n\nO maior valor da matriz e %d\n", maior); 
    printf("O menor valor da matriz e %d\n", menor); 
    return (EXIT_SUCCESS);
}

