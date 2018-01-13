/* 
 * File:   utils.h
 * Author: aluno
 *
 * Created on November 16, 2017, 11:11 AM
 */

#ifndef UTILS_H
#define	UTILS_H

#define MAX_CARACTERES 50

struct Jogadores {
    char nome[MAX_CARACTERES];
    char token;
};

typedef struct Jogadores Jogador;

void clean_buffer();
int lerString(char *string, int max);
#endif	/* UTILS_H */
