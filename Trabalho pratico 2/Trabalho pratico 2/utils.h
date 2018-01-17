/* 
 * File: utils.h
 * Author: Samuel Cunha
 * TRABALHO PRATICO 2
 * Created on 10 de Janeiro de 2018, 19:49
 */

#ifndef UTILS_H
#define	UTILS_H

#define MAX_CARACTERES 50

struct Jogadores { // Estrutura criada para os jogadores
    char nome[MAX_CARACTERES];
    char token;
    int jogos;
    int pontos;
};

typedef struct Jogadores Jogador;

void clean_buffer();
int lerString(char *string, int max);

#endif	/* UTILS_H */
