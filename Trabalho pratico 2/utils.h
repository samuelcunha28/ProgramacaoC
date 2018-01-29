/* 
 * File: utils.h
 * Author: Samuel Cunha
 * TRABALHO PRATICO 2
 * Created on 10 de Janeiro de 2018, 19:49
 */

#ifndef UTILS_H
#define	UTILS_H

#define MAX_CARACTERES 50
#define TAMANHOMATRIZ 9
#define ESPACOLIVRE -1
#define MENSAGEMVITORIA "O jogador %d e o vencedor da partida.\n"
#define MENSAGEMJOGADAS "O numero de jogadas total foi: %d\n"
#define FICHEIRO "jogadores.dat"

struct Jogadores { // Estrutura criada para os jogadores
    char nome[MAX_CARACTERES];
    int jogos;
    int pontos;
};

typedef struct Jogadores Jogador;

void clean_buffer();
int lerString(char *string, int max);
void mprimirMatriz(int matriz[][TAMANHOMATRIZ], char token[2]);
void criarMatriz(int matriz[][TAMANHOMATRIZ]);
int verificarVencedor(int matriz[][TAMANHOMATRIZ], int jogador);
void jogadasComputador(int matriz[][TAMANHOMATRIZ], int *linha, char *coluna, int numero_jogadas[2]);
int verificarJogadas(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[], int jogador, char coluna, int linha, int numero_jogadas[2]);
void pedirJogada(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[2], int computador);
void escolherTokens(Jogador Jogadores[2], char token[2]);
void nomes(Jogador Jogadores[2], int contador, int computador);
void dicasJogada(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[2]);
void jogo(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], int linha, char coluna, int computador);
void lerFicheiro(Jogador Jogadores[2]);
void guardarFicheiro(Jogador Jogadores[2], int contador);
void estatisticas(Jogador Jogadores[2], int contador);

#endif	/* UTILS_H */

