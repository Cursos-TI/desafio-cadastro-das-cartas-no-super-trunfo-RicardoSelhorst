#include <stdio.h>
#include <string.h>

// Definindo a estrutura para representar uma carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para comparar as cartas
Carta comparar_cartas(Carta carta1, Carta carta2, int atributo) {
    Carta vencedor;
    // Atributos a serem comparados: 1 - População, 2 - Área, 3 - PIB, 4 - Pontos turísticos, 5 - Densidade demográfica

    switch(atributo) {
        case 1:  // Comparando População
            if (carta1.populacao > carta2.populacao) {
                vencedor = carta1;
            } else if (carta1.populacao < carta2.populacao) {
                vencedor = carta2;
            } else {
                printf("Empate!\n");
                vencedor = carta1;  // Retorna qualquer uma, já que é empate
            }
            break;
        case 2:  // Comparando Área
            if (carta1.area > carta2.area) {
                vencedor = carta1;
            } else if (carta1.area < carta2.area) {
                vencedor = carta2;
            } else {
                printf("Empate!\n");
                vencedor = carta1;  // Retorna qualquer uma, já que é empate
            }
            break;
        case 3:  // Comparando PIB
            if (carta1.pib > carta2.pib) {
                vencedor = carta1;
            } else if (carta1.pib < carta2.pib) {
                vencedor = carta2;
            } else {
                printf("Empate!\n");
                vencedor = carta1;  // Retorna qualquer uma, já que é empate
            }
            break;
        case 4:  // Comparando Pontos turísticos
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                vencedor = carta1;
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                vencedor = carta2;
            } else {
                printf("Empate!\n");
                vencedor = carta1;  // Retorna qualquer uma, já que é empate
            }
            break;
        case 5:  // Comparando Densidade demográfica (menor valor vence)
            if (carta1.densidade_demografica < carta2.densidade_demografica) {
                vencedor = carta1;
            } else if (carta1.densidade_demografica > carta2.densidade_demografica) {
                vencedor = carta2;
            } else {
                printf("Empate!\n");
                vencedor = carta1;  // Retorna qualquer uma, já que é empate
            }
            break;
        default:
            printf("Atributo inválido!\n");
            vencedor = carta1;  // Retorna qualquer uma, já que houve erro
    }

    return vencedor;
}

int main() {
    // Criando cartas de exemplo
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 2055000.0, 200, 25.0};
    Carta carta2 = {"Argentina", 45000000, 2780400.0, 500000.0, 50, 17.9};
    
    int escolha;
    Carta vencedor;

    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    // Lendo a escolha do usuário
    printf("Digite o número correspondente à sua escolha: ");
    if (scanf("%d", &escolha) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    // Chamando a função para comparar as cartas
    vencedor = comparar_cartas(carta1, carta2, escolha);

    // Exibindo o resultado da comparação
    printf("\nComparando %s e %s pelo atributo: ", carta1.nome, carta2.nome);
    
    switch (escolha) {
        case 1:
            printf("População\n");
            break;
        case 2:
            printf("Área\n");
            break;
        case 3:
            printf("PIB\n");
            break;
        case 4:
            printf("Pontos turísticos\n");
            break;
        case 5:
            printf("Densidade demográfica\n");
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    printf("%s: ", carta1.nome);
    switch (escolha) {
        case 1:
            printf("%d\n", carta1.populacao);
            break;
        case 2:
            printf("%.2f\n", carta1.area);
            break;
        case 3:
            printf("%.2f\n", carta1.pib);
            break;
        case 4:
            printf("%d\n", carta1.pontos_turisticos);
            break;
        case 5:
            printf("%.2f\n", carta1.densidade_demografica);
            break;
    }

    printf("%s: ", carta2.nome);
    switch (escolha) {
        case 1:
            printf("%d\n", carta2.populacao);
            break;
        case 2:
            printf("%.2f\n", carta2.area);
            break;
        case 3:
            printf("%.2f\n", carta2.pib);
            break;
        case 4:
            printf("%d\n", carta2.pontos_turisticos);
            break;
        case 5:
            printf("%.2f\n", carta2.densidade_demografica);
            break;
    }

    if (vencedor.nome != NULL) {
        printf("A carta vencedora é: %s\n", vencedor.nome);
    }

    return 0;
}
