/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "mytools.h"

#define EPARAD 1.16
#define DPARAE 0.85


char moeda;
double valor;

void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

double conversao(double valor, char operacao) {
    return valor * (operacao == 'D' || operacao == 'd' ? DPARAE : EPARAD);
}

double lerDouble() {
    puts("Introduza o valor que pretende converter: ");
    scanf("%lf", &valor);
    return valor;
}

char lerChar() {
    puts("Qual a operacao que pretende fazer? (E para converter de euros para dolares ou D para converter de dolares para euros) ");
    
    limparBufferEntrada();
    scanf("%c", &moeda);
    
    return moeda;
}