#include <stdio.h>
 
int main(){
    float populacao = 1829225;
    float pib = 1927000000;
    float area = 4352777;
    char estado[50] = "B";
    char cidade[20] = "Curitiba";
    char codigo[50] = "B02";
    int turi = 20;
    float densidade = populacao / area;
    float capital= pib / populacao;
    printf("Estado: %s\nCódigo: %s\n", estado, codigo);
    printf("Nome da cidade: %s\nNúmero de habitantes: %2.f Milhões de habitantes\n", cidade, populacao);
    printf("Área da Cidade: %2.f km²\nPIB: %2.f Bilhões de reais\n", area, pib);
    printf("Número de Pontos Turísticos: %d\n", turi);
    printf("Densidade: %.3f hab/Km²\nCapital %.2f de reais\n", densidade, capital);


}