/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex7.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 14:48
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
    
    if (numero1 > numero2 && numero2 > numero3) {
        printf("Por ordem crescente os numeros ficam: %d %d %d\n ", numero3, numero2, numero1);
        }
    else if (numero3 > numero2 && numero2 > numero1) {
        printf("Por ordem crescente os numeros ficam: %d %d %d\n ", numero1, numero2, numero3);
    } else {
        printf("Por ordem crescente os numeros ficam: %d %d %d\n ", numero1, numero3, numero2);
    }

    return (EXIT_SUCCESS);
}

