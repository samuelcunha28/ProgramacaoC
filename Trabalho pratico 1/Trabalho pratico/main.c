/* 
 * File:   main.c
 * Author: samue
 * TRABALHO PRATICO 1
 * Created on 27 de Novembro de 2017, 18:16
 */

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define JOGADORES 2
#define ESPACO '-'

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int escolhaToken(char token[JOGADORES]) {
    int i = 0;

    puts("ESCOLHA DO TOKEN ");
    for (i = 0; i < JOGADORES; ++i) {
        printf("Jogador %d qual e o seu token? ", i + 1);
        scanf("%c", &token[i]);
        clean_buffer();

        if (token[0] == token[1]) { // se o token do jogador 1 for igual ao token do jogador 2 faz
            puts("Os tokens escolhidos por ambos os jogadores foram iguais. Jogador 2 escolha um token diferente ");
            --i; // decrementa para nao pedir jogador 3, 4 etc...
        }
    }
    puts(" ");
    return token[0], token[1];
}

void preencherMatriz(char matriz[][TAMANHO]) {
    int i = 0, j = 0;
    char letra = 'A';

    // Preencher as letras na primeira linha 
    for (i = 1; i < TAMANHO; ++i) {
        matriz[0][i] = letra;
        ++letra;
    }

    // Preencher os numeros na primeira coluna
    for (i = 1; i < TAMANHO; ++i) {
        matriz[i][0] = '0' + i;
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

    puts(" ");
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            printf("%c", matriz[i][j]);
            printf("|");
        }
        puts(" ");
    }
}

int Jogadas(char matriz[][TAMANHO], char token[JOGADORES]) {
    int numero_jogadas = 0;
    int i = 0, j = 0;
    int linha1 = 0, linha2 = 0;
    char coluna1, coluna2;

    while (1) {
        while (1) {
            printf("Jogada numero %d\n ", numero_jogadas + 1);
            for (i = 1; i < TAMANHO; ++i) { // contador do numero de jogadas possiveis total
                puts("Jogador 1: Selecione a linha e a coluna respetivamente ");
                scanf("%d %c", &linha1, &coluna1);
                clean_buffer();
                if (matriz[linha1][coluna1] == ESPACO) {
                    matriz[linha1][coluna1] = token[0];
                } else if (matriz[linha1][coluna1] != '-') {
                    printf("\n Posição Ocupada ou inexistente \n");
                }
                puts("Jogador 2: Selecione a linha e a coluna respetivamente ");
                scanf("%d%c", &linha2, &coluna2);
                clean_buffer();
                if (matriz[linha2][coluna2] == ESPACO) {
                    matriz[linha2][coluna2] = token[1];
                } else if (matriz[linha2][coluna2] != '-') {
                    printf("\n Posição Ocupada ou inexistente \n");
                }
                break;
            }
            imprimirMatriz(matriz);
            ++numero_jogadas;
        }
    }
}

int main(int argc, char** argv) {
    char matriz[TAMANHO][TAMANHO];
    char token[JOGADORES];
    char coluna;
    int linha;

    escolhaToken(token);
    preencherMatriz(matriz); // chamar procedimento para preencher a matriz
    imprimirMatriz(matriz); // chamar procedimento para escrever a matriz
    Jogadas(matriz, token);

    return (EXIT_SUCCESS);
}

