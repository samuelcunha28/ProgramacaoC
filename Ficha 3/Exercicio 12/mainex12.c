 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex12.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 16:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int somatorio, i = 0, numero;

    while (numero != -1) {
        puts("Introduza o seu numero ( -1 para fazer a media destes ): ");
        scanf("%d", &numero);
        if (numero == -1) {
            printf("A media dos numeros introduzidos e de: %.1f\n ", (float) somatorio / i);
        } else {
            somatorio += numero;
            ++i;
        }
    }
    return (EXIT_SUCCESS);
}

