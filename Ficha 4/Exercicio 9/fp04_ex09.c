/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fp04_ex09.c
 * Author: samue
 *
 * Created on 5 de Novembro de 2017, 17:18
 */

#include <stdio.h>
#include <stdlib.h>

#define inicial 0

/*
 * 
 */
int main(int argc, char** argv) {
    int num = 0;

    printf("Insira o valor ate ao qual seja imprimido: ");
    scanf("%d", &num);


    do {
        printf("%d\n", (num - num) + 1);
        num += 1;
    } while (num >= 0 );
    return (EXIT_SUCCESS);
}