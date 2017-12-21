#ifndef UTILS_H
#define UTILS_H

typedef struct {
    int dia;
    int mes;
    int ano;
} DataNasc;

struct aluno {
    int numero;
    char nome[50];
    DataNasc datanascimento;
};
typedef struct aluno Alunos;

void clean_buffer();
int lerString(char *string, int max);

#endif /* UTILS_H */
