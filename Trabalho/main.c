/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 27 de Novembro de 2017, 20:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int matriz[10][10];

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            matriz[i][j] = i * j;


    printf("     ");
    for (int i = 0; i < 10; i++)
        printf("  %c  ", 'A' + i);
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("  %c  ", '1' + i);
        for (int j = 0; j < 10; j++)
            printf("%5d", matriz[i][j]);
        printf("\n");
    }

    return 0;
}