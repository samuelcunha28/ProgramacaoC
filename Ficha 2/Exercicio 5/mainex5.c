/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex5.c
 * Author: samue
 *
 * Created on 20 de Outubro de 2017, 21:54
 */

#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada(){ char ch; while ((ch = getchar()) != '\n' && ch != EOF); }
/*
 * 
 */
int main(int argc, char** argv) {
    float numero1, numero2;
    char op;

    puts("Introduza o seu primeiro numero: ");
    scanf("%f", &numero1);
    puts("Introduza o seu segundo numero: ");
    scanf("%f", &numero2);
    
    limparBufferEntrada(); 
    
    puts("Qual a operacao que pretende fazer? (+, -, / ou *) ");
    scanf("%c", &op);

    switch (op) {
        case '+': printf("A sua operacao: %.1f + %.1f = %.1f\n ", numero1, numero2, numero1 + numero2);
            break;
        case '-': printf("A sua operacao: %.1f - %.1f = %.1f\n ", numero1, numero2, numero1 - numero2);
            break;
        case '/': printf("A sua operacao: %.1f / %.1f = %.1f\n ", numero1, numero2, numero1 / numero2);
            break;
        case '*': printf("A sua operacao: %.1f * %1.f = %.1f\n ", numero1, numero2, numero1 * numero2);
            break;
        default: puts("Operacao invalida!! ");
    }
    return (EXIT_SUCCESS);
}