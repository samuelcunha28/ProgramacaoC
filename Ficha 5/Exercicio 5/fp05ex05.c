/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp05ex05.c
 * Author: samue
 *
 * Created on 10 de Novembro de 2017, 15:14
 */

#include <stdio.h>
#include <stdlib.h>
#include "procedimentos.h"

#define TAMANHO_ARRAY 10

int main(int argc, char** argv) {
    double array[TAMANHO_ARRAY], num;
    int i;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Introduza um valor: ");
        scanf("%lf", &array[i]);

    }
    
    imprimirVetor(array);
    dobroVetor(array);
    somaVetor(array);
    mediaVetor(array);
    maiorVetor(array);
    menorVetor(array);

    return (EXIT_SUCCESS);
}

