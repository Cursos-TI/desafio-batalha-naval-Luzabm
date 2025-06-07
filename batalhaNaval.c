#include <stdio.h>

#define SIZE 10       // Tamanho do tabuleiro
#define SHIP_SIZE 3   // Tamanho fixo dos navios

int main() {
    // Inicializa o tabuleiro com água (0)
    int tabuleiro[SIZE][SIZE] = {0};

    // Posicionamento dos navios
    // Navio horizontal: linha 2, coluna 3 (0-based)
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 3;

    // Navio vertical: linha 5, coluna 6 (0-based)
    int linhaNavioVertical = 5;
    int colunaNavioVertical = 6;

    // Posiciona navio horizontal no tabuleiro
    for (int i = 0; i < SHIP_SIZE; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
        printf("Navio horizontal parte %d em coordenada: (%d, %d)\n",
               i+1, linhaNavioHorizontal, colunaNavioHorizontal + i);
    }

    // Posiciona navio vertical no tabuleiro
    for (int i = 0; i < SHIP_SIZE; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3;
        printf("Navio vertical parte %d em coordenada: (%d, %d)\n",
               i+1, linhaNavioVertical + i, colunaNavioVertical);
    }

    // Exibe o tabuleiro completo
    printf("\nTabuleiro (0 = água, 3 = navio):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

