#include <stdio.h>

int main () { 
   
    printf("Bem-vindo ao jogo de xadrex !!!\n");

// Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int T = 0; T < 5;  T++)
            {
        printf("Direita!\n");
    }

    printf("\n");

    int B = 0;
// Movimento do Bispo - 5 casas para cima e direta
    printf("Movimento do Bispo: \n");
    do
    {
        printf("Cima, direita!\n");
        B++;
    } while (B <= 5);

    printf("\n");

//Movimento da Rainha - 8 casas para esquerda

    int R = 0;
    printf("Movimento da Rainha: \n");
    while (R <= 8)
    {
        printf("Esquerda!\n");
        R++;
    }

    return 0;
}