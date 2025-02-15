#include <stdio.h>

// Constantes para definir os limites de movimentação
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções recursivas para movimentação das peças
void moverBispo(int mov) {
    if (mov > 0) {
        printf("Diagonal Superior Direita\n");
        moverBispo(mov - 1);
    }
}

void moverTorre(int mov) {
    if (mov > 0) {
        printf("Direita\n");
        moverTorre(mov - 1);
    }
}

void moverRainha(int mov) {
    if (mov > 0) {
        printf("Esquerda\n");
        moverRainha(mov - 1);
    }
}

// Função para movimentação do cavalo em L utilizando loops aninhados
void moverCavalo() {
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main() {
    printf("Movimentação do Bispo:\n");
    moverBispo(BISPO_MOV);

    printf("\nMovimentação da Torre:\n");
    moverTorre(TORRE_MOV);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(RAINHA_MOV);

    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}