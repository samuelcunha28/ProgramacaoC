/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex11.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 15:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, i, resto, contadorresto;

    puts("Introduza o seu numero para verificacao: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; ++i) {
        resto = numero % i;
        if (resto == 0) {
            contadorresto = contadorresto + 1; // exemplo: dividir o numero 5 5 vezes e verificar se e divisivel por 1 e por ele
        }
    }
    if (contadorresto == 2) { // logo o se for primo o contador do resto de for igual a 2 e primo se nao nao e primo
        printf("O numero %d e primo!\n ", numero);
    } else
        printf("O numero %d nao e primo!\n ", numero);

    return (EXIT_SUCCESS);
}

