#include <stdio.h>

int main(){

    printf("Desafio Xadrez!\n\n");

    int movBispo = 0;
    int movTorre = 0;
    int movRainha = 0;
    int movCavalo = 0;

    for (int movRainha = 0; movRainha < 8; movRainha++){
        printf("Esquerda (Rainha)\n");
    } //movimento da rainha para esquerda

    printf("\n");

    do{
        movBispo++;
        printf("Cima direita (Bispo)\n");
    } while (movBispo < 5);
    //movimento do bispo para cima direita (diagonal)

    printf("\n");

    while (movTorre <5){
        printf("Cima (Torre)\n");
        movTorre++;
    } //movimento da torre para cima

    printf("\n");

    for(movCavalo = 0; movCavalo < 1; movCavalo++){
        while(movCavalo < 2){
            printf("Baixo (Cavalo)\n");
            movCavalo++;
        }
        printf("Esquerda (Cavalo)\n");
    } //movimento do cavalo em L (2 para baixo e 1 para esquerda)
    
    return 0;
}