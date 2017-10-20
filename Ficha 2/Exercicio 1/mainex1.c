/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex1.c
 * Author: samue
 *
 * Created on 19 de Outubro de 2017, 20:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;

    puts("Indique o seu primeiro numero: ");
    scanf("%d", &numero1);
    puts("Indique o seu segundo numero: ");
    scanf("%d", &numero2);

    if (numero1 > numero2) {
        printf("O maior numero e: %d\n", numero1);
    } else {
        printf("O maior numero e: %d\n", numero2);
    }

    return (EXIT_SUCCESS);
}

