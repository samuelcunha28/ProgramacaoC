/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex01.c
 * Author: samue
 *
 * Created on 4 de Novembro de 2017, 15:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

// Funcao para a leitura do numero
int lerInteiro() {
    int valor;
    scanf("%d", &valor);
    return valor;
}

// Procedimento para a impressao
void Impressao(int valor) {
    int i = 0;
    for (i; i < valor; ++i) {
        printf("*");
    }
}

int main(int argc, char** argv) {
    int num;

    puts("Introduza o numero de asteriscos que pretende imprimir: ");
    num = lerInteiro();
    Impressao(num);


    return (EXIT_SUCCESS);
}

