/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mainex15.cpp
 * Author: samue
 *
 * Created on 1 de Novembro de 2017, 18:58
 */

#include <cstdlib>

#define estudos 100

/*
 * 
 */
void limparBufferEntrada() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
int main(int argc, char** argv) {
    int i;
    int idade[estudos];
    char sexo[estudos];
    int estadocivil[estudos];
    double salario[estudos];
    int idades;
    //variaveis das questoes
    int questao1= 151;
    int questao2= 15;
    double questao3= 0;
    int questao4= 0;
    int questao5= 0;
    //contador
    int contador=1;
    
    
    while(1){
        printf("Questionario nº: %d\n",contador);
        printf("Introduza a sua idade: ");
        scanf("%d", &idades);
        if (idades<0) {
            contador=contador - 1;
            break;
        }
        else if (idades< 16 && idades>150){
            printf("Valor Invalido. ");
            continue;
        }
        else {
            idade[contador-1]= idades;
        }
        //Loop para o sexo
         while(1){
            printf("Introduza o seu sexo: ");
            limparBufferEntrada();
            sexo[contador-1]= getchar();
            limparBufferEntrada();
            if (sexo[contador-1]=='M' || sexo[contador-1]=='m' || sexo[contador-1]=='F' || sexo[contador-1]=='f'){ 
                 printf("%c", sexo[contador-1]);
                 break;
            }
            else {
                printf("Valor Invalido. ");
            }
            
        }
        // Loop para o estado civil
        while(1){
            printf("Introduza o seu estado civil: ");
            scanf("%d", &estadocivil[contador-1]);
            if (estadocivil[contador-1]>= 1 && estadocivil[contador-1]<=4){
                break;
            }
            else {
                printf("Valor Invalido. ");
            }
        }
        //Loop para o salario
        while(1){
            printf("Introduza o seu salario: ");
            scanf("%lf", &salario[contador-1]);
            if (salario[contador-1]>= 500){
                break;
            }
            else {
                printf("Valor Invalido. ");
            }
        }
        contador++;
    }
    
    //loop para descobrir a menor e maior idade
    for (i=0; i<=(contador-1); ++i){
        if(questao1>idade[i]){
            questao1= idade[i];
        }
        if(questao2<idade[i]){
            questao2= idade[i];
        }
    }
    
    printf("A menor idade foi: %d anos\n", questao1);
    printf("A maior idade foi: %d anos\n", questao2);
    
    //media salarios
    for (i=0; i<=(contador-1); ++i){
        questao3 += salario[i];
    }
    printf("Media dos salarios: %.2lf euros\n", questao3/contador);
    
    // quantidade do sexo feminino com saldo ate 1500
    for (i=0; i<=(contador-1); ++i){
        if (sexo[i]=='F' || sexo[i]=='f' && salario[i]<=1500 ){
            questao4 = questao4 + 1;
        }
    }
    printf("Existem %d pessoa(s) do sexo feminino com ordenados até 1500 euros.\n", questao4);
    
    //ultima questao
    for (i=0; i<=(contador-1); ++i){
        if (sexo[i]=='M' || sexo[i]=='m' && idade[i]<=35 && idade[i]>18 && estadocivil[i] == 2){
            questao5 = questao5 + 1;
        }
    }
    printf("Existem %d pessoa(s) do sexo masculino entre os 18 e 35 anos inclusive que sejam casados.", questao5); 
    
    return (EXIT_SUCCESS);
}


