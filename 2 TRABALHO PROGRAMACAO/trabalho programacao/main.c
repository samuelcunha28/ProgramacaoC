/* 
 * File:   main.c
 * Author: Samuel Cunha
 *
 * Created on 10 de Janeiro de 2018, 19:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#define TAMANHO 9
#define MAX_JOGADORES 2
#define ESPACO -1

void printMatriz(int matriz[][TAMANHO], char token[]) {
    int i, j;
    int A = 65;

    //Imprime a primeira linha com as letras
    printf(" ");
    printf("|");
    for (i = 0; i < TAMANHO; ++i) {
        printf("%c", A);
        printf("|");
        ++A;
    }
    puts(" ");
    for (i = 0; i < TAMANHO; ++i) {
        // Imprimir coluna com os numeros
        printf("%d", i + 1);
        printf("|");
        for (j = 0; j < TAMANHO; ++j) {
            // Posições vazias
            if (matriz[i][j] == ESPACO) {
                printf("-");
            }// Imprimir token jogador 1
            else if (matriz[i][j] == 0) {
                printf("%c", token[0]);
            }//Imprimir token jogador 2
            else if (matriz[i][j] == 1) {
                printf("%c", token[1]);
            }
            printf("|");
        }
        puts(" ");
    }
}


int verificarVencedor(int matriz[][TAMANHO], int jogador) { // funcao para ver se um dos jogadores e vencedor ou nao
    int i, j;

    //verificar na horizontal
    for (i = 0; i < (TAMANHO - 2); ++i) { // tirar duas linhas porque nao vao ser precisas 
        for (j = 0; j < TAMANHO; ++j) {
            if ((matriz[i][j] != ESPACO) && (matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j]) && matriz[i][j] == jogador) {
                return 1;
            }
        }
    }
    // verificar na vertical
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < (TAMANHO - 2); ++j) { // tirar duas diagonais porque nao vao ser precisas
            if ((matriz[i][j] != ESPACO) && (matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2]) && matriz[i][j] == jogador) {
                return 1;
            }
        }
    }
    //verifica as diagonais da esquerda para a direita
    for (i = 0; i < (TAMANHO - 2); ++i) { // tirar duas linhas porque nao vao ser precisas
        for (j = 0; j < (TAMANHO - 2); ++j) { // tirar duas diagonais porque nao vao ser precisas
            if ((matriz[i][j] != ESPACO) && (matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2]) && matriz[i][j] == jogador) {
                return 1;
            }
        }
    }
    //verifica as diagonais da direita para a esquerda
    for (i = 0; i < (TAMANHO - 2); i++) { // tirar duas linhas porque nao vao ser precisas
        for (j = 0; j < (TAMANHO - 2); j++) { // tirar duas diagonais porque nao vao ser precisas
            if ((matriz[i][j] != ESPACO) && (matriz[i][j] == matriz[i - 1][j + 1] && matriz[i][j] == matriz[i - 2][j + 2]) && matriz[i][j] == jogador) {
                return 1;
            }
        }
    }
    return 0;
} // AJUDA: https://stackoverflow.com/questions/15457796/four-in-a-row-logic

int verificarJogadas(int matriz[][TAMANHO], char token[], char coluna, int linha, int jogador, int numero_jogadas[]) {
    int i, j;
    int A = 65;
    int ganhar = 0;
    

    //Verificacoes
    for (i = 0; i < TAMANHO; ++i) {
        if (coluna == (A + i) && linha > 0 && linha <= TAMANHO || coluna == 90) {
            if (matriz[(linha - 1)][((A + i) - 65)] == ESPACO || coluna == 90) {
                matriz[(linha - 1)][((A + i) - 65)] = jogador;
                // numero de jogadas realizadas
                ++numero_jogadas[jogador];
                // Imprimir a matriz 
                puts("");
                printMatriz(matriz, token);
                // Ao fim de cada jogada verificar se o jogador em causa ou atual ganhou
                ganhar = verificarVencedor(matriz, jogador);
                if (ganhar > 0) {
                    puts("");
                    printf("O jogador %d e o vencedor da partida! Numero de Jogadas: %d\n", jogador + 1, numero_jogadas[jogador]);
                    return jogador + 2;
                }
                // Se se verificar que ninguem ainda ganhou o jogo entao este mesmo continua
                return abs(jogador - 1);
            } else {
                printf("Posição Ocupada.");
                return jogador; // pedir novamente a posicao 
            }

        }
    }
    // Se o jogador atual desistir entao o jogador oposto e o vencedor
    if (coluna == 'Z' || coluna == 'z') {
        if (linha == 0) {
            printf("O jogador %d ganhou. Numero de Jogadas: %d", (abs(jogador - 1) + 1), numero_jogadas[abs(jogador - 1)]);
            return jogador + 2;
        }
    }

    printf("Posição Inexistente.");
    return jogador; // pedir novamente uma posicao valida
}

void Jogadas(int matriz[][TAMANHO], char token[]) {
    char coluna;
    int linha;
    int jogador = 0;
    int numero_jogadas[MAX_JOGADORES] = {0, 0}; // Inicialmente o numero de jogadas para cada jogador e zero

    //Input para Jogadas
    do {
        puts("");
        printf("Jogador %d introduza a sua coluna: ", jogador + 1);
        scanf("%c", &coluna);
        printf("Jogador %d introduza a sua linha: ", jogador + 1);
        scanf("%d", &linha);
        // Chama a funcao verificarJogadas para ver se alguem e o vencedor, se desistiu ou para trocar de jogador e continuar o jogo
        jogador = verificarJogadas(matriz, token, coluna, linha, jogador, numero_jogadas);
        clean_buffer();
    } while (jogador < 2); // CICLO INFINITO
}

void criarMatriz(int matriz[][TAMANHO]) {
    int i, j;

    //Prenche a matriz com -1
    for (i = 0; i < TAMANHO; ++i) {
        for (j = 0; j < TAMANHO; ++j) {
            matriz[i][j] = ESPACO;
        }
    }
}

void escolherTokens(char token[MAX_JOGADORES]) {
    int i;

    puts("ESCOLHA DO TOKEN ");
    for (i = 0; i < MAX_JOGADORES; ++i) {
        printf("Jogador %d qual e o seu token? ", i + 1);
        scanf("%c", &token[i]);
        clean_buffer();

        if (token[0] == token[1]) { // se o token do jogador 1 for igual ao token do jogador 2 nao deixa escolher o mesmo
            puts("Os tokens escolhidos por ambos os jogadores foram iguais. Jogador 2 escolha um token diferente! ");
            --i; // decrementa para nao pedir jogador 3, 4 etc...
        }
    }
    puts(" ");
}

void Jogo1VS1(int matriz[][TAMANHO], char token[MAX_JOGADORES]) {
 
escolherTokens(token);
criarMatriz(matriz);
printMatriz(matriz, token);
Jogadas(matriz, token);

}


int main(int argc, char** argv) {
    char token[MAX_JOGADORES];
    int matriz[TAMANHO][TAMANHO];
    int opcao;

    Jogador Jogadores[MAX_JOGADORES];
    
    do {
        printf("Bem Vindos ao jogo do 4 em linha\n");
        printf("1. Modo de jogo: Jogador Contra Jogador\n");
        printf("2. Modo de jogo: Jogador Contra Computador\n");
        printf("3. Sair do programa\n");
        printf("");
        printf("Escolha uma opção:\n");
        scanf("%d", &opcao);
        puts("");
        switch (opcao) {
            case 1: Jogo1VS1(matriz, token);
                break;
            case 2:
                break;
            case 3: break;
            default: printf("Opção Incorreta!");
        }
    } while (opcao != 3);

    return (EXIT_SUCCESS);
}