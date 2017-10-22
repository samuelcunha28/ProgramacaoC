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
    int temp_pretendida, segundos;
    float temp_atual, dif_temp;

    puts("Indique a temperatura atual: ");
    scanf("%f", &temp_atual);
    puts("Indique qual a temperatura pretendida: ");
    scanf("%d", &temp_pretendida);

    if (temp_atual == temp_pretendida) {
        printf("A temperatura ambiente esta a sua medida!!\n ");
    } else if (temp_atual < temp_pretendida) {
        dif_temp = temp_pretendida - temp_atual; // diferenca das temperaturas
        segundos = dif_temp * aumentot; // calculo dos segundos
        printf("Para atingir a temperatura pretendida temos de aumentar %.1f graus\n ", dif_temp);
       printf("O tempo necessario para a atingir e de %d segundos\n ", segundos);
    } else {
        dif_temp = temp_atual - temp_pretendida; // diferenca das temperaturas
        segundos = dif_temp * reducaot; // calculo dos segundos
       printf("Para atingir a temperatura pretendida temos de diminuir %.1f graus\n ", dif_temp);
        printf("O tempo necessario para a atingir e de %d segundos\n ", segundos);
    }
    return (EXIT_SUCCESS);
}

