/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex12.c
 * Author: samue
 *
 * Created on 22 de Outubro de 2017, 15:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    
    puts("Introduza a coordenada x: ");
    scanf("%d", &x);
    puts("Introduza a coordenada y: ");
    scanf("%d", &y);
    
    if (x == 0 ) {
        printf("O ponto esta sobre o eixo dos x. Coordenadas: (%d, %d)\n", x, y);
    } if (y == 0) {
        printf("O ponto esta sobre o eixo dos y. Coordenadas: (%d, %d)\n", x, y);
    }  if ( x == 0 && y == 0) {
        printf("O ponto esta na origem. Coordenadas: (%d, %d)\n", x, y);
    }
    
    if (x > 0 && y > 0) {
        printf("O ponto esta no primeiro quadrante. Coordenadas: (%d, %d)\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto esta no segundo quadrante. Coordenadas: (%d, %d)\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto esta no terceiro quadrante. Coordenadas: (%d, %d)\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto esta no quarto quadrante. Coordenadas: (%d, %d)\n", x, y);
    }
    return (EXIT_SUCCESS);
}

