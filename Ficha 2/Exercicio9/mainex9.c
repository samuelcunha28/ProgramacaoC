/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex9.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 16:11
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
    
    if (numero % 2 == 0) { // a sua divisao por 2 tem que ter resto igual a 0 para ser par 
        puts("O numero que foi introduzido e par");
    } else {
        puts("O numero que foi introduzido e impar");
    }
    return (EXIT_SUCCESS);
}

