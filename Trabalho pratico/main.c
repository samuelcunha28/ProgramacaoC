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
#define ESPACOLIVRE '-'

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
    return token[JOGADORES];
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

int verificarJogadas(char matriz[][TAMANHO], char token, int linha, char coluna) {
    int i = 1;

    for (i = 0; i < TAMANHO; ++i) {
        if (coluna == (64 + i) && linha > 0 && linha < TAMANHO && matriz[linha][i] == ESPACOLIVRE) {
            matriz[linha][i] = token;
            ++i;
        } else if (linha == 0 && coluna == 'Z') { // se o jogador atual desistir faz logo break
            break;
        } else if (coluna == (64 + i) && linha > 0 && linha < TAMANHO && matriz[linha][i] != ESPACOLIVRE || linha <= 0 || linha > TAMANHO || coluna > 'I') {
            puts("Jogada impossivel de ser realizada, a posicao esta ocupada por outro token OU a posicao nao existe! ");
            puts("Jogador introduza novamente a linha e a coluna respetiva: ");
            scanf("%d%c", &linha, &coluna);
            clean_buffer();
            verificarJogadas(matriz, token, linha, coluna);
            return 1;
        }
    }
    return token;
}

int Jogadas(char matriz[][TAMANHO], char token[JOGADORES]) {
    int numero_jogadas = 0;
    int linha1, linha2;
    char coluna1, coluna2;

    do {
        printf("Jogada numero: %d", numero_jogadas + 1);
        imprimirMatriz(matriz);

        puts("Jogador 1 introduza a linha e a coluna respetivamente: ");
        scanf("%d%c", &linha1, &coluna1);
        clean_buffer();
        // Chama a funcao para verificar as jogadas do jogador 1
        verificarJogadas(matriz, token[0], linha1, coluna1);

        puts("Jogador 2 introduza a linha e a coluna respetivamente: ");
        scanf("%d%c", &linha2, &coluna2);
        clean_buffer();
        // Chama a funcao para verificar as jogadas do jogador 2
        verificarJogadas(matriz, token[1], linha2, coluna2);

        if (linha1 == 0 && coluna1 == 'Z') {
            printf("O jogador 1 pediu para desistir! Numero de jogadas %d\n", numero_jogadas);
            break;
        } else if (linha2 == 0 && coluna2 == 'Z') {
            printf("O jogador 2 pediu para desistir! Numero de jogadas %d\n", numero_jogadas);
            break;
        } else if (numero_jogadas >= 45) {
            printf("O jogo termina empatado!\n");
            break;
        }
        ++numero_jogadas;
    } while (numero_jogadas < 45); // maximo jogadas
}

int main(int argc, char** argv) {
    char matriz[TAMANHO][TAMANHO];
    char token[JOGADORES];

    escolhaToken(token);
    preencherMatriz(matriz);
    Jogadas(matriz, token);

    return (EXIT_SUCCESS);
}