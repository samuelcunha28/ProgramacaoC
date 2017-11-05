/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex04.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 14:45
 */

#include <stdio.h>
#include <stdlib.h>
#include "mytools.h"

/*
 * 
 */

int main(int argc, char** argv) {
    int n;
    float media;

    puts("Introduza o numero de notas que pretenda ler: ");
    scanf("%d", &n);

    media = lerNotas(n);

    printf("A media das notas e de %.1f ", media);


    return (EXIT_SUCCESS);
}

