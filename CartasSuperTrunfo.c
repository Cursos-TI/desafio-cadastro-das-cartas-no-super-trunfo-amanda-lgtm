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

void mostrarCarta(CartaCidade c) {
    printf("\n=== Carta ===\n");
    printf("Estado: %s", c.estado);
    printf("Código: %s", c.codigo);
    printf("Cidade: %s", c.nomeCidade);
    printf("População: %d habitantes\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    CartaCidade carta1, carta2;

    // === Entrada da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: "); fgets(carta1.estado, sizeof(carta1.estado), stdin);
    printf("Código: "); fgets(carta1.codigo, sizeof(carta1.codigo), stdin);
    printf("Cidade: "); fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    printf("População: "); scanf("%d", &carta1.populacao);
    printf("Área (km²): "); scanf("%f", &carta1.area);
    printf("PIB (bilhões): "); scanf("%f", &carta1.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta1.pontosTuristicos);
    getchar(); // limpa o \n do buffer

    // === Entrada da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: "); fgets(carta2.estado, sizeof(carta2.estado), stdin);
    printf("Código: "); fgets(carta2.codigo, sizeof(carta2.codigo), stdin);
    printf("Cidade: "); fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    printf("População: "); scanf("%d", &carta2.populacao);
    printf("Área (km²): "); scanf("%f", &carta2.area);
    printf("PIB (bilhões): "); scanf("%f", &carta2.pib);
    printf("Pontos turísticos: "); scanf("%d", &carta2.pontosTuristicos);

    // === Saída das Cartas ===
    printf("\n=== Exibindo Cartas Cadastradas ===\n");
    mostrarCarta(carta1);
    mostrarCarta(carta2);

    return 0;
}