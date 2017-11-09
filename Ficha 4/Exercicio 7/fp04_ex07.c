/* 
 * File:   fp04_ex07.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 17:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

#define MIN 1
#define MAX 50

/* Ficha 4 Exercicio 7 */

int main(int argc, char** argv) {
    int num;

    num = lerInteiro(MIN, MAX);
    Impressao(num);

    return (EXIT_SUCCESS);
}