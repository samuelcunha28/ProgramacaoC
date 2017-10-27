/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex13.c
 * Author: samue
 *
 * Created on 27 de Outubro de 2017, 18:22
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int nota;

    while (1) { // enquanto for verdade faz o seguinte 
        puts("Introduza a nota do aluno: ");
        scanf("%d", &nota);
        if (nota >= 0 && nota < 10) {
            printf("O aluno tirou %d logo esta reprovado\n ", nota);
        } else if (nota >= 10 && nota <= 20) {
            printf("O aluno tirou %d logo esta aprovado. Parabens!\n ", nota);
            break;
        } else {
            puts("Introduziu uma nota invalida. Tente novamente ");
        }
    }

    return (EXIT_SUCCESS);
}

