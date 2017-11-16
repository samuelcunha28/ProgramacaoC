/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp05ex07.c
 * Author: samue
 *
 * Created on 15 de Novembro de 2017, 20:51
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define TAMANHO_ARRAY 10

int main(int argc, char** argv) {
    int arrayA[TAMANHO_ARRAY], arrayB[TAMANHO_ARRAY], arrayC[TAMANHO_ARRAY];
    int arrayD[TAMANHO_ARRAY], arrayE[TAMANHO_ARRAY];
    int i;

    puts("Vetor A: ");
    vetorA(arrayA);
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("Posicao %d: %d\n", i, arrayA[i]);
    }

    puts("Vetor B: ");
    vetorB(arrayB);
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("Posicao %d: %d\n", i, arrayB[i]);
    }

    puts("\nVetor C: ");
    vetorC(arrayA, arrayB, arrayC);

    puts("\nVetor D: ");
    vetorD(arrayA, arrayB, arrayD);

    puts("\nVetor E: ");
    vetorE(arrayA, arrayB, arrayE);

    return (EXIT_SUCCESS);
}
