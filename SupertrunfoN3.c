#include<stdio.h>

int main(){
    char state1, state2;
    char cod_carta1[4], cod_carta2[4], cidade1[50], cidade2[50];
    int pontos_turisticos1, pontos_turisticos2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, dp1, dp2, pibpc1, pibpc2, superpoder1, superpoder2;
    unsigned long int maiorpopulacao, maiorarea, maiorpib, maiorpontoturistico, maiordensidade, maiorpibpc, maiorsuperpoder;
    
    printf("CIDADE 1\n");

//Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado: ");
    scanf(" %c", &state1);

//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite qual é a população total: ");
    scanf("%u", &populacao1);

//A área da cidade em quilômetros quadrados
    printf("Digite qual é a área total da cidade: ");
    scanf("%f", &area1);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");
    printf("CIDADE 2\n");

//Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado: ");
    scanf(" %c", &state2);

//A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite qual é a população total: ");
    scanf("%u", &populacao2);

//A área da cidade em quilômetros quadrados
    printf("Digite qual é a área total da cidade: ");
    scanf("%f", &area2);

    printf("Digite qual é o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &pontos_turisticos2);

    dp1 = populacao1 / area1;
    pibpc1 = pib1 / populacao1;
    dp2 = populacao2 / area2;
    pibpc2 = pib2 / populacao2;

    printf("Cidade 1:\n");
    printf("Estado: %c\n", state1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População total: %u\n", populacao1);
    printf("Área total da cidade: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("A densidade populacional da cidade 1 é: %f\n", dp1);
    printf("O PIB percapita da cidade 1 é: %f\n", pibpc1);
    
    printf("Cidade 2: \n");
    printf("Estado: %c\n", state2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População total: %u\n", populacao2);
    printf("Área total da cidade: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("A densidade populacional da cidade 1 é: %f\n", dp2);
    printf("O PIB percapita da cidade 1 é: %f\n", pibpc2);
    
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpc1 - dp1;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpc2 - dp2;

    //Comparações
    maiorpopulacao = populacao1 > populacao2;
    maiorarea = area1 > area2;
    maiorpib = pib1 > pib2;
    maiorpontoturistico = pontos_turisticos1 > pontos_turisticos2;
    maiorpibpc = pibpc1 > pibpc2;
    maiordensidade = dp1 < dp2;
    maiorsuperpoder = superpoder1 > superpoder2;

    printf("\n");
    printf("Comparações:\n");
    printf("População: Carta 1 venceu %u\n", maiorpopulacao);
    printf("Área: Carta 1 venceu %u\n", maiorarea);
    printf("PIB: Carta 1 venceu %u\n", maiorpib);
    printf("Pontos turísticos: Carta 1 venceu %u\n", maiorpontoturistico);
    printf("PIB Per capita: Carta 1 venceu %u\n", maiorpibpc);
    printf("Densidade populacional: Carta 1 venceu %u\n", maiordensidade);
    printf("Super Poder: Carta 1 venceu %u\n", maiorsuperpoder);

    return 0;
}