/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex15.c
 * Author: samue
 *
 * Created on 22 de Outubro de 2017, 18:18
 */

#include <stdio.h>
#include <stdlib.h>

#define distanciapercurso 130
#define alcmax 4

/*
 * 
 */
int main(int argc, char** argv) {
    int tempopercurso, tempohoras;
    float maxkm, velmedia;

    puts("Introduza o total de tempo que demorou a fazer o percurso: (em minutos)");
    scanf("%d", &tempopercurso);

    tempohoras = tempopercurso / 60; // passando para horas
    velmedia = distanciapercurso / tempohoras; //calculo da velocidade media
    printf("A velocidade media e de: %.1lf\n ", velmedia);

    if (velmedia <= 60) {
        maxkm = (alcmax * 100) / 5; // regra 3 simples para velocidade media menor ou igual a 60 km/h
        printf("Para velocidades medias menores ou igual a 60 kmh, o maximo de quilometros que conseguira fazer e de %.1f\n  ", maxkm);
        puts("Tem alcance suficiente para parar na ultima bomba para abastecer ");
    } else if (velmedia > 60 && velmedia <= 120) {
        maxkm = (alcmax * 100) / 6; // regra 3 simples para velocidade media maior que 60 e menor ou igual a 120 km/h
        printf("Para velocidades medias maiores que 60 kmh e menores ou iguais a 120 kmh o maximo de quilometros que conseguira fazer e de %.1f\n  ", maxkm);
        puts("Tem alcance suficiente para parar na segunda bomba para abastecer ");
    } else if (velmedia > 120) {
        maxkm = (alcmax * 100) / 7; // regra 3 simples para velocidade media maior que 120 km/h
        printf("Para velocidades medias maiores que 120 kmh, o maximo de quilometros que conseguira fazer e de %.1f\n  ", maxkm);
        puts("Impossivel de chegar à primeira bomba. Infelizmente vai ficar encostado a berma ");
    }
    return (EXIT_SUCCESS);
}

