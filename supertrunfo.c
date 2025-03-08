#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

// Função para exibir as cartas
void exibirCarta(Carta c) {
    printf("\nPaís: %s\n", c.nome);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km2\n", c.area);
    printf("PIB: %.2f bilhões\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Demográfica: %.2f hab/km2\n", c.densidade_demografica);
}

// Função para comparar as cartas
void compararCartas(Carta c1, Carta c2, int escolha) {
    printf("\nComparando as cartas pelo atributo escolhido:\n");
    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", c1.nome, c1.populacao, c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao) printf("Vencedor: %s\n", c1.nome);
            else if (c1.populacao < c2.populacao) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km2 | %s: %.2f km2\n", c1.nome, c1.area, c2.nome, c2.area);
            if (c1.area > c2.area) printf("Vencedor: %s\n", c1.nome);
            else if (c1.area < c2.area) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões | %s: %.2f bilhões\n", c1.nome, c1.pib, c2.nome, c2.pib);
            if (c1.pib > c2.pib) printf("Vencedor: %s\n", c1.nome);
            else if (c1.pib < c2.pib) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", c1.nome, c1.pontos_turisticos, c2.nome, c2.pontos_turisticos);
            if (c1.pontos_turisticos > c2.pontos_turisticos) printf("Vencedor: %s\n", c1.nome);
            else if (c1.pontos_turisticos < c2.pontos_turisticos) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km2 | %s: %.2f hab/km2\n", c1.nome, c1.densidade_demografica, c2.nome, c2.densidade_demografica);
            if (c1.densidade_demografica < c2.densidade_demografica) printf("Vencedor: %s\n", c1.nome);
            else if (c1.densidade_demografica > c2.densidade_demografica) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    // Exemplo de cartas
    Carta pais1 = {"Brasil", 214000000, 8515767, 22000, 30, 25.1};
    Carta pais2 = {"Argentina", 45000000, 2780400, 5000, 20, 16.2};

    int opcao;
    do {
        printf("\nMenu de Comparacão:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("0. Sair\n");
        printf("Escolha um atributo para comparar: ");
        scanf("%d", &opcao);
        
        if (opcao != 0) {
            compararCartas(pais1, pais2, opcao);
        }
    } while (opcao != 0);

    printf("Saindo do programa. Obrigado por jogar!\n");
    return 0;
}
