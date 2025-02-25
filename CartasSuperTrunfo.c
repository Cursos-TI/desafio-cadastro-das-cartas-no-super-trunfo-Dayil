#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países [Nível Aventureiro]
// Tema 1 - Cadastro das Cartas
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2;
    char cod1[4], cod2[4];
    char cidade1[30], cidade2[30];
    float popula1, popula2;
    float area1, area2;
    float pib1, pib2;
    int pts_turisticos1, pts_turisticos2;

    double densidade1, densidade2;
    double pibpercapita1, pibpercapita2;

    int selecao;
/*
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
*/
while (1) {
    printf("============- Selecionar opção -============\n");
    printf("Escolha o que deseja:\n");
    printf("1- Cadastrar Cidades\n");
    printf("2- Exibir Dados das Cidades\n");
    printf("3- Fechar\n");
    printf("Insira a opção desejada: \n");
    scanf("%d", &selecao);

    if (selecao == 1) {
        int valido = 0;

        while (!valido) {
            printf("==================================\n");
            printf("CADASTRO DA PRIMEIRA CIDADE\n");

            while (getchar() != '\n');  // Limpa o buffer
            printf("Insira a letra do estado carta: (EX: A)\n");
            scanf("%c", &estado1);

            printf("Insira o código da cidade: (EX: A01)\n");
            scanf("%3s", cod1);

            printf("Insira o nome da cidade:\n");
            while (getchar() != '\n');
            fgets(cidade1, sizeof(cidade1), stdin);
            cidade1[strcspn(cidade1, "\n")] = 0;  // Remove o \n

            printf("Insira a população da cidade:\n");
            scanf("%f", &popula1);

            printf("Insira a área (km²):\n");
            scanf("%f", &area1);
            densidade1 = popula1 / area1; // Densidade populacional:  faz a divisão da população pela área

            printf("Insira o PIB:\n");
            scanf("%f", &pib1);
            pibpercapita1 = popula1 / pib1; // PIB per capita: faz a divisão da população pelo PIB

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos1);

            valido = 1;
        }

        valido = 0;
        while (!valido) {
            printf("==================================\n");
            printf("CADASTRO DA SEGUNDA CIDADE\n");

            while (getchar() != '\n');  // Limpa o buffer
            printf("Insira a letra do estado carta: (EX: B)\n");
            scanf("%c", &estado2);

            printf("Insira o código da cidade: (EX: B02)\n");
            scanf("%3s", cod2);

            if (strcmp(cod2, cod1) == 0) {
                printf("Erro. Já existe uma cidade cadastrada com esse código.\n");
                continue;
            }

            printf("Insira o nome da cidade:\n");
            while (getchar() != '\n');
            fgets(cidade2, sizeof(cidade2), stdin);
            cidade2[strcspn(cidade2, "\n")] = 0;  // Remove o \n
            if (strcmp(cidade2, cidade1) == 0) {
                printf("Erro. Já existe uma cidade cadastrada com esse nome.\n");
                continue;
            }

            printf("Insira a população da cidade:\n");
            scanf("%f", &popula2);

            printf("Insira a área (km²):\n");
            scanf("%f", &area2);
            densidade2 = popula2 / area2; // Densidade populacional:  faz a divisão da população pela área

            printf("Insira o PIB:\n");
            scanf("%f", &pib2);
            pibpercapita2 = popula2 / pib2; // PIB per capita: faz a divisão da população pelo PIB

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos2);

            printf("Cadastro da segunda cidade realizado com sucesso!\n");

            valido = 1;
        }
    } else if (selecao == 2) {
        printf("==================================\n");
        printf("DADOS DA PRIMEIRA CIDADE\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", cod1);
        printf("Nome: %s\n", cidade1);
        printf("População: %.3f\n", popula1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Densidade Populacional: %.2lf hab/km²\n", densidade1); // Puxa a informação do cálculo da densidade populacional linha 67
        printf("PIB per capita: R$ %.2lf\n", pibpercapita1); // Puxa a informação do cálculo do PIB per capita linha 71
        printf("Pontos Turísticos: %d\n", pts_turisticos1);

        printf("==================================\n");
        printf("DADOS DA SEGUNDA CIDADE\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", cod2);
        printf("Nome: %s\n", cidade2);
        printf("População: %.3f\n", popula2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Densidade Populacional: %.2lf hab/km²\n", densidade2); // Puxa a informação do cálculo da densidade populacional linha 110
        printf("PIB per capita: R$ %.2lf\n", pibpercapita2); // Puxa a informação do cálculo do PIB per capita linha 114
        printf("Pontos Turísticos: %d\n", pts_turisticos2);

    } else if (selecao == 3) {
        printf("Saindo do programa.\n");
        break;
    } else {
        printf("Opção inválida\n");
    }
}
return 0;
}