//Desafio Super Trunfo - Países (Nível Básico)
#include <stdio.h>

int main() {
//variáveis de cada atributo da cidade
    char estado1[15], estado2[15];
    char codigodacarta1[3], codigodacarta2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numdepontos1, numdepontos2;
    float densidade1, densidade2;
    float pibpercapida1, pibpercapita2;
    float superpoder1, superpoder2;

    printf("|Cadastro das Cartas SuperTrunfo - Países| \n");
    printf("Cadastre a Primeira Carta \n");

//cadastro das cartas
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Área da Cidade em Km²: \n");
    scanf("%f", &area1);

    printf("PIB da cidade (em Milhões de R$): \n");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &numdepontos1);
//segunda carta
    printf("Agora Cadastre a Segunda Carta\n");
    
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigodacarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Área da Cidade em Km²: \n");
    scanf("%f", &area2);

    printf("PIB da cidade (em Milhões de R$): \n");
    scanf("%f", &pib2);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &numdepontos2);

//cálculo das variáveis
    densidade1 = (float) populacao1 / area1;
    pibpercapida1 = (float) pib1 / populacao1;
//carta2  
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;  
//superpoder
    superpoder1 = (float) populacao1 + area1;
    superpoder1 = (float) pib1 + numdepontos1;
    superpoder1 = (float) densidade1 + pib1; 
    
    superpoder2 = (float) populacao2 + area2;
    superpoder2 = (float) pib2 + numdepontos2;
    superpoder2 = (float) densidade2 + pib2; 

//exibindo as cartas
    printf("Primeira Carta | Segunda Carta\n");
    printf("Estado: %s |Estado: %s\n", estado1, estado2);
    printf("Código id: %s |Código id: %s\n", codigodacarta1, codigodacarta2);
    printf("Cidade: %s |Cidade: %s\n", cidade1, cidade2);
    printf("População: %d |População: %d\n", populacao1, populacao2);
    printf("Área em Km²: %f |Área em Km²: %f\n", area1, area2);
    printf("PIB da Cidade: %f |PIB da Cidade: %f\n", pib1, pib2);
    printf("Número de Pontos Turísticos: %d |Número de Pontos Turísticos: %d\n", numdepontos1, numdepontos2);
    printf("Densidade Populacional: %f |Densidade Populacional: %f\n", densidade1, densidade2);
    printf("PIB per capita: %f |PIB per Capita: %f\n", pibpercapida1, pibpercapita2);
    printf("SuperPoder = %.2f |SuperPoder = %.2f\n", superpoder1, superpoder2);

//comparação das cartas
    printf("| Comparação das Cartas |\n");

    if (populacao1 > populacao2) {
        printf("População: Primeira Carta Venceu!\n");}
    else {
        printf("População: Segunda Carta Venceu!\n");}

    if (area1 > area1) {
        printf("Área: Primeira Carta Venceu!\n");}
    else {
        printf("Área: Segunda Carta Venceu!\n");}

    if (pib1 > pib2) {
        printf("PIB: Primeira Carta Venceu!\n");}
    else {
        printf("PIB: Segunda Carta Venceu!\n");}

    if (numdepontos1 > numdepontos2) {
        printf("Pontos Turísticos: Primeira Carta Venceu!\n");}
    else {
        printf("Pontos Turísticos: Segunda Carta Venceu!\n");}

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Primeira Carta Venceu!\n");}
    else {
        printf("Densidade Populacional: Segunda Carta Venceu!\n");}

    if (pibpercapida1 > pibpercapita2) {
        printf("PIB per capita: Primeira Carta Venceu!\n");}
    else {
        printf("PIB per Capita: Segunda Carta Venceu!\n");}

return 0;
}   