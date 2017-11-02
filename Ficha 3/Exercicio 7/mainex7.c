/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex7.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 16:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero;

    puts("Introduza um numero (este tem que ser positivo): ");
    scanf("%d", &numero);

    if (numero <= 0) {
        puts("Introduziu um numero invalido!! ");
    } else if (numero % 2 == 0) {
        numero = numero - 1;
        while (numero >= 0) {
            printf("%d\n", numero);
            numero -= 2;
        }
    } else {
        while (numero >= 0) {
            printf("%d\n", numero);
            numero -= 2;
        }
    }

    return (EXIT_SUCCESS);
}

