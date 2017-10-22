/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex14.c
 * Author: samue
 *
 * Created on 22 de Outubro de 2017, 16:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double saldoinicial, operacao, credito, debito, saldofinal = 0;

    puts("Introduza o saldo inicial da sua conta: ");
    scanf("%lf", &saldoinicial);
    puts("O que pretende efetuar? (valor positivo para creditar / valor negativo para debitar");
    scanf("%lf", &operacao);
    
    saldofinal = saldoinicial + operacao;
    
    if (operacao > 0 && saldofinal >= 0) {
        printf("A sua operacao e realizavel. O saldo final apos o credito e de: %.2lf\n ", saldofinal);
    } else if (operacao < 0 && saldofinal < 0) {
        puts("A sua operacao e impossivel devido a saldo insuficiente");
    } else {
        printf("A sua operacao e realizavel. O saldo final apos o debito e de: %.2lf\n", saldofinal);
    }


    return (EXIT_SUCCESS);
}

