/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 19:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float massa, altura, imc;
    
    puts("Introduza a altura da pessoa (em metros):");
    scanf("%f", &altura);
    puts("Introduza a massa corporal");
    scanf("%f", &massa);

    imc = massa / (altura * altura);

    printf("O indice de massa corporal e de: %0.2f\n", imc);

    return (EXIT_SUCCESS);
}

