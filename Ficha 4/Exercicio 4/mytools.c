/*
 * To change this lice
 * nse header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

int lerNotas(int n) {
    int i, notas, somatorio = 0;
    
    printf("Voce ira ler %d notas\n", n);
    for (i = 0; i < n; ++i) {
        printf("Introduza a nota numero %d do aluno:\n ", i + 1);
        scanf("%d", &notas);
        somatorio += notas;
    }
    return somatorio;
}

int fazerMedia(int n, int somatorio) {
    int resultadofinal;
    
    resultadofinal = somatorio / n;
    return resultadofinal;
}