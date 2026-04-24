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

    /* Variável que armazena a escolha do jogador no menu */
    int opcao;

    /* ================================================
       BOAS-VINDAS
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║        BEM-VINDO AO SUPER TRUNFO!        ║\n");
    printf("║    Cadastre suas cartas e descubra       ║\n");
    printf("║          quem é o mais forte!            ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("\n");

    /* ================================================
       ENTRADA DE DADOS - CARTA 1
       ================================================ */
    printf("------------------------------------------\n");
    printf("  Vamos começar cadastrando a CARTA 1!\n");
    printf("------------------------------------------\n\n");

    printf("Qual é o estado da carta? (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Qual é o código da carta? (ex: A01): ");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade?: ");
    getchar();
    scanf(" %49[^\n]", cidade1);

    printf("Quantos habitantes essa cidade tem?: ");
    scanf("%lu", &populacao1);

    printf("Qual é a área da cidade (em km²)?: ");
    scanf("%f", &area1);

    printf("Qual é o PIB da cidade (em bilhões de reais)?: ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos essa cidade possui?: ");
    scanf("%d", &pontos1);

    printf("\nÓtimo! Carta 1 cadastrada com sucesso!\n");

    /* ================================================
       ENTRADA DE DADOS - CARTA 2
       ================================================ */
    printf("\n------------------------------------------\n");
    printf("  Agora vamos cadastrar a CARTA 2!\n");
    printf("------------------------------------------\n\n");

    printf("Qual é o estado da carta? (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Qual é o código da carta? (ex: B01): ");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade?: ");
    getchar();
    scanf(" %49[^\n]", cidade2);

    printf("Quantos habitantes essa cidade tem?: ");
    scanf("%lu", &populacao2);

    printf("Qual é a área da cidade (em km²)?: ");
    scanf("%f", &area2);

    printf("Qual é o PIB da cidade (em bilhões de reais)?: ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos essa cidade possui?: ");
    scanf("%d", &pontos2);

    printf("\nPerfeito! Carta 2 cadastrada com sucesso!\n");

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
       EXIBIÇÃO DAS CARTAS
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║         RESUMO DAS SUAS CARTAS           ║\n");
    printf("╚══════════════════════════════════════════╝\n");

    printf("\n🃏  CARTA 1 — %s (%c)\n", cidade1, estado1);
    printf("------------------------------------------\n");
    printf("  Código            : %s\n",           codigo1);
    printf("  População         : %lu habitantes\n", populacao1);
    printf("  Área              : %.2f km²\n",     area1);
    printf("  PIB               : R$ %.2f bilhões\n", PIB1);
    printf("  Pontos Turísticos : %d pontos\n",    pontos1);
    printf("  Densidade Popul.  : %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita    : R$ %.2f\n",      rendaPerCapita1);

    printf("\n🃏  CARTA 2 — %s (%c)\n", cidade2, estado2);
    printf("------------------------------------------\n");
    printf("  Código            : %s\n",           codigo2);
    printf("  População         : %lu habitantes\n", populacao2);
    printf("  Área              : %.2f km²\n",     area2);
    printf("  PIB               : R$ %.2f bilhões\n", PIB2);
    printf("  Pontos Turísticos : %d pontos\n",    pontos2);
    printf("  Densidade Popul.  : %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita    : R$ %.2f\n",      rendaPerCapita2);

    /* ================================================
       MENU INTERATIVO
       O jogador escolhe qual atributo comparar.
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║       HORA DE BATALHAR!                  ║\n");
    printf("║  Escolha o atributo para a disputa:      ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║  1  →  População                         ║\n");
    printf("║  2  →  Área                              ║\n");
    printf("║  3  →  PIB                               ║\n");
    printf("║  4  →  Pontos Turísticos                 ║\n");
    printf("║  5  →  Densidade Populacional            ║\n");
    printf("║  6  →  PIB per Capita                    ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║           RESULTADO DA BATALHA           ║\n");
    printf("╚══════════════════════════════════════════╝\n\n");

    /* ================================================
       COMPARAÇÃO COM SWITCH
       Cada case trata um atributo diferente.
       O default trata entradas inválidas.
       ================================================ */
    switch (opcao) {

        case 1:
            /* --- POPULAÇÃO: maior vence --- */
            printf("⚔️  Atributo escolhido: POPULAÇÃO\n\n");
            printf("  %s: %lu habitantes\n", cidade1, populacao1);
            printf("  %s: %lu habitantes\n\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("🏆 %s venceu! Tem mais habitantes!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("🏆 %s venceu! Tem mais habitantes!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm a mesma população.\n");
            }
            break;

        case 2:
            /* --- ÁREA: maior vence --- */
            printf("⚔️  Atributo escolhido: ÁREA\n\n");
            printf("  %s: %.2f km²\n", cidade1, area1);
            printf("  %s: %.2f km²\n\n", cidade2, area2);

            if (area1 > area2) {
                printf("🏆 %s venceu! Tem maior área!\n", cidade1);
            } else if (area2 > area1) {
                printf("🏆 %s venceu! Tem maior área!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm a mesma área.\n");
            }
            break;

        case 3:
            /* --- PIB: maior vence --- */
            printf("⚔️  Atributo escolhido: PIB\n\n");
            printf("  %s: R$ %.2f bilhões\n", cidade1, PIB1);
            printf("  %s: R$ %.2f bilhões\n\n", cidade2, PIB2);

            if (PIB1 > PIB2) {
                printf("🏆 %s venceu! Tem maior PIB!\n", cidade1);
            } else if (PIB2 > PIB1) {
                printf("🏆 %s venceu! Tem maior PIB!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm o mesmo PIB.\n");
            }
            break;

        case 4:
            /* --- PONTOS TURÍSTICOS: maior vence --- */
            printf("⚔️  Atributo escolhido: PONTOS TURÍSTICOS\n\n");
            printf("  %s: %d pontos\n", cidade1, pontos1);
            printf("  %s: %d pontos\n\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("🏆 %s venceu! Tem mais pontos turísticos!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("🏆 %s venceu! Tem mais pontos turísticos!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm a mesma quantidade de pontos turísticos.\n");
            }
            break;

        case 5:
            /* --- DENSIDADE POPULACIONAL: menor vence (regra especial!) --- */
            printf("⚔️  Atributo escolhido: DENSIDADE POPULACIONAL\n");
            printf("   (Atenção: neste atributo, quem tem MENOS densidade vence!)\n\n");
            printf("  %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("  %s: %.2f hab/km²\n\n", cidade2, densidade2);

            if (densidade1 < densidade2) {
                printf("🏆 %s venceu! Tem menor densidade populacional!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("🏆 %s venceu! Tem menor densidade populacional!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm a mesma densidade populacional.\n");
            }
            break;

        case 6:
            /* --- PIB PER CAPITA: maior vence --- */
            printf("⚔️  Atributo escolhido: PIB PER CAPITA\n\n");
            printf("  %s: R$ %.2f\n", cidade1, rendaPerCapita1);
            printf("  %s: R$ %.2f\n\n", cidade2, rendaPerCapita2);

            if (rendaPerCapita1 > rendaPerCapita2) {
                printf("🏆 %s venceu! Tem maior PIB per capita!\n", cidade1);
            } else if (rendaPerCapita2 > rendaPerCapita1) {
                printf("🏆 %s venceu! Tem maior PIB per capita!\n", cidade2);
            } else {
                printf("🤝 Empate! As duas cidades têm o mesmo PIB per capita.\n");
            }
            break;

        default:
            /* --- OPÇÃO INVÁLIDA --- */
            printf("❌ Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    printf("\n------------------------------------------\n");
    printf("  Obrigado por jogar Super Trunfo! 🎮\n");
    printf("------------------------------------------\n\n");

    return 0;
}