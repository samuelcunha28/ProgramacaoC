/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex4.c
 * Author: samue
 *
 * Created on 20 de Outubro de 2017, 15:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, numero3;

    puts("Introduza o seu primeiro numero: ");
    scanf("%d", &numero1);
    puts("Introduza o seu segundo numero: ");
    scanf("%d", &numero2);
    puts("Introduza o seu terceiro numero: ");
    scanf("%d", &numero3);

    if (numero2 > numero1 && numero3 > numero1) {
        printf("O menor dos numeros e: %d\n", numero1);
    } else if (numero1 > numero2 && numero3 > numero2) {
        printf("O menor dos numeros e: %d\n", numero2);
    } else {
        printf("O menor dos numeros e: %d\n", numero3);
    }

    return (EXIT_SUCCESS);
}