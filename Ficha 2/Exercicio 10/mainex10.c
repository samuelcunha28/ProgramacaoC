/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex10.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 16:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero;
    
    puts("Introduza o seu numero: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0 && numero % 5 == 0 ) {
        puts("O numero e divisivel por 3 e por 5! ");
    } else {
        puts("O numero nao e divisivel por 3 e por 5! ");
    }
    return (EXIT_SUCCESS);
}

