/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex14.c
 * Author: samue
 *
 * Created on 28 de Outubro de 2017, 16:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int candidato1, candidato2, candidato3, candidato4, branco, nulo, voto, contador;
    
    while (1) { // enquanto for verdade faz o seguinte
        puts("Para votar no candidato 1 pressione 1 ");
        puts("Para votar no candidato 2 pressione 2 ");
        puts("Para votar no candidato 3 pressione 3 ");
        puts("Para votar no candidato 4 pressione 4 ");
        puts("Para votar em branco pressione 0 ");
        puts("Para votar nulo pressione 9 ");
        puts("Para concluir pressione -1");
        scanf("%d", &voto);
        
        if (voto >= 1 && voto <=4) {
            if  (voto == 1) {
                puts("Votou no candidato 1! ");
                ++candidato1;
            } else if  (voto == 2) {
                puts("Votou no candidato 2! ");
                ++candidato2;
            } else if  (voto == 3) {
                puts("Votou no candidato 3! ");
                ++candidato3;
            } else if  (voto == 4) {
                puts("Votou no candidato 4! ");
                ++candidato4;
        } 
            ++contador;
    } else if (voto == 0){
            puts("Votou em branco! ");
            ++branco;
            ++contador;
        } else if (voto == 9) {
            puts("Votou nulo! ");
            ++nulo;
            ++contador;
        } else if (voto == -1) {
            break;
        } else
            puts("Opcao invalida! ");
    }
    puts("--------------------VOTOS---------------------");
    printf("Total de votos: %.d\n", contador);
    printf("O primeiro candidato teve %d voto(s)\n ", candidato1);
    printf("O segundo candidato teve %d voto(s)\n ", candidato2);
    printf("O terceiro candidato teve %d voto(s)\n ", candidato3);
    printf("O quarto candidato teve %d voto(s)\n ", candidato4);
    printf("O primeiro candidato teve %d voto(s)\n ", candidato4);
    printf("%d votaram em branco\n ", branco);
    printf("%d votaram nulo\n ", nulo);
    
    puts("-------------PERCENTAGENS---------------------");
    printf("O primeiro candidato teve %.1f%% dos votos\n ", ((float)candidato1 / contador)*100);
    printf("O segundo candidato teve %.1f%% dos votos!\n ", ((float)candidato2 / contador)*100);
    printf("O terceiro candidato teve %.1f%% dos votos!\n ", ((float)candidato3 / contador)*100);
    printf("O quarto candidato teve %.1f%% dos votos!\n ", ((float)candidato4 / contador)*100);
    printf("A percentagem de votos em branco foi de %.2f%%\n ", ((float)branco / contador)*100);
    printf("A percentagem de votos nulos foi de %.2f%%\n ", ((float)nulo / contador)*100);
    
    return (EXIT_SUCCESS);
}


