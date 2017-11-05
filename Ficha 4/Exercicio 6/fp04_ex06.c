/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex06.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 16:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char letra;
    int coluna, linha;

    printf("Insira a letra que pretende imprimir / desenhar: ");
    scanf("%c", &letra);

    limparBufferEntrada();

    printf("Insira o numero de linhas que pretende imprimir: ");
    scanf("%d", &linha);

    printf("Insira o numero de colunas que pretende imprimir: ");
    scanf("%d", &coluna);

    desenhofigura(letra, linha, coluna);

    return (EXIT_SUCCESS);
}

