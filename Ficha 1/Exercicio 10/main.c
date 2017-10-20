/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 13 de Outubro de 2017, 21:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float numero1, numero2, numero3, numero4, numero5, media;
    
    puts("Introduza o seu primeiro numero:");
    scanf("%f", &numero1);
    puts("Introduza o seu segundo numero:");
    scanf("%f", &numero2);
    puts("Introduza o seu terceiro numero:");
    scanf("%f", &numero3);
    puts("Introduza o seu quarto numero:");
    scanf("%f", &numero4);
    puts("Introduza o seu quinto numero:");
    scanf("%f", &numero5);

    media = (numero1 + numero2 + numero3 + numero4 + numero5) / 5;

    printf("A media e de: %0.2f\n", media);

    return (EXIT_SUCCESS);
}

