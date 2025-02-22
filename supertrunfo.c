#include <stdio.h>
 
int main(){
    int populacao = 1375000;
    float pib = 3;
    float area = 1127.946;
    char estado[50] = "A";
    char cidade[20] = "Joinville";
    char tipo[50] = "A01";
    int turi = 30;
 
    printf("Estado: %s\nCódigo da Carta: %s\n", estado, tipo);
    printf("Nome da cidade: %s\nPopulação: %d\n", cidade, populacao);
    printf("Area da Cidade: %2.f.11 km²\nPIB:%2.f.95 Bilhões de reais\n", area, pib);
    printf("Número de Pontos Turísticos: %d\n", turi);

}