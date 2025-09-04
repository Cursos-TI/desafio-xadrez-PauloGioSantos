#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para definir o número de movimentos de cada peça
int MOVIMENTO_BISPO = 5;    // 5 casas na diagonal superior direita
int MOVIMENTO_TORRE = 5;    // 5 casas para a direita
int MOVIMENTO_RAINHA = 8;   // 8 casas para a esquerda

int main() {
    // Variáveis para controle dos loops
    int i, movimento;
    
    printf("=== DESAFIO MATECHECK - SIMULADOR DE MOVIMENTOS ===\n\n");
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Movimento do Bispo - Usando loop FOR
    printf("🔹 MOVIMENTO DO BISPO (5 casas na diagonal superior direita)\n");
    printf("Utilizando estrutura FOR:\n");
    
    for(i = 1; i <= MOVIMENTO_BISPO; i++) {
        printf("Movimento %d: ", i);
        printf("Cima\n");          // Movimento diagonal: cima + direita
        printf("Movimento %d: ", i);
        printf("Direita\n");
    }
    printf("\n");
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // MOVIMENTO DA TORRE - Usando loop WHILE
    printf("🔹 MOVIMENTO DA TORRE (5 casas para a direita)\n");
    printf("Utilizando estrutura WHILE:\n");
    
    movimento = 1;
    while(movimento <= MOVIMENTO_TORRE) {
        printf("Movimento %d: ", movimento);
        printf("Direita\n");
        movimento++;
    }
    printf("\n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // MOVIMENTO DA RAINHA - Usando loop DO-WHILE
    printf("🔹 MOVIMENTO DA RAINHA (8 casas para a esquerda)\n");
    printf("Utilizando estrutura DO-WHILE:\n");
    
    movimento = 1;
    do {
        printf("Movimento %d: ", movimento);
        printf("Esquerda\n");
        movimento++;
    } while(movimento <= MOVIMENTO_RAINHA);
    printf("\n");
    
    
    
    printf("\n=== RELATÓRIO DE EXECUÇÃO ===\n");
    printf("✅ Bispo: %d movimentos diagonais executados\n", MOVIMENTO_BISPO);
    printf("✅ Torre: %d movimentos horizontais executados\n", MOVIMENTO_TORRE);
    printf("✅ Rainha: %d movimentos para esquerda executados\n", MOVIMENTO_RAINHA);
    printf("✅ Todas as estruturas de repetição utilizadas: FOR, WHILE, DO-WHILE\n");
    printf("✅ Jogo executado com sucesso!\n");
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

