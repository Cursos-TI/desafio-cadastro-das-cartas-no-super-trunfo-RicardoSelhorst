#include <stdio.h>
 
int main(){
    float populacao = 1375000;
    float pib = 3000000000;
    float area = 1127946;
    char estado[50] = "A";
    char cidade[20] = "Joinville";
    char codigo[50] = "A01";
    int turi = 30;
    float densidade = populacao / area;
    float capital= pib / populacao;
    printf("Estado: %s\nCódigo: %s\n", estado, codigo);
    printf("Nome da cidade: %s\nNúmero de habitantes: %2.f Milhões de habitantes\n", cidade, populacao);
    printf("Área da Cidade: %2.f km²\nPIB: %2.f bilhões de reais\n", area, pib);
    printf("Número de Pontos Turísticos: %d\n", turi);
    printf("Densidade: %.3f hab/Km²\nCapital %.2f de reais\n", densidade, capital);

}
