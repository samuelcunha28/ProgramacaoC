/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex4.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 14:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, somatorio = 0;

    for (numero = 1; numero <= 100; ++numero) {
        printf("%d\n", numero);
        somatorio += numero;
    }
    printf("O somatorio e de: %d\n ", somatorio);

    return (EXIT_SUCCESS);
}

