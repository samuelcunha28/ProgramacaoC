/* 
 * File:   fp05_ex02.c
 * Author: samue
 *
 * Created on 9 de Novembro de 2017, 13:51
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 21
#define INICIO_ARRAY 5

/* Ficha 5 Exercicio 2 */ 
int main(int argc, char** argv) {
    int i = 0, array[TAMANHO_ARRAY];
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        array[i] = i + INICIO_ARRAY;
    }
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("Posicao %d: %d\n", i, array[i]);
    }
    
    return (EXIT_SUCCESS);
}
