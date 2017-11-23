/* 
 * File:   fp07ex05.c
 * Author: samue
 * FICHA 7
 * Created on 23 de Novembro de 2017, 20:39
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

/* Exercicio 5 Ficha 7 */
int main(int argc, char** argv) {
    int i = 0, j = 0, matriz[TAMANHO][TAMANHO];

    preencherMatriz(matriz); // chamar procedimento para preencher a matriz
    escreverMatriz(matriz); // chamar procedimento para escrever a matriz A
    escreverMatrizInvertida(matriz); // chamar procedimento para escrever a matriz B

    return (EXIT_SUCCESS);
}

