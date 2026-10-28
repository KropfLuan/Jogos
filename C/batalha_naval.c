#include <stdio.h>

int main (){

    int c [10] = {0,1,2,3,4,5,6,7,8,9,}; // Declaração dos números para as linhas
    char l [10] = {'A','B','C','D','E','F','G','H','I','J'}; // Declaração das letras para as colunas
    int tabuleiro[10][10] = {0}; // Declaração e inicialização do tabuleiro 10x10
    int navio = 3;
    // Navios são representados pelo número 3 no tabuleiro 

    tabuleiro[9][4] = 3; // Exemplo de posicionamento de um navio na posição E9
    tabuleiro[9][5] = 3; // Exemplo de posicionamento de um navio na posição F9
    tabuleiro[9][6] = 3; // Exemplo de posicionamento de um navio na posição G9
    //Navio na horizontal   

    tabuleiro[4][7] = 3; // Exemplo de posicionamento de um navio na posição H4
    tabuleiro[5][7] = 3; // Exemplo de posicionamento de um navio na posição H5
    tabuleiro[6][7] = 3; // Exemplo de posicionamento de um navio na posição H6
    // Navio na vertical

    for(int i = 0; i < 3; i++){
        tabuleiro[i][i] = navio; // Marca a diagonal principal com navios, pois i == j
        tabuleiro[i][9-i] = navio; // Marca a diagonal secundária com navios, pois i + j == 9)
    }// Navios nas diagonais

    // Imprimir o tabuleiro com linhas e colunas rotuladas

    printf ("   "); // Espaço inicial para alinhar com os números das linhas
    for (int i = 0; i < 10; i++){
        printf (" %c ", l [i]);
    } // Imprime as letras no topo do tabuleiro

    printf ("\n");

    for (int linha = 0; linha < 10; linha++){
        printf ("%2d ", c [linha]); // Imprime os números na lateral do tabuleiro
        for (int coluna = 0; coluna < 10; coluna++){
            printf ("%2d ", tabuleiro [linha][coluna]);
        } 
        printf("\n"); // Pula para a próxima linha após imprimir uma linha completa do tabuleiro 
    
    }
    return 0;
}