/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 12 de Outubro de 2017, 21:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero1, numero2, subtracao, resultado;

    puts("Introduza o seu primeiro numero:");
    scanf("%d", &numero1);
    puts("Introduza o seu segundo numero:");
    scanf("%d", &numero2);

    subtracao = numero1 - numero2;
    printf("A subtracao da: %d\n", subtracao);

    resultado = subtracao * numero1;
    printf("O resultado da subtracao com o primeiro numero e de : %d\n", resultado);

    return (EXIT_SUCCESS);
}

