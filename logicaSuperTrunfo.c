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
       VARIÁVEIS PARA A BATALHA COM DOIS ATRIBUTOS
       ================================================ */
    int opcao1, opcao2;         /* escolhas do jogador            */
    double v1a, v2a;            /* valores do atributo 1 (c1, c2) */
    double v1b, v2b;            /* valores do atributo 2 (c1, c2) */
    double soma1, soma2;        /* soma dos dois atributos        */
    int inv_a, inv_b;           /* 1 = menor vence (densidade)    */
    int venc_a, venc_b;         /* 1=c1, 2=c2, 0=empate           */
    const char *nome_attr1;     /* rótulo do atributo 1           */
    const char *nome_attr2;     /* rótulo do atributo 2           */

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

    printf("\n CARTA 1 — %s (%c)\n", cidade1, estado1);
    printf("------------------------------------------\n");
    printf("  Código            : %s\n",             codigo1);
    printf("  População         : %lu habitantes\n",  populacao1);
    printf("  Área              : %.2f km²\n",        area1);
    printf("  PIB               : R$ %.2f bilhões\n", PIB1);
    printf("  Pontos Turísticos : %d pontos\n",       pontos1);
    printf("  Densidade Popul.  : %.2f hab/km²\n",    densidade1);
    printf("  PIB per Capita    : R$ %.2f\n",         rendaPerCapita1);

    printf("\n CARTA 2 — %s (%c)\n", cidade2, estado2);
    printf("------------------------------------------\n");
    printf("  Código            : %s\n",             codigo2);
    printf("  População         : %lu habitantes\n",  populacao2);
    printf("  Área              : %.2f km²\n",        area2);
    printf("  PIB               : R$ %.2f bilhões\n", PIB2);
    printf("  Pontos Turísticos : %d pontos\n",       pontos2);
    printf("  Densidade Popul.  : %.2f hab/km²\n",    densidade2);
    printf("  PIB per Capita    : R$ %.2f\n",         rendaPerCapita2);

    /* ================================================
       PRIMEIRO MENU — ESCOLHA DO ATRIBUTO 1
       Todos os 6 atributos disponíveis.
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║        HORA DE BATALHAR!                 ║\n");
    printf("║  Escolha o PRIMEIRO atributo:            ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║  1  →  População                         ║\n");
    printf("║  2  →  Área                              ║\n");
    printf("║  3  →  PIB                               ║\n");
    printf("║  4  →  Pontos Turísticos                 ║\n");
    printf("║  5  →  Densidade Populacional            ║\n");
    printf("║  6  →  PIB per Capita                    ║\n");
    printf("╚══════════════════════════════════════════╝\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao1);

    /* Valida opcao1: repete até entrada correta */
    while (opcao1 < 1 || opcao1 > 6) {
        printf("❌ Opção inválida! Digite um número de 1 a 6: ");
        scanf("%d", &opcao1);
    }

    /* ------------------------------------------------
       Extrai valores e define regra do atributo 1
       usando switch — cada case preenche:
         v1a / v2a  → valor do atributo para carta 1 e 2
         nome_attr1 → rótulo para exibição
         inv_a      → 0 = maior vence | 1 = menor vence
       ------------------------------------------------ */
    switch (opcao1) {
        case 1:
            v1a = (double)populacao1;
            v2a = (double)populacao2;
            nome_attr1 = "População";
            inv_a = 0;
            break;
        case 2:
            v1a = (double)area1;
            v2a = (double)area2;
            nome_attr1 = "Área (km²)";
            inv_a = 0;
            break;
        case 3:
            v1a = (double)PIB1;
            v2a = (double)PIB2;
            nome_attr1 = "PIB (bilhões R$)";
            inv_a = 0;
            break;
        case 4:
            v1a = (double)pontos1;
            v2a = (double)pontos2;
            nome_attr1 = "Pontos Turísticos";
            inv_a = 0;
            break;
        case 5:
            v1a = (double)densidade1;
            v2a = (double)densidade2;
            nome_attr1 = "Densidade Popul. (hab/km²)";
            inv_a = 1; /* MENOR vence! */
            break;
        case 6:
            v1a = (double)rendaPerCapita1;
            v2a = (double)rendaPerCapita2;
            nome_attr1 = "PIB per Capita (R$)";
            inv_a = 0;
            break;
        default:
            /* Nunca alcançado após o while de validação,
               mas necessário para compilar sem aviso.   */
            v1a = 0; v2a = 0;
            nome_attr1 = "?";
            inv_a = 0;
            break;
    }

    /* ================================================
       SEGUNDO MENU — DINÂMICO
       O atributo escolhido em opcao1 não é exibido.
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║  Escolha o SEGUNDO atributo:             ║\n");
    printf("╠══════════════════════════════════════════╣\n");

    /* Cada linha só é impressa se NÃO foi a primeira escolha */
    if (opcao1 != 1) printf("║  1  →  População                         ║\n");
    if (opcao1 != 2) printf("║  2  →  Área                              ║\n");
    if (opcao1 != 3) printf("║  3  →  PIB                               ║\n");
    if (opcao1 != 4) printf("║  4  →  Pontos Turísticos                 ║\n");
    if (opcao1 != 5) printf("║  5  →  Densidade Populacional            ║\n");
    if (opcao1 != 6) printf("║  6  →  PIB per Capita                    ║\n");

    printf("╚══════════════════════════════════════════╝\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao2);

    /* Valida opcao2: deve ser 1–6 e diferente de opcao1 */
    while (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        if (opcao2 == opcao1)
            printf("❌ Você já escolheu esse atributo! Escolha outro: ");
        else
            printf("❌ Opção inválida! Digite um número de 1 a 6: ");
        scanf("%d", &opcao2);
    }

    /* ------------------------------------------------
       Extrai valores e define regra do atributo 2
       (mesma lógica do switch anterior)
       ------------------------------------------------ */
    switch (opcao2) {
        case 1:
            v1b = (double)populacao1;
            v2b = (double)populacao2;
            nome_attr2 = "População";
            inv_b = 0;
            break;
        case 2:
            v1b = (double)area1;
            v2b = (double)area2;
            nome_attr2 = "Área (km²)";
            inv_b = 0;
            break;
        case 3:
            v1b = (double)PIB1;
            v2b = (double)PIB2;
            nome_attr2 = "PIB (bilhões R$)";
            inv_b = 0;
            break;
        case 4:
            v1b = (double)pontos1;
            v2b = (double)pontos2;
            nome_attr2 = "Pontos Turísticos";
            inv_b = 0;
            break;
        case 5:
            v1b = (double)densidade1;
            v2b = (double)densidade2;
            nome_attr2 = "Densidade Popul. (hab/km²)";
            inv_b = 1; /* MENOR vence! */
            break;
        case 6:
            v1b = (double)rendaPerCapita1;
            v2b = (double)rendaPerCapita2;
            nome_attr2 = "PIB per Capita (R$)";
            inv_b = 0;
            break;
        default:
            v1b = 0; v2b = 0;
            nome_attr2 = "?";
            inv_b = 0;
            break;
    }

    /* ================================================
       CÁLCULO DA SOMA DOS DOIS ATRIBUTOS
       A carta com maior soma vence a rodada.
       ================================================ */
    soma1 = v1a + v1b;
    soma2 = v2a + v2b;

    /* ================================================
       DETERMINAÇÃO DOS VENCEDORES POR ATRIBUTO
       Usando operador ternário aninhado:
         inv=0 → maior valor vence
         inv=1 → menor valor vence (densidade)
       Resultado: 1 = carta1 vence | 2 = carta2 vence | 0 = empate
       ================================================ */
    venc_a = inv_a
        ? (v1a < v2a ? 1 : (v2a < v1a ? 2 : 0))  /* menor vence */
        : (v1a > v2a ? 1 : (v2a > v1a ? 2 : 0)); /* maior vence */

    venc_b = inv_b
        ? (v1b < v2b ? 1 : (v2b < v1b ? 2 : 0))  /* menor vence */
        : (v1b > v2b ? 1 : (v2b > v1b ? 2 : 0)); /* maior vence */

    /* ================================================
       EXIBIÇÃO DO RESULTADO DA BATALHA
       ================================================ */
    printf("\n");
    printf("╔══════════════════════════════════════════╗\n");
    printf("║           RESULTADO DA BATALHA           ║\n");
    printf("╠══════════════════════════════════════════╣\n");
    printf("║  %-20s  vs  %-15s║\n", cidade1, cidade2);
    printf("╚══════════════════════════════════════════╝\n\n");

    /* --- Resultado do Atributo 1 --- */
    printf("⚔️  Atributo 1: %s\n", nome_attr1);
    if (inv_a) printf("   ⚠️  Regra especial: MENOR valor vence!\n");
    printf("   %-25s : %.2f\n", cidade1, v1a);
    printf("   %-25s : %.2f\n", cidade2, v2a);
    printf("   Resultado: %s\n\n",
        venc_a == 1 ? cidade1 :
        venc_a == 2 ? cidade2 :
        "Empate neste atributo");

    /* --- Resultado do Atributo 2 --- */
    printf("⚔️  Atributo 2: %s\n", nome_attr2);
    if (inv_b) printf("   ⚠️  Regra especial: MENOR valor vence!\n");
    printf("   %-25s : %.2f\n", cidade1, v1b);
    printf("   %-25s : %.2f\n", cidade2, v2b);
    printf("   Resultado: %s\n\n",
        venc_b == 1 ? cidade1 :
        venc_b == 2 ? cidade2 :
        "Empate neste atributo");

    /* --- Soma e Resultado Final --- */
    printf("------------------------------------------\n");
    printf("  SOMA DOS ATRIBUTOS:\n");
    printf("   %-25s : %.2f\n", cidade1, soma1);
    printf("   %-25s : %.2f\n", cidade2, soma2);
    printf("------------------------------------------\n\n");

    printf("╔══════════════════════════════════════════╗\n");
    printf("║           VENCEDOR DA RODADA             ║\n");
    printf("╚══════════════════════════════════════════╝\n");

    if (soma1 > soma2) {
        printf("🏆 %s VENCEU!\n", cidade1);
        printf("   Soma: %.2f > %.2f\n", soma1, soma2);
    } else if (soma2 > soma1) {
        printf("🏆 %s VENCEU!\n", cidade2);
        printf("   Soma: %.2f > %.2f\n", soma2, soma1);
    } else {
        printf("🤝 EMPATE! As duas cartas têm a mesma soma: %.2f\n", soma1);
    }

    printf("\n------------------------------------------\n");
    printf("  Obrigado por jogar Super Trunfo! 🎮\n");
    printf("------------------------------------------\n\n");

    return 0;
}