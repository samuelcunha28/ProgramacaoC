/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 12 de Outubro de 2017, 19:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, soma;
    
    puts("Introduza o seu primeiro numero");
    scanf("%d", &numero1);
    puts("Introduza o seu segundo numero");
    scanf("%d", &numero2);
    
    soma = (numero1 + numero2);
    
    printf("A soma e de: %d\n", soma);
    

    return (EXIT_SUCCESS);
}

