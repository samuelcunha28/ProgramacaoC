#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void clean_buffer() {
    char ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int lerString(char *string, int max) {
    if (fgets(string, max, stdin) != NULL) {
        int tamanho = strlen(string) - 1;
        if (string[tamanho] == '\n') {
            string[tamanho] = '\0';
        } else {
            clean_buffer();
        }
        return 1;
    }
    return 0;
}

void imprimirMatriz(int matriz[][TAMANHOMATRIZ], char token[2]) {
    int i, j;
    int A = 65; // 65 e o valor de A em ASCII

    //Imprime a primeira linha com as letras
    printf(" ");
    printf("|");
    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        printf("%c", A);
        printf("|");
        ++A;
    }

    puts(" ");
    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        //Imprime a primeira coluna com os numeros
        printf("%d", i + 1);
        printf("|");
        //Imprime a matriz
        for (j = 0; j < TAMANHOMATRIZ; ++j) {
            //Imprime as posições vazias
            if (matriz[i][j] == ESPACOLIVRE) {
                printf("-");
            }//Imprime as posições do jogador 1
            else if (matriz[i][j] == 0) {
                printf("%c", token[0]);
            }//Imprime as posições do jogador 2
            else if (matriz[i][j] == 1) {
                printf("%c", token[1]);
            }
            printf("|");
        }
        puts(" ");
    }
}

void criarMatriz(int matriz[][TAMANHOMATRIZ]) {
    int i, j;

    //Prenche a matriz com o espaco livre (-1)
    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        for (j = 0; j < TAMANHOMATRIZ; ++j) {
            matriz[i][j] = ESPACOLIVRE;
        }
    }
}

int verificarVencedor(int matriz[][TAMANHOMATRIZ], int jogador) { // funcao para verificar se algum jogador venceu
    int i, j;

    //verifica as colunas para ver se o jogador ganhou
    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        for (j = 0; j < (TAMANHOMATRIZ - 2); ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i][j + 1] && matriz[i][j] == matriz[i][j + 2] && matriz[i][j] == matriz[i][j + 3]) {
                return 1;
            }
        }
    }

    //verifica as linhas para ver se o jogador ganhou
    for (i = 0; i < (TAMANHOMATRIZ - 2); ++i) {
        for (j = 0; j < TAMANHOMATRIZ; ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i + 1][j] && matriz[i][j] == matriz[i + 2][j] && matriz[i][j] == matriz[i + 3][j]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da esquerda para a direita
    for (i = 0; i < (TAMANHOMATRIZ - 2); ++i) {
        for (j = 0; j < (TAMANHOMATRIZ - 2); ++j) {
            if (matriz[i][j] == jogador && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i][j] == matriz[i + 2][j + 2] && matriz[i][j] == matriz[i + 3][j + 3]) {
                return 1;
            }
        }
    }

    //verifica as diagonais da direita para a esquerda
    for (i = 0; i < (TAMANHOMATRIZ - 2); i++) {
        for (j = 0; j < (TAMANHOMATRIZ - 2); j++) {
            if (matriz[i][j + 2] == jogador && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i][j + 2] == matriz[i + 2][j] && matriz[i][j + 3] == matriz[i + 3][j]) {
                return 1;
            }

        }
    }
    return 0;
} // AJUDA: https://stackoverflow.com/questions/15457796/four-in-a-row-logic

void jogadasComputador(int matriz[][TAMANHOMATRIZ], int *linha, char *coluna, int numero_jogadas[2]) { // O objetivo e nao deixar o jogador ganhar.
    int i, j; // Por isso sempre que o jogador tiver dois tokens seguidos o pc ira jogar a frente para este mesmo ter menores probabilidades de criar uma jogada perigosa e ganhar

    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        for (j = 0; j < (TAMANHOMATRIZ - 2); ++j) {
            // COLUNAS
            if (matriz[i][j] == 0 && matriz[i][j] == matriz[i][j + 1] && matriz[i][j + 2] == ESPACOLIVRE) { // Verifica se tem 2 tokens do jogador adversario em linha e joga imediatamente ao lado
                *linha = i + 1;
                *coluna = j + 67;
                return;
                // LINHAS 
            } else if (matriz[i][j] == 0 && matriz[i][j] == matriz[i + 1][j] && matriz[i + 2][j] == ESPACOLIVRE) { // Verifica se tem 2 tokens do jogador adversario em linha e joga imediatamente a seguir ao token do adversario
                *linha = i + 3;
                *coluna = j + 65;
                return;
                // DIAGONAIS DA ESQUERDA PARA A DIREITA
            } else if (matriz[i][j] == 0 && matriz[i][j] == matriz[i + 1][j + 1] && matriz[i + 2][j + 2] == ESPACOLIVRE) { // Verifica se tem 2 tokens do jogador adversario em linha e joga imediatamente a seguir ao token do adversario
                *linha = i + 3;
                *coluna = j + 67;
                return;
                // DIAGONAIS DA DIREITA PARA A ESQUERDA
            } else if (matriz[i][j + 2] == 0 && matriz[i][j + 2] == matriz[i + 1][j + 1] && matriz[i + 2][j] == ESPACOLIVRE) { // Verifica se tem 2 tokens do jogador adversario em linha e joga imediatamente a seguir ao token do adversario
                *linha = i + 3;
                *coluna = j + 65;
                return;
            }
        }
    }

    for (i = 0; i < TAMANHOMATRIZ; ++i) { // Caso nao se verificar que existem 2 tokens seguidos do adversario o pc vai preenchendo sempre na mesma linha (1) o seu token
        for (j = 0; j < TAMANHOMATRIZ; ++j) {
            if (matriz[i][j] == ESPACOLIVRE) {
                *linha = i + 1;
                *coluna = j + 65;
                return;
            }
        }
    }
}

void dicasJogada(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[2]) { // Sempre que possivel vai sugerindo uma possivel jogada potenciadora ganhadora ao jogador
    int i, j;

    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        for (j = 0; j < TAMANHOMATRIZ; ++j) {
            // COLUNAS
            if (matriz[i][j] == 0 && matriz[i][(j + 1)] == 0 && matriz[i][j + 2] == 0 && matriz[i][j + 3] == ESPACOLIVRE) { // Verifica se tem 3 tokens seguidos e sugere a proxima jogada para ganhar o jogo
                printf("%s para voce ganhar e aconselhado jogar na posicao %c %d\n", Jogadores[0].nome, (j + 68), (i + 1));
                return;
                // LINHAS 
            } else if (matriz[i][j] == 0 && matriz[(i + 1)][j] == 0 && matriz[i + 2][j] == 0 && matriz[(i + 3)][j] == ESPACOLIVRE) { // Verifica se tem 3 tokens seguidos e sugere a proxima jogada para ganhar o jogo
                printf("%s para voce ganhar e aconselhado jogar na posicao %c %d\n", Jogadores[0].nome, (j + 65), (i + 4));
                return;
                // DIAGONAIS DA ESQUERDA PARA A DIREITA
            } else if (matriz[i][j] == 0 && matriz[(i + 1)][(j + 1)] == 0 && matriz[i + 2][j + 2] == 0 && matriz[(i + 3)][(j + 3)] == ESPACOLIVRE) { // Verifica se tem 3 tokens seguidos e sugere a proxima jogada para ganhar o jogo
                printf("%s para voce ganhar e aconselhado jogar na posicao %c %d\n", Jogadores[0].nome, (j + 68), (i + 4));
                return;
                // DIAGONAIS DA DIREITA PARA A ESQUERDA
            } else if (matriz[i][j] == 0 && matriz[(i + 1)][(j - 1)] == 0 && matriz[i + 2][j - 2] == 0 && matriz[(i + 3)][(j - 3)] == ESPACOLIVRE) { // Verifica se tem 3 tokens seguidos e sugere a proxima jogada para ganhar o jogo
                printf("%s para voce ganhar e aconselhado jogar na posicao %c %d\n", Jogadores[0].nome, (j + 62), (i + 4));
                return;
            }
        }
    }
}

int verificarJogadas(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[2], int jogador, char coluna, int linha, int numero_jogadas[2]) {
    int i, j;
    int ganhar = 0;
    int A = 65;

    // Desistencia: Verifica logo se algum jogador desiste para nao percorrer as Verificacoes para menos gastos 
    if (coluna == 'Z' || coluna == 90) {
        if (linha == 0) {
            printf("Jogador 1: %s\n", Jogadores[0].nome);
            printf("Jogador 2: %s\n", Jogadores[1].nome);
            printf(MENSAGEMVITORIA, (abs(jogador - 1) + 1));
            printf(MENSAGEMJOGADAS, numero_jogadas[abs(jogador - 1)]);
            Jogadores[abs(jogador - 1)].pontos = Jogadores[abs(jogador - 1)].pontos + 3; // Acumular mais 3 pontos para o jogador vencedor da partida
            ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
            ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
            return jogador + 2; // Para nao voltar pedir as jogadas novamente porque jogador + 2 > (jogador < 2)
        }
    }
    // Em caso de empate
    if (numero_jogadas[2] == TAMANHOMATRIZ * TAMANHOMATRIZ) { // Numero maximo de jogadas possiveis
        ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
        ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
        ++Jogadores[0].pontos; // Acumular um ponto para cada jogador
        ++Jogadores[1].pontos; // Acumular um ponto para cada jogador
    }
    // Verificacoes: caso nenhum jogador desista percorre as seguintes verificacoes 
    for (i = 0; i < TAMANHOMATRIZ; ++i) {
        if (coluna == (A + i) && linha > 0 && linha <= TAMANHOMATRIZ) { // se tiver dentro dos parametros possiveis de jogada
            if (matriz[(linha - 1)][((A + i) - A)] == ESPACOLIVRE) { // e se tiver um espaco livre para completar a jogada
                matriz[(linha - 1)][((A + i) - A)] = jogador; // o jogador pode jogar 
                imprimirMatriz(matriz, token);
                // Contador para o numero de jogadas para cada jogador
                ++numero_jogadas[jogador];
                puts("");
                // Verificar se qualquer jogador ganhou a partida
                ganhar = verificarVencedor(matriz, jogador);
                if (ganhar > 0) { // Se o jogador ganhar entao
                    printf("Jogador 1: %s\n", Jogadores[0].nome);
                    printf("Jogador 2: %s\n", Jogadores[1].nome);
                    printf(MENSAGEMVITORIA, jogador + 1);
                    printf(MENSAGEMJOGADAS, numero_jogadas[jogador]);
                    Jogadores[jogador].pontos = Jogadores[jogador].pontos + 3; // Acumular mais 3 pontos para o jogador vencedor da partida
                    ++Jogadores[0].jogos; // Acumular um jogo para cada jogador
                    ++Jogadores[1].jogos; // Acumular um jogo para cada jogador
                    return jogador + 2; // Para nao voltar pedir as jogadas novamente porque jogador + 2 > (jogador < 2)
                }
                return abs(jogador - 1); // fazer o absoluto para a troca de jogadores para a continuacao do jogo
            } else {
                printf("Jogada impossivel de ser realizada, a posicao esta ocupada por um token! Jogue novamente!");
                return jogador; // como a jogada nao e possivel de ser efetuada pede novamente ao jogador atual que efetue outra jogada na funcao de Jogadas
            }
        }
    }
    printf("Jogada impossivel de ser realizada, posicao nao existe! Jogue novamente!");
    return jogador; // como a jogada nao e possivel de ser efetuada pede novamente ao jogador atual que efetue outra jogada na funcao de Jogadas
}

void pedirJogada(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], char token[2], int computador) {
    char coluna;
    int linha;
    int jogador = 0;
    int numero_jogadas[2];
    numero_jogadas[0] = 0; // inicialmente cada jogador inicia o seu contador de jogadas em zero
    numero_jogadas[1] = 0; // inicialmente cada jogador inicia o seu contador de jogadas em zero

    puts("Se qualquer jogador quiser desistir tera que jogar na coluna Z e na linha 0");
    // Ciclo para a realizacao das jogadas
    do {
        // Para jogar contra o computador foi aproveitado este procedimento
        if (computador == 1 & jogador == 1) {
            jogadasComputador(matriz, &linha, &coluna, numero_jogadas);
            jogador = verificarJogadas(matriz, Jogadores, token, jogador, coluna, linha, numero_jogadas);
            dicasJogada(matriz, Jogadores, token);
            continue;
        }
        clean_buffer();
        puts("");
        printf("Jogador %d introduza a coluna (letra): ", jogador + 1);
        scanf("%c", &coluna);
        clean_buffer();
        printf("Jogador %d introduza a linha(numero): ", jogador + 1);
        scanf("%d", &linha);
        // Verifica as jogadas e troca para o jogador seguinte
        jogador = verificarJogadas(matriz, Jogadores, token, jogador, coluna, linha, numero_jogadas); // Chama a funcao VerificarJogadas
    } while (jogador < 2 && numero_jogadas[2]); // Ciclo infinito que e quebravel caso se verifique que haja um vencedor nas funcoes de verificar
}

// Escolher os tokens de ambos os jogadores
void escolherTokens(Jogador Jogadores[2], char token[2]) {
    int i;

    // Fazer a escolha dos tokens dos jogadores 
    for (i = 0; i < 2; ++i) {
        printf("Qual e o token do(a) %s? ", Jogadores[i].nome);
        scanf("%c", &token[i]);
        if (token[1] == token[0]) {
            printf("Os tokens tem de ser diferentes. %s escolha outro token valido\n", Jogadores[1].nome);
            clean_buffer();
            --i;
            continue;
        }
        clean_buffer();
    }
    puts("");
}

// Atraves das estruturas iremos dar nomes aos jogadores
void nomes(Jogador Jogadores[2], int contador, int computador) {
    int i;

    clean_buffer();
    for (i = 0; i < 2; ++i) {
        // Escolher um nome a escolha para o computador
        if (computador == 1 & i == 1) { // Se for a vez do computador escolhemos o nome
            printf("Qual o nome que quer dar ao computador? ");
            lerString(Jogadores[i].nome, MAX_CARACTERES);
            continue;
        }
        // Escolher os nomes para os jogadores
        printf("Qual o nome do jogador %d? ", i + 1);
        lerString(Jogadores[i].nome, MAX_CARACTERES);
        Jogadores[i].pontos = 0;
        Jogadores[i].jogos = 0;
    }
}

void jogo(int matriz[][TAMANHOMATRIZ], Jogador Jogadores[2], int linha, char coluna, int computador) { // Procedimento onde e realizado todo o jogo
    char token[2];
    int contador = 0;

    criarMatriz(matriz);
    nomes(Jogadores, contador, computador);
    escolherTokens(Jogadores, token);
    imprimirMatriz(matriz, token);
    pedirJogada(matriz, Jogadores, token, computador);
}

void lerFicheiro(Jogador Jogadores[2]) { // Procedimento onde se le o ficheiro binario
    int i = 0;

    FILE *ficheiro = fopen(FICHEIRO, "rb");

    for (i = 0; i < 2; ++i) {
        fread(&Jogadores[i], sizeof (Jogador), 1, ficheiro);
    }
    fclose(ficheiro);
    puts("Ficheiro lido.");
    puts(" ");
}

void guardarFicheiro(Jogador Jogadores[2], int contador) { // Procedimento para guardar os dados existentes no ficheiro

    int i;
    for (i = 0; i < 2; ++i) {
        Jogadores[i].jogos = contador;
    }
    FILE *file = fopen(FICHEIRO, "wb");

    for (i = 0; i < 2; ++i) {
        fwrite(&Jogadores[i], sizeof (Jogador), 1, file);
    }
    fclose(file);
    puts(" ");
    printf("Ficheiro guardado");
    puts(" ");
}

void estatisticas(Jogador Jogadores[2], int contador) {
    int i;

    FILE *ficheiro = fopen(FICHEIRO, "rb");
    for (i = 0; i < 2; ++i) {
        printf("Nome do jogador: %s\n Pontos: %d\n Jogos realizados: %d\n", Jogadores[i].nome, Jogadores[i].pontos, Jogadores[i].jogos);
    }
    fclose(ficheiro);
    puts("Estatisticas Lidas!");
    guardarFicheiro(Jogadores, contador);
    puts("");
}
