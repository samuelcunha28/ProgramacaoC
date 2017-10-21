/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex6.c
 * Author: samue
 *
 * Created on 21 de Outubro de 2017, 14:05
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horas, minutos;
    
    puts("Introduza a hora (em formato de 24 horas): ");
    scanf("%d", &horas);
    puts("Agora introduza os minutos");
    scanf("%d", &minutos);
    
    if (horas == 12) {
        horas = 12;
        printf("Convertendo para formato de 12 horas neste momento sao: %d : %d PM\n", horas, minutos);
    }else if (horas > 12){
        horas = horas - 12;
        printf("Convertendo para formato de 12 horas neste momento sao: %d : %d PM\n", horas, minutos);
    }else if (horas == 0){
        horas = 12;
        printf("Convertendo para formato de 12 horas neste momento sao: %d : %d AM\n", horas, minutos);
    }else{
       printf("Convertendo para formato de 12 horas neste momento sao: %d : %d AM\n", horas, minutos); 
    }

    return (EXIT_SUCCESS);
}

