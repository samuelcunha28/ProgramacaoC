/* 
 * File:   main.c
 * Author: Samuel Cunha
 * TRABALHO PRATICO 2
 * Created on 10 de Janeiro de 2018, 19:47
 */

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char** argv) {
    char token[2];
    int matriz[TAMANHOMATRIZ][TAMANHOMATRIZ];
    int contador = 0;
    int opcao, tamanho;
    int linha, computador;
    char coluna;

    Jogador Jogadores[2];

    FILE *ficheiro = fopen(FICHEIRO, "rb");
    if (ficheiro != NULL) {
        lerFicheiro(Jogadores);
    }

    do {
        puts("Bem Vindos ao jogo do 4 em linha");
        puts("1. Modo de jogo Jogador VS Jogador");
        puts("2. Modo de jogo Jogador VS PC");
        puts("3. Abrir estatisticas");
        puts("4. Sair do programa");
        puts("Escolha uma opção valida:");
        scanf("%d", &opcao);
        clean_buffer();
        puts("");
        switch (opcao) {
            case 1: jogo(matriz, Jogadores, linha, coluna, computador);
                break;
            case 2: computador = 1;
                jogo(matriz, Jogadores, linha, coluna, computador);
                break;
            case 3: estatisticas(Jogadores, contador);
                break;
            case 4: printf("Obrigado por ter jogado. Ate a proxima!\n");
                break;
            default: printf("Opção Incorreta!");
        }
    } while (opcao != 4);

    guardarFicheiro(Jogadores, contador);
    fclose(ficheiro);

    return (EXIT_SUCCESS);
}