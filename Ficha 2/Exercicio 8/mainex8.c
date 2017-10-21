/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex8.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 15:13
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horaentrada, horasaida, minutoentrada, minutosaida, totalentrada, totalsaida, total;
    
    puts("Introduza a hora de entrada do empregado: ");
    scanf("%d", &horaentrada);
    puts("Introduza o minuto de entrada do empregado: ");
    scanf("%d", &minutoentrada);
    puts("Introduza a hora de saida do empregado: ");
    scanf("%d", &horasaida);
    puts("Introduza o minuto de saida do empregado: ");
    scanf("%d", &minutosaida);
    
    if (horaentrada > 23 || minutoentrada > 59 || horasaida > 23 || minutosaida > 59) {
        puts("As horas / minutos foram introduzidos de forma incorreta!!! ");
    }
    totalentrada = (horaentrada * 60) + minutoentrada;
    totalsaida = (horasaida * 60) + minutosaida;
    total = totalsaida - totalentrada;
   
    if (total < 0) {
        total = (24 * 60) + total;
    }
    printf("O total de tempo trabalhado pelo empregado foi de: %d horas e %d minutos\n ", total / 60, total % 60);
    
    return (EXIT_SUCCESS);
}

