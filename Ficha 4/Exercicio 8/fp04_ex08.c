/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex08.c
 * Author: samue
 *
 * Created on 6 de Novembro de 2017, 19:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define alunos 10

/*
 * 
 */

int main(int argc, char** argv) {
    int min = 0, max = 20, i, notas, somatorio = 0;
    
    printf("Voce ira ler %d notas\n", alunos);

    for (i = 0; i < alunos; ++i) {
        notas = lerNotas(min, max);
        somatorio += notas;
    }

    return (EXIT_SUCCESS);
}


