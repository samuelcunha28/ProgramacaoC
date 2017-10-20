/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex2.c
 * Author: samue
 *
 * Created on 19 de Outubro de 2017, 20:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2;
    
    puts("Introduza o seu primeiro numero: ");
    scanf("%d", &numero1);
    puts("Introduza o seu segundo numero: ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2) {
        printf("Os numeros em ordem decrescente: %d e %d\n", numero1, numero2);
    } else {
        printf("Os numeros em ordem descrescente: %d e %d\n", numero2, numero1);
    }
    return (EXIT_SUCCESS);
}

