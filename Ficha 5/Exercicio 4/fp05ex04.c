/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp05ex04.c
 * Author: samue
 *
 * Created on 10 de Novembro de 2017, 14:54
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 10

/* Ficha 5 Exercicio 4 */

int main(int argc, char** argv) {
    double array[TAMANHO_ARRAY], num, somatorio = 0;
    int i = 0, contador = 0;

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Introduza um valor: ");
        scanf("%lf", &num);
        if (num == -1) {
            break;
        } else {
            array[i] = num;
            contador += 1;
        }
    }
    puts("Introduziu o numero -1 ou chegou ao limite do vetor! ");

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        somatorio += array[i];
    }
    printf("A media dos numeros introduzidos e de: %.1lf\n ", somatorio / contador);

    return (EXIT_SUCCESS);
}

