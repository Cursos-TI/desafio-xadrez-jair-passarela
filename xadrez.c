#include <stdio.h>

// Função recursiva para mover a torre até a casa 5 à direita
void movertorre(int passo){
    if (passo > 5 ) return;  // Condição de parada da recursão

    printf("torre move casa %d a direita\n", passo);  // Exibe o movimento atual
    movertorre(passo + 1);  // Chamada recursiva incrementando o passo
}

// Função recursiva para mover a rainha até a casa 8 à esquerda
void moverrainha(int passorainha){
    if (passorainha > 8 ) return;  // Condição de parada

    printf("rainha: casa %d a esquerda\n", passorainha);  // Exibe o movimento
    moverrainha(passorainha + 1);  // Chamada recursiva incrementando o passo
}

// Função recursiva para mover o bispo na diagonal direita até linha/coluna 5
void moverbispo(int linha, int coluna){
    if (linha > 5 || coluna > 5) {  // Condição de parada (fora do tabuleiro)
        return;
    }
    printf("bispo move casa %d diagonal direita\n", linha);  // Exibe movimento (linha = passo diagonal)
    moverbispo(linha + 1, coluna + 1);  // Recursão avançando diagonalmente
}

// Função que simula o movimento do bispo usando loops aninhados (linha e coluna)
void moverBispoLoops() {
    printf("\nBispo com loops aninhados:\n");

    for (int linha = 1; linha <= 5; linha++) {
        for (int coluna = 1; coluna <= 5; coluna++) {
            if (linha == coluna) {  // Movimento somente na diagonal principal
                printf("bispo: linha %d coluna %d diagonal direita\n", linha, coluna);
            }
        }
    }
}

// Função para simular o movimento do cavalo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    for (int movimento = 1; movimento <= 1; movimento++) {  // Loop só para efeito, executa uma vez
        int passo = 1;

        while (passo <= 2) {  // Cavalo sobe 2 casas para cima
            printf("cavalo: casa %d cima\n", passo);
            passo++;
        }

        // Após subir duas casas, o cavalo move 1 casa para a direita
        printf("cavalo: casa 1 direita\n");
    }
}

int main()
{
    movertorre(1);  // Inicia movimento da torre a partir da casa 1
    printf("\n");
    moverrainha(1);  // Inicia movimento da rainha a partir da casa 1
    printf("\n");
    moverbispo(1,1);  // Inicia movimento do bispo na diagonal a partir da posição (1,1)
    printf("\n");
    moverBispoLoops();  // Mostra movimento do bispo usando loops aninhados
    printf("\n");
    moverCavalo();  // Mostra o movimento do cavalo
    printf("\n");

    return 0;
}