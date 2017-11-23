/* 
 * File:   fp07ex04.c
 * Author: samue
 *
 * Created on 23 de Novembro de 2017, 20:04
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 3

/* Exercicio 4 Ficha 7 */
int main(int argc, char** argv) {
    int matriz[TAMANHO][TAMANHO];
    int i = 0, j = 0;

    preencherMatrizA(matriz); // chamar procedimento para preencher a matriz
    escreverMatrizA(matriz); // chamar procedimento para escrever a matriz A
    lerescreverMatrizB(matriz); // chamar procedimento para escrever a matriz B
    
    return (EXIT_SUCCESS);
}

