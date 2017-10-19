/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samuel
 *
 * Created on 15 de Outubro de 2017, 22:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int horapartida, horachegada, minutospartida, minutoschegada, tempototal, horafinal, distanciatotal, tempopartida, tempochegada;
    float velocidademed, consumomedio, litros;
    puts("Introduza a hora de partida: ");
    scanf("%d", &horapartida);
    puts("Introduza os minutos de partida: ");
    scanf("%d", &minutospartida);
    puts("Introduza a hora de chegada: ");
    scanf("%d", &horachegada);
    puts("Introduza os minutos de chegada: ");
    scanf("%d", &minutoschegada);
    
    tempopartida = (horapartida * 60) + minutospartida;
    tempochegada = (horachegada * 60) + minutoschegada;
    tempototal = tempochegada - tempopartida;
   
    puts("A viagem teve uma duração de: ");
    printf("Horas total: %d\n ", (tempototal / 60));
    printf("Minutos total: %d\n", (tempototal % 60));
    
    puts("Qual a distancia percorrida na viagem? ");
    scanf("%d", &distanciatotal);
    
    puts("Quantos litros de combustivel foi consumido pelo automovel? ");
    scanf("%f", &litros);
    
    
    consumomedio = litros / distanciatotal;
    horafinal = horachegada - horapartida;
    velocidademed = (distanciatotal * 60) / tempototal;
    
    printf("O consumo medio foi de: %.2f litros por km\n ", consumomedio);
    printf("A velocidade media do percurso foi de: %.1f kmh\n ",  velocidademed);
    
            
    return (EXIT_SUCCESS);
}

