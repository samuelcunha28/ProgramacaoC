/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 27 de Novembro de 2017, 18:16
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define JOGADORES 2

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void escolhaToken(char token[ ]) {
    int i = 0;

    puts("ESCOLHA DO TOKEN ");
    for (i = 0; i < JOGADORES; ++i) {
        printf("Jogador %d qual e o seu token? ", i + 1);
        scanf("%c", &token[i]);
        clean_buffer();

        if (token[0] == token[1]) { // se o token do jogador 1 for igual ao token do jogador 2 faz
            puts("Os tokens escolhidos por ambos os jogadores foram iguais. Escolha outro token diferente ");
            --i; // decrementa para nao comecar a pedir jogador 3, 4 etc...
        }
    }
    puts(" ");
}

void preencherMatriz(char matriz[][TAMANHO]) {
    int i = 0, j = 0;

    // Preencher as letras na primeira linha 
    for (i = 0; i < TAMANHO; ++i) {
        matriz[0][i] = 'A' + i;
    }

    // Preencher os numeros na primeira coluna
    for (i = 0; i < TAMANHO; ++i) {
        matriz[i][0] = '1' + i;
    }

    // Preencher o resto da matriz nos espacos nao ocupados
    for (i = 1; i < TAMANHO; ++i) {
        for (j = 1; j < TAMANHO; ++j) {
            matriz[i][j] = '-';
        }
    }

    // Linha 1 e coluna 1 com espaco em branco
    matriz[0][0] = ' ';
}

void imprimirMatriz(char matriz[][TAMANHO]) {
    int i = 0, j = 0;

    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf("%c", matriz[i][j]);
            printf("|");
        }
        puts(" ");
    }
}

int main(int argc, char** argv) {
    char matriz[TAMANHO][TAMANHO];
    char token[JOGADORES];

    escolhaToken(token);
    preencherMatriz(matriz); // chamar procedimento para preencher a matriz
    imprimirMatriz(matriz); // chamar procedimento para escrever a matriz
    return (EXIT_SUCCESS);
}

