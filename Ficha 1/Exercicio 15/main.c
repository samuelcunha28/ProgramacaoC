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
    int horapartida, horachegada, minutospartida, minutoschegada, tempototal, distanciatotal, tempopartida, tempochegada;
    float velocidademed, consumomedio, litros;
    
    puts("Introduza a hora de partida: ");
    scanf("%d", &horapartida);
    puts("Introduza os minutos de partida: ");
    scanf("%d", &minutospartida);
    puts("Introduza a hora de chegada: ");
    scanf("%d", &horachegada);
    puts("Introduza os minutos de chegada: ");
    scanf("%d", &minutoschegada);
    
    tempopartida = (horapartida * 60) + minutospartida; // converter tudo para minutos
    tempochegada = (horachegada * 60) + minutoschegada; //converter para minutos
    tempototal = tempochegada - tempopartida;
   
    puts("A viagem teve uma duracao de: "); // converter de minutos para horas e minutos
    printf("Horas total: %d\n ", (tempototal / 60)); // tempo total a dividir por 60 minutos (minutos que uma hora tem)
    printf("Minutos total: %d\n", (tempototal % 60)); //resto dos minutos
    
    puts("Qual a distancia percorrida na viagem? ");
    scanf("%d", &distanciatotal);
    
    puts("Quantos litros de combustivel foi consumido pelo automovel? ");
    scanf("%f", &litros);
    
    
    consumomedio = litros / distanciatotal; // formula do consumo medio
    velocidademed = (distanciatotal * 60) / tempototal; // distancia do percurso a multiplicar por uma hora ( 60 minutos) sobre o tempo total da viagem
    
    printf("O consumo medio foi de: %.2f litros por km\n ", consumomedio);
    printf("A velocidade media do percurso foi de: %.1f kmh\n ",  velocidademed);
            
    return (EXIT_SUCCESS);
}

