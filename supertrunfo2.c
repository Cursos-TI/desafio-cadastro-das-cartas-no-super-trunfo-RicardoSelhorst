#include <stdio.h>
 
int main(){
    int populacao = 1829225;
    float pib = 192.7;
    float area = 435.277;
    char estado[50] = "B";
    char cidade[20] = "Curitiba";
    char tipo[50] = "B02";
    int turi = 20;
 
    printf("Estado: %s\nCódigo da Carta: %s\n", estado, tipo);
    printf("Nome da cidade: %s\nPopulação: %d\n", cidade, populacao);
    printf("Area da Cidade: %2.f.277 km²\nPIB: %2.f.7 bilhões de reais\n", area, pib);
    printf("Número de Pontos Turísticos: %d\n", turi);
}