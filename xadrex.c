#include <stdio.h>

//Recursividade para o movimento da Torre.
void MovT (int casas1)
{
    if (casas1 > 0)
    {
        printf("Direira!\n");
        MovT(casas1 - 1);
    }    
}

//Recursividade para o movimento do Bispo.
void MovB (int casas2)
{
    if (casas2 > 0)
    {
        printf("Cima, Direita!\n");
        MovB(casas2 - 1);
    }
}

//Recursividade para o movimento da Rainha.
void MovR (int casas3) 
{   
    if (casas3 > 0)
    {
        printf("Esquerda\n");
        MovT(casas3 - 1);
    }   
}


int main () { 
   
    printf("Bem-vindo ao jogo de xadrex !!!\n");
    printf("\n");
    

// Movimento da Torre - 5 casas para a direita
    printf("Movimento da Torre:\n");
    MovT(5);
    printf("\n");

// Movimento do Bispo - 5 casas para cima e direta
    printf("Movimento do Bispo: \n");
    MovB(5);
    printf("\n");


//Movimento da Rainha - 8 casas para esquerda
    printf("Movimento da Rainha\n");
    MovT(8);
    printf("\n");

//Movimento do Cavalo - 2 casas para baixo e uma casa para esquerda

    int C, L;
    
    printf("Movimento do cavalo: \n");
    
    for(C = 1; C <= 2; C++) 
    {
        while (L < C)
        {
            printf("cima!\n");
            L++;
        }
    }
    {   
        printf("Esquerda!\n");
    }

    return 0;
}
