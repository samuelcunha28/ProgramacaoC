/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 18:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numero, antecessor, sucessor;
    puts("Insira o seu numero: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O seu antecessor e: %d\n", antecessor);
    printf("O seu sucessor e: %d\n", sucessor);
    return (EXIT_SUCCESS);
}

