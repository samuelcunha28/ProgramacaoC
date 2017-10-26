/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex3.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 14:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numeromin, numeromax, contador;

    puts("Introduza o seu primeiro numero (numero minimo): ");
    scanf("%d", &numeromin);
    puts("Introduza o seu segundo numero (numero maximo): ");
    scanf("%d", &numeromax);

    for (contador = numeromin + 1; contador <= numeromax - 1; ++contador) {
        printf("%d\n", contador);
    }

    return (EXIT_SUCCESS);
}

