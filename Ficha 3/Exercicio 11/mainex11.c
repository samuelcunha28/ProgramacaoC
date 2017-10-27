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
    int numero, i, resto, contadorresto, a;

    puts("Introduza o seu numero para verificacao: ");
    scanf("%d", &numero);

    for (a = 1; a <= numero; ++a) {
        resto = numero % a;
        if (resto == 0) {
            contadorresto = contadorresto + 1;
        }
    }
    if (contadorresto == 2) {
        printf("O numero %d e primo!\n ", numero);
    } else
        printf("O numero %d nao e primo!\n ", numero);
    return (EXIT_SUCCESS);
}

