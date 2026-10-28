#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Super Trunfo!\n");
    printf("Este é um jogo de cartas onde o objetivo é vencer o adversário com a melhor carta.\n");
    printf("Cada carta possui atributos como População, PIB, Área e Número de pontos turísticos.\n");
    
    int opcaoMenu;
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;

    char Estado1[50] = "A";
    char CódigoCarta1[10] = "A01";
    char NomeCidade1[50] = "São_Paulo";
    unsigned long int populacao1 = 12325000;
    float Área1 = 1521.11;
    float PIB1 = 699280000000;
    int pontosTuristicos1 = 50;
    float densidadePopulacional1; 
    float PIBperCapita1;
    float SuperPoder1;

    char Estado2[50] = "B";
    char CódigoCarta2[10] = "B02";
    char NomeCidade2[50] = "Rio_de_Janeiro";
    unsigned long int populacao2 = 6748000;
    float Área2 = 1200.25;
    float PIB2 = 300500000000;
    int pontosTuristicos2 = 30;
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

    // Calcula a densidade populacional, PIB per capita e o Super Poder da primeira carta
    densidadePopulacional1 = (float) (populacao1 / Área1);
    PIBperCapita1 = (float) PIB1 / populacao1;
    SuperPoder1 = (float) populacao1 + Área1 + PIB1 + pontosTuristicos1;
    
    // Calcula a densidade populacional, PIB per capita e o Super Poder da segunda carta
    densidadePopulacional2 = (float) populacao2 / Área2;
    PIBperCapita2 = (float) PIB2 / populacao2;
    SuperPoder2 = (float) populacao2 + Área2 + PIB2 + pontosTuristicos2;
    // Menu do jogo 
    printf("Menu do jogo:\n");
    printf("Escolha uma opção:\n");
    printf("1.Exibir atributos das cartas\n");
    printf("2. Comparar cartas\n");
    printf("3. Sair\n");
    scanf("%d", &opcaoMenu);


    switch (opcaoMenu) {
        case 1:
// Exibe os detalhes das cartas registradas
            printf("Aqui estão os detalhes das cartas registradas:\n");
            printf("\nCarta 1:\n");
            printf("População: %lu\n", populacao1);
            printf("Área: %.2f km²\n", Área1);
            printf("PIB: %.2f bilhões de reais\n", PIB1);
            printf("Número de pontos turísticos: %d\n", pontosTuristicos1);
            printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional1);
            printf("PIB per capita: %f reais\n", PIBperCapita1);
            printf("Super Poder: %f\n", SuperPoder1);

            printf("\nCarta 2:\n");
            printf("População: %lu\n", populacao2);
            printf("Área: %.2f km²\n", Área2);
            printf("PIB: %.2f bilhões de reais\n", PIB2);
            printf("Número de pontos turísticos: %d\n", pontosTuristicos2);
            printf("Densidade populacional: %.2f habitantes por km²\n", densidadePopulacional2);
            printf("PIB per capita: %f reais\n", PIBperCapita2);
            printf("Super Poder: %f\n", SuperPoder2);
            break;
        case 2: // Comparar cartas
            printf("\nComparar cartas selecionado.\n");
            printf("Escolha o atributo para comparar:\n");
            printf("P. População\n");
            printf("A. Área\n");
            printf("B. PIB\n");
            printf("N. Número de pontos turísticos\n");
            printf("D. Densidade populacional\n");
            scanf(" %c", &primeiroAtributo);
            // Usando switch para escolher o primeiro atributo a ser comparado
        switch (primeiroAtributo) {
            case 'P':
            case 'p':
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            printf ("Você escolheu população.\n");
                break;
            case 'A':
            case 'a':
            resultado1 = Área1 > Área2 ? 1 : 0;
            printf ("Você escolheu área.\n");
                break;
            case 'B':
            case 'b':
            resultado1 = PIB1 > PIB2 ? 1 : 0;
            printf ("Você escolheu PIB.\n");
                break;
            case 'N':
            case 'n':
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            printf ("Você escolheu pontos turístico.\n");
                break;
            case 'D':
            case 'd':
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            printf ("Você escolheu densidade populacional.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }   
            printf("Escolha o segundo atributo para comparar:\n");
            printf("P. População\n");
            printf("A. Área\n");
            printf("B. PIB\n");
            printf("N. Número de pontos turísticos\n");
            printf("D. Densidade populacional\n");
            scanf(" %c", &segundoAtributo);
            // Switch para escolha do segundo atributo

            if (segundoAtributo == primeiroAtributo) {
                printf("Você não pode escolher o mesmo atributo para comparar. Tente novamente.\n");
            } else {
                switch (segundoAtributo) { 
            case 'P':
            case 'p':
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            printf ("Você escolheu população.\n");
                break;
            case 'A':
            case 'a':
            resultado2 = Área1 > Área2 ? 1 : 0;
            printf ("Você escolheu área.\n");
                break;
            case 'B':
            case 'b':
            resultado2 = PIB1 > PIB2 ? 1 : 0;
            printf ("Você escolheu PIB.\n");
                break;
            case 'N':
            case 'n':
            resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            printf ("Você escolheu pontos turístico.\n");
                break;
            case 'D':
            case 'd':
            resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            printf ("Você escolheu densidade populacional.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
            }
            // Determina o vencedor com base nos resultados das comparações
            printf("%s VS %s \n", NomeCidade1, NomeCidade2);
            printf("Os atributos comparados são  %c e %c\n", primeiroAtributo, segundoAtributo);
            if (resultado1 && resultado2) {
                printf("%s vence!\n", NomeCidade1);
            } else if (resultado1 != resultado2) {
                printf("Empate!\n");
            } else {
                printf("%s vence!\n", NomeCidade2);
            }
            break;
        case 3: // Sair do jogo
            printf("Sair selecionado. Encerrando o jogo.\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }
    return 0;
    }
}