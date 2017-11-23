/* 
 * File:   fp07ex03.c
 * Author: samue
 * FICHA 7
 * Created on 23 de Novembro de 2017, 14:12
 */

#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 4

/* Exercicio 3 Ficha 7 */
int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i = 0, j = 0;
    double media;
    
    preencherMatriz(matriz); // chamar procedimento para preencher a matriz
    escreverMatriz(matriz); // chamar procedimento para escrever a matriz
    
    return (EXIT_SUCCESS);
}

