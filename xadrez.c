#include <stdio.h>

int main() {
    // Definindo a quantidade de movimentos para cada peça
    const int bispo_moves = 5;
    const int torre_moves = 5;
    const int rainha_moves = 8;

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < bispo_moves; i++) {
        printf("Cima, Direita\n");  // Imprime a direção diagonal superior direita
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    int j = 0; // Variável para o loop while
    while (j < torre_moves) {
        printf("Direita\n");  // Imprime a direção direita
        j++;
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    int k = 0; // Variável para o loop do-while
    do {
        printf("Esquerda\n");  // Imprime a direção esquerda
        k++;
    } while (k < rainha_moves);

    return 0;
}
