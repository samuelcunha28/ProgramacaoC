/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp05_ex02.c
 * Author: samue
 *
 * Created on 9 de Novembro de 2017, 13:51
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 21
#define INICIO_ARRAY 5

/* Ficha 5 Exercicio 2 */ 
int main(int argc, char** argv) {
    int i = 0, arr[TAMANHO_ARRAY];
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        arr[i] = i + INICIO_ARRAY;
    }
    
    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("%d ", arr[i]);
    }
    
    return (EXIT_SUCCESS);
}
