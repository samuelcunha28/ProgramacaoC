/* 
 * File:   fp04_ex08.c
 * Author: samue
 *
 * Created on 6 de Novembro de 2017, 19:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define ALUNOS 10
#define MIN 0
#define MAX 20


/* Ficha 4 Exercicio 8 */

int main(int argc, char** argv) {
    int i, notas, somatorio = 0;
    
    printf("Voce ira ler %d notas\n", ALUNOS);

    for (i = 0; i < ALUNOS; ++i) {
        notas = lerNotas(MIN, MAX);
        somatorio += notas;
    }

    return (EXIT_SUCCESS);
}


