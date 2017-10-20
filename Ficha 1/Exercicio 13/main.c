/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 15 de Outubro de 2017, 21:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    long int tempocancao, minutos, segundos;

    puts("Indique a duracao da primeira cancao (em minutos e segundos respetivamente): ");
    scanf("%ld%ld", &minutos, &segundos);
    tempocancao += (minutos * 60) + segundos;

    puts("Indique a duracao da segunda cancao (em minutos e segundos respetivamente): ");
    scanf("%ld%ld", &minutos, &segundos);
    tempocancao += (minutos * 60) + segundos;

    puts("Indique a duracao da terceira cancao (em minutos e segundos respetivamente): ");
    scanf("%ld%ld", &minutos, &segundos);
    tempocancao += (minutos * 60) + segundos;

    puts("Indique a duracao da quarta cancao (em minutos e segundos respetivamente): ");
    scanf("%ld%ld", &minutos, &segundos);
    tempocancao += (minutos * 60) + segundos;

    puts("Indique a duracao da quinta cancao (em minutos e segundos respetivamente): ");
    scanf("%ld%ld", &minutos, &segundos);
    tempocancao += (minutos * 60) + segundos;

    printf("O total de segundos do album e de: %ld\n", tempocancao);
    puts("Convertendo para horas:minutos:segundos da: ");
    printf("Horas: %d\n", (tempocancao / 3600)); // sendo que uma hora tem 3600 segundos 
    printf("Minutos: %d\n", (tempocancao % 3600) / 60); // restantes segundos a dividir pelo numero de segundos que um minuto tem
    printf("Segundos: %d\n", tempocancao % 60); // fazendo os segundos que nao cabem num minuto

    return (EXIT_SUCCESS);
}