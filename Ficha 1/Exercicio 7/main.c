/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 19:03
 */

#include <stdio.h>
#include <stdlib.h>

#define velocidadeluz 300000

/*
 * 
 */
int main(int argc, char** argv) {
    double quilometros, tempototal;
    
    puts("Insira no numero de quilometros:");
    scanf("%lf", &quilometros);

    tempototal = quilometros / velocidadeluz;

    printf("O tempo que levaria a realizar a viagem em anos luz e: %0.6lf\n", tempototal);

    return (EXIT_SUCCESS);
}

