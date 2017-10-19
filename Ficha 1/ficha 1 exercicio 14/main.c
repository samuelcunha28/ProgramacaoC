/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 16 de Outubro de 2017, 18:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int voto1, voto2, voto3, voto4, voto5;
    float totalvotos;
    puts("Apresente quantos votos o primeiro candidato teve: ");
    scanf("%d", &voto1);
    puts("Apresente quantos votos o segundo candidato teve: ");
    scanf("%d", &voto2);
    puts("Apresente quantos votos o terceiro candidato teve: ");
    scanf("%d", &voto3);
    puts("Apresente quantos votos o quarto candidato teve: ");
    scanf("%d", &voto4);
    puts("Apresente quantos votos o quinto candidato teve: ");
    scanf("%d", &voto5);
    
    totalvotos = voto1 + voto2 + voto3 + voto4 + voto5;
    
    printf("O primeiro canditato teve: %0.1f %% dos votos\n", (voto1 / totalvotos) * 100);
    printf("O segundo canditato teve: %0.1f %% dos votos\n", (voto2 / totalvotos) * 100);
    printf("O terceiro canditato teve: %0.1f %% dos votos\n", (voto3 / totalvotos) * 100);
    printf("O quarto canditato teve: %0.1f %% dos votos\n", (voto4 / totalvotos) * 100);
    printf("O quinto canditato teve: %0.1f %% dos votos\n", (voto5 / totalvotos) * 100);

    return (EXIT_SUCCESS);
}

