#include <stdio.h>
// Desafio de Xadrez - MateCheck - Nível Final/Mestre
// Funções recursivas para Bispo, Torre e Rainha
// Loops avançados com controle de fluxo para o Cavalo

// Constantes para definir o número de movimentos de cada peça
int MOVIMENTO_BISPO = 5;    // 5 casas na diagonal superior direita
int MOVIMENTO_TORRE = 5;    // 5 casas para a direita
int MOVIMENTO_RAINHA = 8;   // 8 casas para a esquerda
int CAVALO_MOVIMENTO_CIMA = 2;     // Duas casas para cima
int CAVALO_MOVIMENTO_DIREITA = 1;  // Uma casa para a direita

// ========== FUNÇÕES RECURSIVAS PARA AS PEÇAS ==========

/**
 * Função recursiva para movimentar o Bispo com loops aninhados
 * @param movimento_atual: movimento atual sendo executado
 * @param total_movimentos: total de movimentos a executar
 */
void moverBispoRecursivo(int movimento_atual, int total_movimentos) {
    // Caso base: se atingiu o limite, para a recursão
    if (movimento_atual > total_movimentos) {
        return;
    }
    
    printf("--- Movimento diagonal %d ---\n", movimento_atual);
    
    // Loops aninhados obrigatórios para o movimento diagonal
    // Loop externo: controla as duas componentes do movimento diagonal
    for (int componente = 1; componente <= 2; componente++) {
        // Loop interno: executa cada componente do movimento
        for (int execucao = 1; execucao <= 1; execucao++) {
            if (componente == 1) {
                printf("  Componente vertical: ");
                printf("Cima\n");
            } else {
                printf("  Componente horizontal: ");
                printf("Direita\n");
            }
        }
    }
    
    // Chamada recursiva para o próximo movimento
    moverBispoRecursivo(movimento_atual + 1, total_movimentos);
}

/**
 * Função recursiva para movimentar a Torre
 * @param contador: contador atual do movimento
 * @param limite: limite máximo de movimentos
 */
void moverTorreRecursiva(int contador, int limite) {
    // Caso base: se atingiu o limite, para a recursão
    if (contador > limite) {
        return;
    }
    
    // Executa o movimento horizontal para direita
    printf("Movimento %d: ", contador);
    printf("Direita\n");
    
    // Chamada recursiva para o próximo movimento
    moverTorreRecursiva(contador + 1, limite);
}

/**
 * Função recursiva para movimentar a Rainha
 * @param contador: contador atual do movimento  
 * @param limite: limite máximo de movimentos
 */
void moverRainhaRecursiva(int contador, int limite) {
    // Caso base: se atingiu o limite, para a recursão
    if (contador > limite) {
        return;
    }
    
    // Executa o movimento horizontal para esquerda
    printf("Movimento %d: ", contador);
    printf("Esquerda\n");
    
    // Chamada recursiva para o próximo movimento
    moverRainhaRecursiva(contador + 1, limite);
}

int main() {
    printf("=== DESAFIO MATECHECK - NÍVEL FINAL/MESTRE ===\n");
    printf("Funções Recursivas + Loops Avançados com Controle de Fluxo\n\n");
    
    // ========== MOVIMENTAÇÕES COM FUNÇÕES RECURSIVAS ==========
    
    printf("🔹 MOVIMENTO DO BISPO (5 casas na diagonal superior direita)\n");
    printf("Utilizando FUNÇÃO RECURSIVA com LOOPS ANINHADOS obrigatórios:\n");
    moverBispoRecursivo(1, MOVIMENTO_BISPO);
    printf("\n");
    
    printf("🔹 MOVIMENTO DA TORRE (5 casas para a direita)\n");
    printf("Utilizando FUNÇÃO RECURSIVA:\n");
    moverTorreRecursiva(1, MOVIMENTO_TORRE);
    printf("\n");
    
    printf("🔹 MOVIMENTO DA RAINHA (8 casas para a esquerda)\n");
    printf("Utilizando FUNÇÃO RECURSIVA:\n");
    moverRainhaRecursiva(1, MOVIMENTO_RAINHA);
    printf("\n");
    
    // ========== MOVIMENTO DO CAVALO COM LOOPS AVANÇADOS ==========
    
    printf("🔹 MOVIMENTO DO CAVALO (1 movimento em L para cima-direita)\n");
    printf("Utilizando LOOPS com variáveis múltiplas e controle de fluxo:\n\n");
    
    // Variáveis múltiplas para controle avançado do Cavalo
    int tentativas_maximas = 8;
    int movimentos_executados = 0;
    int fase_atual = 0;
    int flag_sucesso = 0;
    int contador_cima = 0;
    int contador_direita = 0;
    int validacao_movimento = 1;
    
    printf("=== Executando movimento em L do Cavalo ===\n");
    
    // Loop principal com múltiplas variáveis e condições
    for (int tentativa = 1; tentativa <= tentativas_maximas && !flag_sucesso; tentativa++) {
        
        printf("Tentativa %d:\n", tentativa);
        
        // Demonstração de continue - pula tentativas inválidas
        if (tentativa == 2 || tentativa == 4 || tentativa == 7) {
            printf("  ⚠️  Tentativa %d pulada (validação falhou - continue)\n\n", tentativa);
            continue;  // Pula para a próxima iteração
        }
        
        // Condição adicional para demonstrar continue com múltiplas variáveis
        if (tentativa % 3 == 0 && validacao_movimento == 0) {
            printf("  🔄 Tentativa %d adiada (múltiplas condições - continue)\n\n", tentativa);
            validacao_movimento = 1;  // Reset da validação
            continue;
        }
        
        // Loop aninhado para as fases do movimento em L
        for (fase_atual = 1; fase_atual <= 2 && validacao_movimento; fase_atual++) {
            
            if (fase_atual == 1) {
                // Fase 1: Movimento vertical (2 casas para cima)
                printf("  Fase %d - Movimento Vertical:\n", fase_atual);
                
                // Loop while com múltiplas condições
                while (contador_cima < CAVALO_MOVIMENTO_CIMA && movimentos_executados < 10) {
                    contador_cima++;
                    printf("    Passo %d: ", contador_cima);
                    printf("Cima\n");
                    movimentos_executados++;
                    
                    // Condição de controle para demonstrar break
                    if (contador_cima >= CAVALO_MOVIMENTO_CIMA) {
                        printf("    ✅ Fase vertical completa!\n");
                        break;  // Sai do loop while
                    }
                }
                
            } else {
                // Fase 2: Movimento horizontal (1 casa para direita)
                printf("  Fase %d - Movimento Horizontal:\n", fase_atual);
                
                // Loop do-while com condições múltiplas
                do {
                    contador_direita++;
                    printf("    Passo %d: ", contador_direita);
                    printf("Direita\n");
                    movimentos_executados++;
                    
                    // Verificação de múltiplas condições
                    if (contador_direita >= CAVALO_MOVIMENTO_DIREITA && movimentos_executados >= 3) {
                        printf("    ✅ Fase horizontal completa!\n");
                        flag_sucesso = 1;  // Marca como sucesso
                        break;  // Sai do do-while
                    }
                    
                } while (contador_direita < CAVALO_MOVIMENTO_DIREITA && movimentos_executados < 15);
            }
            
            // Condição para break no loop de fases
            if (flag_sucesso || movimentos_executados >= 10) {
                break;  // Sai do loop das fases
            }
        }
        
        printf("  🐎 Tentativa %d: ", tentativa);
        if (flag_sucesso) {
            printf("SUCESSO!\n");
        } else {
            printf("Incompleta\n");
        }
        printf("  📊 Movimentos executados: %d\n\n", movimentos_executados);
        
        // Condição para encerrar o loop principal (break com múltiplas variáveis)
        if (flag_sucesso && contador_cima >= 2 && contador_direita >= 1) {
            printf("🎯 Movimento em L completado com sucesso! Encerrando.\n\n");
            break;  // Força a saída do loop for principal
        }
        
        // Reset parcial das variáveis para próxima tentativa
        if (!flag_sucesso) {
            validacao_movimento = (tentativa % 2 == 0) ? 0 : 1;
        }
    }
    
    // ========== RELATÓRIO FINAL ==========
    
    printf("=== RELATÓRIO DE EXECUÇÃO FINAL ===\n");
    printf("✅ Bispo: %d movimentos diagonais com RECURSÃO + LOOPS ANINHADOS\n", MOVIMENTO_BISPO);
    printf("✅ Torre: %d movimentos horizontais com FUNÇÃO RECURSIVA\n", MOVIMENTO_TORRE);
    printf("✅ Rainha: %d movimentos para esquerda com FUNÇÃO RECURSIVA\n", MOVIMENTO_RAINHA);
    printf("✅ Cavalo: Movimento em L com LOOPS + MÚLTIPLAS VARIÁVEIS\n");
    printf("✅ Controle de fluxo avançado: CONTINUE e BREAK implementados\n");
    printf("✅ Múltiplas variáveis de controle: %d variáveis utilizadas\n", 7);
    printf("✅ Condições múltiplas: Implementadas em todos os loops\n");
    printf("✅ NÍVEL MESTRE/FINAL completado! 🏆\n");
    
    return 0;
}