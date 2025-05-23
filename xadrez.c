#include <stdio.h>

int main() {
    // Definição do número de casas que cada peça irá mover
    const int torresMovimento = 3; // Torre se moverá 3 casas para a direita
    const int bispoMovimento = 5;    // Bispo se moverá 5 casas na diagonal para cima e à direita
    const int rainhaMovimento = 8;    // Rainha se moverá 8 casas para a esquerda

    // Movimentação da Torre usando um loop for
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < torresMovimento; i++) {
        printf("Direita\n"); // Imprimindo a direção do movimento da Torre
    }
    
    // Movimentação do Bispo usando um loop while
    printf("\nMovimentação do Bispo:\n");
    int j = 0;
    while (j < bispoMovimento) {
        printf("Cima, Direita\n"); // Imprimindo a direção do movimento do Bispo
        j++;
    }

    // Movimentação da Rainha usando um loop do-while
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n"); // Imprimindo a direção do movimento da Rainha
        k++;
    } while (k < rainhaMovimento);

    return 0; // Finalizando o programa
}