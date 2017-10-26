/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex5.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 15:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, contador = 0;

    puts("Introduza o seu numero: ");
    scanf("%d", &numero);

    for (contador = numero + 1; contador <= numero + 5; ++contador) {
        printf("Sucessores: %d\n", contador);
    }
    for (contador = numero - 1; contador >= numero - 5; --contador) {
        printf("Antecessores: %d\n", contador);
    }
    return (EXIT_SUCCESS);
}

