#include <stdio.h>

int main() {

    /* ================================================
       DECLARAÇÃO DE VARIÁVEIS - CARTA 1
       ================================================ */
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontos1;
    /* ================================================
       DECLARAÇÃO DE VARIÁVEIS - CARTA 2
       ================================================ */
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontos2;

    /* Variáveis calculadas */
    float densidade1, rendaPerCapita1;
    float densidade2, rendaPerCapita2;

    /* ================================================
       ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO
       Opções disponíveis (escolha apenas uma):
         1 = População
         2 = Área
         3 = PIB
         4 = Densidade Populacional
         5 = PIB per Capita
       ================================================ */
    int atributoEscolhido = 1; /* <<< ALTERE AQUI PARA MUDAR O ATRIBUTO */

    /* ================================================
       ENTRADA DE DADOS - CARTA 1
       ================================================ */
    printf("========================================\n");
    printf("       CADASTRO DA CARTA 1\n");
    printf("========================================\n");

    printf("Estado (letra A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    getchar();
    scanf(" %49[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    /* ================================================
       ENTRADA DE DADOS - CARTA 2
       ================================================ */
    printf("\n========================================\n");
    printf("       CADASTRO DA CARTA 2\n");
    printf("========================================\n");

    printf("Estado (letra A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    getchar();
    scanf(" %49[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    /* ================================================
       CÁLCULOS
       - Densidade Populacional = População / Área
       - PIB per Capita = PIB (convertido) / População
       ================================================ */
    densidade1      = (float)populacao1 / area1;
    rendaPerCapita1 = (PIB1 * 1000000000.0f) / (float)populacao1;

    densidade2      = (float)populacao2 / area2;
    rendaPerCapita2 = (PIB2 * 1000000000.0f) / (float)populacao2;

    /* ================================================
       EXIBIÇÃO - CARTA 1
       ================================================ */
    printf("\n========================================\n");
    printf("           CARTA 1\n");
    printf("========================================\n");
    printf("Estado            : %c\n",         estado1);
    printf("Código            : %s\n",         codigo1);
    printf("Cidade            : %s\n",         cidade1);
    printf("População         : %lu hab\n",    populacao1);
    printf("Área              : %.2f km²\n",   area1);
    printf("PIB               : %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos : %d\n",         pontos1);
    printf("Densidade Popul.  : %.2f hab/km²\n", densidade1);
    printf("PIB per Capita    : R$ %.2f\n",    rendaPerCapita1);

    /* ================================================
       EXIBIÇÃO - CARTA 2
       ================================================ */
    printf("\n========================================\n");
    printf("           CARTA 2\n");
    printf("========================================\n");
    printf("Estado            : %c\n",         estado2);
    printf("Código            : %s\n",         codigo2);
    printf("Cidade            : %s\n",         cidade2);
    printf("População         : %lu hab\n",    populacao2);
    printf("Área              : %.2f km²\n",   area2);
    printf("PIB               : %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos : %d\n",         pontos2);
    printf("Densidade Popul.  : %.2f hab/km²\n", densidade2);
    printf("PIB per Capita    : R$ %.2f\n",    rendaPerCapita2);

    /* ================================================
       COMPARAÇÃO DO ATRIBUTO ESCOLHIDO
       - Maior valor vence em todos os atributos,
         EXCETO Densidade Populacional (menor vence).
       ================================================ */
    printf("\n========================================\n");

    if (atributoEscolhido == 1) {
        /* --- Comparação por POPULAÇÃO --- */
        printf("  Comparação de Cartas (Atributo: População)\n");
        printf("========================================\n");
        printf("Carta 1 - %s (%c): %lu hab\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %lu hab\n", cidade2, estado2, populacao2);
        printf("----------------------------------------\n");

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else if (atributoEscolhido == 2) {
        /* --- Comparação por ÁREA --- */
        printf("  Comparação de Cartas (Atributo: Área)\n");
        printf("========================================\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", cidade1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
        printf("----------------------------------------\n");

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else if (atributoEscolhido == 3) {
        /* --- Comparação por PIB --- */
        printf("  Comparação de Cartas (Atributo: PIB)\n");
        printf("========================================\n");
        printf("Carta 1 - %s (%c): %.2f bilhões\n", cidade1, estado1, PIB1);
        printf("Carta 2 - %s (%c): %.2f bilhões\n", cidade2, estado2, PIB2);
        printf("----------------------------------------\n");

        if (PIB1 > PIB2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (PIB2 > PIB1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else if (atributoEscolhido == 4) {
        /* --- Comparação por DENSIDADE POPULACIONAL ---
           Regra especial: MENOR valor vence! */
        printf("  Comparação de Cartas (Atributo: Densidade Populacional)\n");
        printf("========================================\n");
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", cidade1, estado1, densidade1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", cidade2, estado2, densidade2);
        printf("Regra: menor densidade vence.\n");
        printf("----------------------------------------\n");

        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else if (atributoEscolhido == 5) {
        /* --- Comparação por PIB PER CAPITA --- */
        printf("  Comparação de Cartas (Atributo: PIB per Capita)\n");
        printf("========================================\n");
        printf("Carta 1 - %s (%c): R$ %.2f\n", cidade1, estado1, rendaPerCapita1);
        printf("Carta 2 - %s (%c): R$ %.2f\n", cidade2, estado2, rendaPerCapita2);
        printf("----------------------------------------\n");

        if (rendaPerCapita1 > rendaPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (rendaPerCapita2 > rendaPerCapita1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }

    } else {
        /* Atributo inválido */
        printf("Atributo escolhido inválido! Escolha um valor entre 1 e 5.\n");
    }

    printf("========================================\n");

    return 0;
}