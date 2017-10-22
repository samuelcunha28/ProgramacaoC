/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex13.c
 * Author: samue
 *
 * Created on 22 de Outubro de 2017, 15:39
 */

#include <stdio.h>
#include <stdlib.h>

#define aumentot 180 // 3 minutos sao 180 segundos
#define reducaot 120 // 2 minutos sao 120 segundos

/*
 * 
 */
int main(int argc, char** argv) {
    int tempreal, temppretendida, diftemp, segundos;

    puts("Indique a temperatura real: ");
    scanf("%d", &tempreal);
    puts("Indique qual a temperatura pretendida: ");
    scanf("%d", &temppretendida);

    if (tempreal == temppretendida) {
        printf("A temperatura ambiente esta a sua medida!!\n");
    } else if (tempreal < temppretendida) {
        diftemp = temppretendida - tempreal; // diferenca das temperaturas
        segundos = diftemp * aumentot; // calculo dos segundos
        printf("O tempo necessario para atingir a temperatura pretendida e de %d segundos\n ", segundos);
    } else {
        diftemp = tempreal - temppretendida; // diferenca das temperaturas
        segundos = diftemp * reducaot; // calculo dos segundos
        printf("O tempo necessario para atingir a temperatura pretendida e de %d segundos\n ", segundos);
    }
    return (EXIT_SUCCESS);
}

