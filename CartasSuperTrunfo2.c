#include <stdio.h>

typedef struct {
    char estado[30];
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaCidade;

int main() {
    // Carta 2: Rio de Janeiro
    CartaCidade carta2 = {
        "B",                  // Estado
        "B02",               // Código
        "Rio de Janeiro",    // Nome da cidade
        12326000,            // População
        2455.11,             // Área em km²
        699.28,              // PIB em bilhões de reais
        60                   // Pontos turísticos
    };

    // Exibindo os dados da carta
    printf("=== Carta 2 ===\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}