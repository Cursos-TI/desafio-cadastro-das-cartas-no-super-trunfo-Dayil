#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países [Nível Mestre]
// Tema 1 - Cadastro das Cartas
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2;
    char cod1[4], cod2[4];
    char cidade1[30], cidade2[30];
    unsigned long int popula1, popula2;
    float area1, area2;
    float pib1, pib2;
    int pts_turisticos1, pts_turisticos2;

    double densidade1, densidade2;
    double pibpercapita1, pibpercapita2;
    float SuperPoder1, SuperPoder2;

    int resultado;
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
    printf("3- Comparar Atributos das Cidades\n");
    printf("4- Fechar\n");
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
            scanf("%lu", &popula1);

            printf("Insira a área (km²):\n");
            scanf("%f", &area1);
            densidade1 = popula1 / area1; // Densidade populacional:  faz a divisão da população pela área

            printf("Insira o PIB:\n");
            scanf("%f", &pib1);
            pibpercapita1 = popula1 / pib1; // PIB per capita: faz a divisão da população pelo PIB

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos1);

            SuperPoder1 = popula1 + area1 + pib1 + pts_turisticos1 + densidade1 + pibpercapita1;

            printf("Cadastro da primeira cidade realizado com sucesso!\n");

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
            scanf("%lu", &popula2);

            printf("Insira a área (km²):\n");
            scanf("%f", &area2);
            densidade2 = popula2 / area2; // Densidade populacional:  faz a divisão da população pela área

            printf("Insira o PIB:\n");
            scanf("%f", &pib2);
            pibpercapita2 = popula2 / pib2; // PIB per capita: faz a divisão da população pelo PIB

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos2);

            SuperPoder2 = popula2 + area2 + pib2 + pts_turisticos2 + densidade2 + pibpercapita2;

            printf("Cadastro da segunda cidade realizado com sucesso!\n");

            valido = 1;
        }
    } else if (selecao == 2) {
        printf("==================================\n");
        printf("DADOS DA PRIMEIRA CIDADE\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", cod1);
        printf("Nome: %s\n", cidade1);
        printf("População: %lu\n", popula1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f\n", pib1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Puxa a informação do cálculo da densidade populacional linha 70
        printf("PIB per capita: R$ %.2f\n", pibpercapita1); // Puxa a informação do cálculo do PIB per capita linha 74
        printf("Pontos Turísticos: %d\n", pts_turisticos1);
        printf("O Super Poder da primeira cidade é de: %.2f \n", SuperPoder1);

        printf("==================================\n");
        printf("DADOS DA SEGUNDA CIDADE\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", cod2);
        printf("Nome: %s\n", cidade2);
        printf("População: %lu\n", popula2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f\n", pib2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Puxa a informação do cálculo da densidade populacional linha 117
        printf("PIB per capita: R$ %.2f\n", pibpercapita2); // Puxa a informação do cálculo do PIB per capita linha 121
        printf("Pontos Turísticos: %d\n", pts_turisticos2);
        printf("O Super Poder da segunda cidade é de: %.2f \n", SuperPoder2);
    }
    else if (selecao == 3) {
        printf("==================================\n");
        printf("COMPARAÇÃO DE ATRIBUTOS DAS CIDADES\n");
        printf("O terminal respondera com 1 para verdadeiro e 0 para falso\n\n");
        printf("A população da cidade 1 é maior que a da cidade 2? %lu\n", popula1 > popula2);
        printf("A área da cidade 1 é maior que a da cidade 2? %d\n", area1 > area2);
        printf("O PIB da cidade 1 é maior que o da cidade 2? %d\n", pib1 > pib2);
        printf("A Densidade Populacional da cidade 1 é menor que a da cidade 2? (quanto menor a densidade, maior o poder) %d\n", densidade1 < densidade2);
        printf("O PIB per capita da cidade 1 é maior que o da cidade 2? %d\n", pibpercapita1 > pibpercapita2);
        printf("O número de pontos turísticos da cidade 1 é maior que o da cidade 2? %d\n", pts_turisticos1 > pts_turisticos2);
        printf("O Super Poder da cidade 1 é maior que o da cidade 2? %d\n", SuperPoder1 > SuperPoder2);

        if (SuperPoder1 > SuperPoder2) {
            printf("A cidade %s é a vencedora!\n", cidade1);
        } else if (SuperPoder1 < SuperPoder2) { 
            printf("A cidade %s é a vencedora!\n", cidade2);
        } else {
            printf("Empate!\n");
            printf("==================================\n");
        }
    } else if (selecao == 4) {
        printf("Saindo do programa.\n");
        break;
    } else {
        printf("Opção inválida\n");
    }
}
return 0;
}