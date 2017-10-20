/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 15 de Outubro de 2017, 15:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    long int n_segundos;
    
    puts("Introduza o numero de segundos para a conversao: ");
    scanf("%ld", &n_segundos);

    printf("O numero de horas e: %d\n", n_segundos / 3600); // numero total de segundos sobre o numero de segundos que uma hora tem
    printf("O numero de minutos e: %d\n", (n_segundos % 3600 / 60)); // restantes segundos a dividir pelo numero de segundos que um minuto tem
    printf("O numero de segundos e: %d\n", (n_segundos % 60)); // o resto de segundos que nao cabem num minuto

    return (EXIT_SUCCESS);
}

