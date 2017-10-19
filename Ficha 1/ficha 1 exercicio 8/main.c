/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 13 de Outubro de 2017, 19:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float temperaturaf, temperaturag;
    puts("Iremos fazer a conversao de fahrenheit para graus. Insira a temperatura em fahrenheit:");
    scanf("%f", &temperaturaf);
    
        temperaturag = ((temperaturaf - 32) * 5/9);
        
        printf("A temperatura em graus e: %0.1f\n", temperaturag);

    return (EXIT_SUCCESS);
}