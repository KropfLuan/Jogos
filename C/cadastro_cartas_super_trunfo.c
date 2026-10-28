#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Este é um jogo de cartas onde o objetivo é vencer o adversário com a melhor carta.\n");
    printf("Cada carta possui atributos como População, PIB, Área e Número de pontos turísticos.\n");
    
    char Estado1[50];
    char CódigoCarta1[10];
    char NomeCidade1[50];
    unsigned long int populacao1;
    float Área1;
    float PIB1;
    int pontosTuristicos1;
    float densidadePopulacional1; 
    float PIBperCapita1;
    float SuperPoder1;

    char Estado2[50];
    char CódigoCarta2[10];
    char NomeCidade2[50];
    unsigned long int populacao2;
    float Área2;
    float PIB2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PIBperCapita2;
    float SuperPoder2;
    /*
    Infomarções das cartas para serem adicionadas
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699280000000 bilhões de reais
    Número de Pontos Turísticos: 50
 
    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Rio de Janeiro
    População: 6748000
    Área: 1200.25 km²
    PIB: 300500000000 bilhões de reais
    Número de Pontos Turísticos: 30 
    */
    printf("Vamos registrar a sua primeira carta!\n");
    // Solicita os dados da primeira carta do usuário
    printf("Estado: ");
    scanf(" %s", &Estado1);
    
    printf("Código da Carta(Ex: A01, B03): ");
    scanf(" %s", &CódigoCarta1);
    
    printf("Nome da Cidade: ");
    scanf(" %s", NomeCidade1);
    
    printf("População: ");
    scanf("%d", &populacao1);
    
    printf("Área(em km²): ");
    scanf("%f", &Área1);
    
    printf("PIB: ");
    scanf("%f", &PIB1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional1 = (float) (populacao1 / Área1);
    PIBperCapita1 = (float) PIB1 / populacao1;
    //Calcula o Super Poder como a soma dos atributos
    SuperPoder1 = (float) populacao1 + Área1 + PIB1 + pontosTuristicos1;
    
    
    printf("Sua carta foi registrada com sucesso!\n");
// Solicita os dados da segunda carta do usuário
    printf("Agora vamos registrar a segunda carta\n");
    printf("Estado: ");
    scanf(" %s", &Estado2);

    printf("Código da Carta(Ex: A01, B03): ");
    scanf(" %s", &CódigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %s", NomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &Área2);
    
    printf("PIB: ");
    scanf("%f", &PIB2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade populacional e o PIB per capita
    densidadePopulacional2 = (float) populacao2 / Área2;
    PIBperCapita2 = (float) PIB2 / populacao2;
    //Calcula o Super Poder como a soma dos atributos
    SuperPoder2 = (float) populacao2 + Área2 + PIB2 + pontosTuristicos2;
    
    printf("\nSua carta foi registrada com sucesso!\n");
// Exibe os detalhes das cartas registradas
    printf("Aqui estão os detalhes das cartas registradas:\n");
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CódigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Área1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional1);
    printf("PIB per capita: %f reais\n", PIBperCapita1);
    printf("Super Poder: %f\n", SuperPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CódigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
    printf("PIB per capita: %f reais\n", PIBperCapita2);
    printf("Super Poder: %f\n", SuperPoder2);

    // Compara os Super Poderes das cartas
    printf("\nComparação das cartas:\n");
    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", Área1 > Área2);
    printf("PIB: Carta 1 venceu %d\n", PIB1 > PIB2);
    printf("Pontos turísticos: Carta 1 venceu %d\n", 
        pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu %d\n", densidadePopulacional1 < densidadePopulacional2);
        // Densidade populacional, quem tem a menor ganha
    printf("PIB er Capita: Carta 1 venceu %d\n", PIBperCapita1 > PIBperCapita2);
    printf("Super Poder: Carta 1 venceu %d\n", SuperPoder1 > SuperPoder2);

    printf("\nObrigado por jogar Super Trunfo!\n");
    
    return 0;
}