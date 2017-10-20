/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: samue
 *
 * Created on 16 de Outubro de 2017, 21:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float taxajuros;
    double deposito, taxa, saldo, saldoinicial, saldototal;

    puts("Introduza a sua taxa juro (em percentagem): ");
    scanf("%f", &taxajuros);
    taxajuros = (taxajuros / 100); 

    puts("Introduza o saldo inicial da sua conta: ");
    scanf("%lf", &saldoinicial);

    puts("Introduza o deposito do primeiro trimestre (em euros): ");
    scanf("%lf", &deposito);
    taxa = (deposito + saldoinicial) * taxajuros; // a primeira taxa e aplicada para o deposito e o saldo inicial da conta
    saldo += deposito + taxa + saldoinicial; // incrementar na variavel saldo
    printf("No primeiro trimestre:\n Valor juros: %0.2lf €\n Deposito do trimestre: %0.2lf €\n Saldo: %0.2lf €\n\n ", taxa, deposito, saldo);

    puts("Introduza o deposito do segundo trimeste (em euros): ");
    scanf("%lf", &deposito);
    taxa = (deposito * taxajuros);
    saldo += (deposito + taxa);
    printf("No segundo trimestre:\n Valor juros: %0.2lf €\n Deposito do trimestre: %0.2lf €\n Saldo: %0.2lf €\n\n ", taxa, deposito, saldo);

    puts("Introduza o deposito do terceito trimeste (em euros): ");
    scanf("%lf", &deposito);
    taxa = (deposito * taxajuros);
    saldo += (deposito + taxa);
    printf("No terceiro trimestre:\n Valor juros: %0.2lf €\n Deposito do trimestre: %0.2lf €\n Saldo: %0.2lf €\n\n ", taxa, deposito, saldo);

    puts("Introduza o deposito do quarto trimeste (em euros): ");
    scanf("%lf", &deposito);
    taxa = (deposito * taxajuros);
    saldo += (deposito + taxa);
    printf("No quarto trimestre:\n Valor juros: %0.2lf €\n Deposito do trimestre: %0.2lf €\n Saldo: %0.2lf €\n\n ", taxa, deposito, saldo);

    printf("Saldo final da conta: %0.2lf €\n ", saldo); 

    return (EXIT_SUCCESS);
}
