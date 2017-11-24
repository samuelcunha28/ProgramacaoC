/* 
 * File:   fp07ex06.c
 * Author: samue
 * FICHA 7
 * Created on 23 de Novembro de 2017, 22:19
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int num, i = 0, j = 0;

int dimensao() {

    while (1) {
        printf("Insira o tamanho da matriz\n ");
        scanf("%d", &num);

        if (num > MAX) {
            printf("Valor Invalido. Tente novamente\n ");
        } else {
            break;
        }
    }
    return num;
}

void preencherMatrizA(int matrizA[][num]) {

    puts("Preencha a Matriz A: ");
    for (i = 0; i < num; ++i) {
        for (j = 0; j < num; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
        puts(" ");
    }
}

void escreverMatrizA(int matrizA[][num]) {

    puts("Matriz A");
    for (i = 0; i < num; ++i) {
        for (j = 0; j < num; ++j) {
            printf(" %d", matrizA[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}

void preencherMatrizB(int matrizB[][num]) {
    
    puts("Preencha a Matriz B: ");
    for (i = 0; i < num; ++i) {
        for (j = 0; j < num; ++j) {
            printf("Introduza o seu valor para [%d] [%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
        puts(" ");
    }
}

void escreverMatrizB(int matrizB[][num]) {

    puts("Matriz B");
    for (i = 0; i < num; ++i) {
        for (j = 0; j < num; ++j) {
            printf(" %d", matrizB[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}

void escreverMatrizC(int matrizA[][num], int matrizB[][num]) {
    
    puts("Matriz C");
    for (i = 0; i < num; ++i) {
        for (j = 0; j < num; ++j) {
            printf(" %d", matrizA[i][j] * matrizB[i][j]);
        }
        puts(" ");
    }
    puts(" ");
}
   

/* Exercicio 6 Ficha 7 */
int main(int argc, char** argv) {
    int matriz[num][num];

    dimensao(num);
    preencherMatrizA(matriz); // chamar procedimento para preencher a matriz A
    escreverMatrizA(matriz); // chamar procedimento para escrever a matriz A
    preencherMatrizB(matriz); // chamar procedimento para preencher a matriz B
    escreverMatrizB(matriz); // chamar procedimento para escrever a matriz B
    escreverMatrizC(matriz, matriz); // chamar procedimento para escrever a matriz C resultante da A e B

    return (EXIT_SUCCESS);
}