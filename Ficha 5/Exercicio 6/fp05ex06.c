/* 
 * File:   fp05ex06.c
 * Author: samue
 *
 * Created on 11 de Novembro de 2017, 19:11
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define TAMANHO_ARRAY 10


/* Ficha 5  Exercicio 6 */

int main(int argc, char** argv) {
    int i = 0, array[TAMANHO_ARRAY];
    char opcao;
    
     for (i = 0; i < TAMANHO_ARRAY; ++i) {
        puts("Insira um numero: ");
        scanf("%d", &array[i]);
     }
    
    while (1) {
    limparBufferEntrada();
    puts("Pressione P para ver os numeros pares ou I para ver os impares ");
    scanf("%c", &opcao);

    
        if (opcao == 'P' || opcao == 'p') {
            imprimirPar(array);
            break;
        } else if (opcao == 'I' || opcao == 'i') {
            imprimirImpar(array);
            break;
        } else {
            puts("Opção Incorreta!! Tente novamente");
        }
    }
    
    return (EXIT_SUCCESS);
}

