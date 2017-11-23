/* 
 * File:   main.c
 * Author: samue
 * FICHA 7
 * Created on 23 de Novembro de 2017, 13:20
 */

#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 5

/* Exercicio 2 Ficha 7 */
int main(int argc, char** argv) {
    int matriz[LINHAS][COLUNAS];
    int i = 0, j = 0, num = 0, contador = 0;

    preencherMatriz(matriz); // chamar procedimento para preencher a matriz
    escreverMatriz(matriz); // chamar procedimento para escrever a matriz

    puts("Introduza um numero para a verificacao: ");
    scanf("%d", &num);

    for (i = 0; i < LINHAS; ++i) {
        for (j = 0; j < COLUNAS; ++j) {
            if (num == matriz[i][j]) {
                ++contador;
            }
        }
    }
    printf("Existem %d numeros iguais ao introduzido na matriz!\n ", contador);


    return (EXIT_SUCCESS);
}

