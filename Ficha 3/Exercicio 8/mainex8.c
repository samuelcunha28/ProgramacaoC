/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex8.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 14:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, contador;

    puts("Introduza o seu numero: ");
    scanf("%d", &numero);

    while (contador <= numero - 2) {
        contador += 2;
        printf("%d\n", contador);
    }
    return (EXIT_SUCCESS);
}
