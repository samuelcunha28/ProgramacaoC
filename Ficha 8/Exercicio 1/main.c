/* 
 * File:   main.c
 * Author: samuel
 * FICHA 8
 * Created on 21 de Dezembro de 2017, 12:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

#define MAX_ALUNOS 30
#define MAX_CARACTERES 50

int inserir_aluno(Alunos aluno[], int contador) {
    Alunos aluno_novo;

    puts(" ");
    puts("Introduza o numero do aluno: ");
    scanf("%d", &aluno_novo.numero);
    clean_buffer();
    puts("Introduza o nome do aluno: ");
    lerString(aluno_novo.nome, MAX_CARACTERES);
    puts("Introduza a data de nascimento do aluno: (dia, mes, ano)");
    scanf("%d%d%d", &aluno_novo.datanascimento.dia, &aluno_novo.datanascimento.mes, &aluno_novo.datanascimento.ano);

    aluno[contador] = aluno_novo;
    
    return ++contador;
}

void alterar_aluno(Alunos aluno[], int contador) {
    int i, num;
    Alunos aluno_novo;

    printf("Qual o numero do aluno que pretende alterar? ");
    scanf("%d", &num);

    for (i = 0; i < contador; ++i) {
        if (aluno[i].numero == num) {
            puts(" ");

            puts("Para a alteracao introduza um numero novo: ");
            scanf("%d", &aluno_novo.numero);
            clean_buffer();
            puts("Para a alteracao introduza um nome novo: ");
            lerString(aluno_novo.nome, MAX_CARACTERES);
            clean_buffer();
            puts("Para a alteracao introduza uma data de nascimento nova: (dia, mes, ano) ");
            scanf("%d%d%d", &aluno_novo.datanascimento.dia, &aluno_novo.datanascimento.mes, &aluno_novo.datanascimento.ano);
            
            aluno[i] = aluno_novo;

        } else {
            puts("O numero que pretende alterar nao existe!");
        }
    }
}

int eliminar_aluno(Alunos aluno[], int contador) {
    int i, num;

    printf("Qual o numero do aluno que pretende eliminar? ");
    scanf("%d", &num);

    for (i = 0; i < contador; ++i) {
        if (aluno[i].numero == num) {
            if (contador == 1) {
                return 0;
            } else if ((contador - 1) == i) { // o contador ira decrementar para nao ter alunos a mais
                return --contador;
            } else {
                aluno[i] = aluno[(contador - 1)]; // a posicao volta para tras e e ocupada pela eliminada
                return --contador;
            }
        } else {
            puts("O numero que pretende eliminar nao existe!");
        }
    }
}

void imprimir_aluno(Alunos aluno[], int contador) {
    int i, num;

    printf("Qual o numero de aluno que pretende imprimir? ");
    scanf("%d", &num);

    for (i = 0; i < contador; ++i) {
        if (aluno[i].numero == num) { // se o numero de aluno existir imprimimos
            puts("");
            printf("Numero do Aluno: %d\n", aluno[i].numero);
            printf("Nome do Aluno: %s\n", aluno[i].nome);
            printf("Data de Nascimento do Aluno: %d/%d/%d\n", aluno[i].datanascimento.dia, aluno[i].datanascimento.mes, aluno[i].datanascimento.ano);
        } else {
            puts("O numero que pretende imprimir nao existe!");
        }
    }
}

void imprimir_todos_alunos(Alunos aluno[], int contador) {
    int i;

    for (i = 0; i < contador; ++i) {
        puts("");
        printf("Numero do Aluno: %d\n", aluno[i].numero);
        printf("Nome do Aluno: %s\n", aluno[i].nome);
        printf("Data de Nascimento do Aluno: %d/%d/%d\n", aluno[i].datanascimento.dia, aluno[i].datanascimento.mes, aluno[i].datanascimento.ano);
    }
}

int main(int argc, char** argv) {
    int opcao, contador = 0;
    Alunos aluno[MAX_ALUNOS];

    do {
        printf("1.Inserir um aluno\n2.Alteração de um aluno\n3.Remoção de um aluno\n4.Consulta dos detalhes de um aluno em especifico\n5.Imprimir todos os alunos\n6.Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        puts("");
        switch (opcao) {
            case 1: contador = inserir_aluno(aluno, contador); // igualar o contador a funcao para inserir na posicao
                break;
            case 2: alterar_aluno(aluno, contador);
                break;
            case 3: contador = eliminar_aluno(aluno, contador); //igualar o contador a funcao para eliminar
                break;
            case 4: imprimir_aluno(aluno, contador);
                break;
            case 5: imprimir_todos_alunos(aluno, contador);
                break;
            case 6: break;
            default: printf("Opção Incorreta!");
        }
    } while (opcao != 6);

    return (EXIT_SUCCESS);
}