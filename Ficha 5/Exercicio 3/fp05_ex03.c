/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp05_ex03.c
 * Author: samue
 * Ficha 5
 * Created on 9 de Novembro de 2017, 13:57
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 10

/* Ficha 5 Exercicio 3 */

int main(int argc, char** argv) {
    int i, contador = 0;
    char caracter, array[TAMANHO_ARRAY];

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Introduza um caracter: ");
        scanf("%c", &array[i]);
        limparBufferEntrada();
    }
    
    puts("Introduza outro caracter para a verificacao: ");
    scanf("%c", &caracter);
    limparBufferEntrada();

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (caracter == array[i]) {
            ++contador;
        } 
    } 
    printf("Existem %d caracteres iguais ao introduzido!\n ", contador);

    for (i = 0; i < TAMANHO_ARRAY; ++i) {
        if (caracter == array[i]) {
            printf("As posicoes no array: %d\n ", i);
        }
    }
    
    return (EXIT_SUCCESS);
}

