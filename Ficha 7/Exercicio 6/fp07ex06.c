/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 25 de Novembro de 2017, 16:23
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int dimensao() {
    int num;

    while (1) {
        printf("Insira o tamanho: ");
        scanf("%d", &num);

        if (num > MAX) {
            printf("Valor maior que o permitido. Tente novamente ");
        } else {
            break;
        }
    }
    return num;
}

int main(int argc, char** argv) {
    int i = 0, j = 0, k = 0, soma = 0;
    int LinA, LinB, ColA, ColB;
    int matrizA[MAX][MAX], matrizB[MAX][MAX], matrizC[MAX][MAX];

    puts("Matriz A ");
    puts("Quantas linhas tem a matriz A?");
    LinA = dimensao();
    puts("Quantas colunas tem a matriz A?");
    ColA = dimensao();

    puts("Matriz B ");
    puts("Quantas linhas tem a matriz B?");
    LinB = dimensao();
    puts("Quantas colunas tem a matriz B?");
    ColB = dimensao();

    while (1) { // para se efetuar o calculo o numero de colunas da matriz A tem de ser igual ao numero de linhas da matriz B
        if (ColA == LinB) {
            break;
        } else {
             puts("Impossivel multiplicar a matriz C porque o numero de colunas da matriz A nao e igual ao numero de linhas da matriz B! ");
        } 
    }

    puts("Preencha a Matriz A: ");
    for (i = 0; i < LinA; ++i) {
        for (j = 0; j < ColA; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        puts(" ");
    }

    puts("Preencha a Matriz B");
    for (i = 0; i < LinB; ++i) {
        for (j = 0; j < ColB; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
        puts(" ");
    }


    for (i = 0; i < LinA; ++i) { // calculo da matriz C
        for (j = 0; j < ColB; ++j) {
            matrizC[i][j] = 0;
            for (k = 0; k < LinB; ++k) {
                soma += matrizA[i][k] * matrizB [k][j];
            }
            matrizC[i][j] = soma;
        }
    }


    puts("Matriz C"); // impressao da matriz resultante
    for (i = 0; i < LinA; ++i) {
        for (j = 0; j < ColB; ++j) {
            printf(" %d", matrizC[i][j]);
        }
        puts(" ");
    }
    return (EXIT_SUCCESS);
}
