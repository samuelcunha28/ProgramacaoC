/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

int i, notas, somatorio = 0;

int lerNotas(int n) {

    printf("Voce ira ler %d notas\n", n);
    for (i = 0; i < n; ++i) {
        printf("Introduza a nota numero %d do aluno:\n ", i + 1);
        scanf("%d", &notas);
        somatorio += notas;
    }
    return somatorio / n;
}