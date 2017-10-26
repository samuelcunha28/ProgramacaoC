/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex6.c
 * Author: samue
 *
 * Created on 26 de Outubro de 2017, 15:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num, limite, salto;

    puts("Introduza o valor limite: ");
    scanf("%d", &limite);
    puts("Introduza o valor do salto: ");
    scanf("%d", &salto);

    while (limite >= num) {
        printf("%d ", num);
        num += salto;
    }

    return (EXIT_SUCCESS);
}

