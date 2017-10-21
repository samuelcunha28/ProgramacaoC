/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex11.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 16:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;

    puts("Introduza o valor de x: ");
    scanf("%d", &x);

    if (x < 1) {
        y = x;
        printf("O valor de y e de: %d\n ", y);
    } else if (x == 1) {
        y = 0;
        printf("O valor de y e de: %d\n ", y);
    } else {
        y = 2 * x;
        printf("O valor de y e de: %d\n ", y);
    }
    return (EXIT_SUCCESS);
}

