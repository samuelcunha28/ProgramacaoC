/* 
 * File:   fp05_ex01.c
 * Author: samue
 * Ficha 5
 * Created on 9 de Novembro de 2017, 12:17
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 20

/* Ficha 5 Exercicio 1 */ 
int main(int argc, char** argv) {
    int i = 0, arr[TAMANHO_ARRAY];
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        arr[i] = i;
    }
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("%d ", arr[i]);
    }
    

    return (EXIT_SUCCESS);
}

