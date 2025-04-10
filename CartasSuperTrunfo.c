#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Para geração de números aleatórios

// Desafio Super Trunfo - Países [Nível Mestre]
// Tema 1 - Cadastro das Cartas
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2, estado3 = 'G'; // G = genérico (computador)
    char cod1[4], cod2[4], cod3[] = "G07";
    char cidade1[30], cidade2[30], cidade3[] = "Cidade Genérica";
    unsigned long int popula1, popula2, popula3;
    float area1, area2, area3;
    float pib1, pib2, pib3;
    float densidade1, densidade2, densidade3;
    float pibpercapita1, pibpercapita2, pibpercapita3;
    int pts_turisticos1, pts_turisticos2, pts_turisticos3;
    float SuperPoder1, SuperPoder2, SuperPoder3;

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
    // Menu principal
    printf("============- SUPER TRUNFO BOLADÃO -============\n");
    printf("============- Selecionar opção -============\n");
    printf("Escolha o que deseja:\n");
    printf("1- Jogador vs. Jogador (Cadastrar 2 Cidades)\n");
    printf("2- Jogador vs. Computador (Cadastrar 1 Cidade)\n");
    printf("3- Exibir Dados das Cidades (Jogador vs. Jogador)\n");
    printf("4- Comparar Atributos das Cidades (Jogador vs. Jogador)\n");
    printf("5- Fechar\n");
    printf("Insira a opção desejada: \n");
    scanf("%d", &selecao);
    
    // Utilizando switch para lidar com as opções
    switch (selecao) {
        case 1: {
            int valido = 0;

            // Cadastro da primeira cidade
            while (!valido) {
                printf("==================================\n");
                printf("CADASTRO DA PRIMEIRA CIDADE\n");

                while (getchar() != '\n'); // Limpa o buffer do teclado

                printf("Insira a letra do estado carta: (EX: A)\n");
                scanf("%c", &estado1);

                printf("Insira o código da cidade: (EX: A01)\n");
                scanf("%3s", cod1);

                printf("Insira o nome da cidade:\n");
                while (getchar() != '\n');
                fgets(cidade1, sizeof(cidade1), stdin);
                cidade1[strcspn(cidade1, "\n")] = 0;

                printf("Insira a população da cidade:\n");
                scanf("%lu", &popula1);

                printf("Insira a área (km²):\n");
                scanf("%f", &area1);
                densidade1 = popula1 / area1;

                printf("Insira o PIB:\n");
                scanf("%f", &pib1);
                pibpercapita1 = popula1 / pib1;

                printf("Insira o número de pontos turísticos:\n");
                scanf("%d", &pts_turisticos1);

                SuperPoder1 = popula1 + area1 + pib1 + pts_turisticos1 + densidade1 + pibpercapita1;

                printf("Cadastro da primeira cidade realizado com sucesso!\n");
                valido = 1;
            }

            // Cadastro da segunda cidade
            valido = 0;
            while (!valido) {
                printf("==================================\n");
                printf("CADASTRO DA SEGUNDA CIDADE\n");

                while (getchar() != '\n'); // Limpa o buffer do teclado
                printf("Insira a letra do estado carta: (EX: B)\n");
                scanf("%c", &estado2);

                printf("Insira o código da cidade: (EX: B02)\n");
                scanf("%3s", cod2);

                // Verificação de código duplicado
                if (strcmp(cod2, cod1) == 0) {
                    printf("Erro. Já existe uma cidade cadastrada com esse código.\n");
                    continue;
                }

                printf("Insira o nome da cidade:\n");
                while (getchar() != '\n');
                fgets(cidade2, sizeof(cidade2), stdin);
                cidade2[strcspn(cidade2, "\n")] = 0;

                // Verificação de nome duplicado
                if (strcmp(cidade2, cidade1) == 0) {
                    printf("Erro. Já existe uma cidade cadastrada com esse nome.\n");
                    continue;
                }

                printf("Insira a população da cidade:\n");
                scanf("%lu", &popula2);

                printf("Insira a área (km²):\n");
                scanf("%f", &area2);
                densidade2 = popula2 / area2;

                printf("Insira o PIB:\n");
                scanf("%f", &pib2);
                pibpercapita2 = popula2 / pib2;

                printf("Insira o número de pontos turísticos:\n");
                scanf("%d", &pts_turisticos2);

                SuperPoder2 = popula2 + area2 + pib2 + pts_turisticos2 + densidade2 + pibpercapita2;

                printf("Cadastro da segunda cidade realizado com sucesso!\n");
                printf("==\n");
                valido = 1;
            }
            break;
        }

        case 2: {
            // Modo Jogador x Computador
            printf("\n== JOGADOR VS COMPUTADOR ==\n");

            while (getchar() != '\n'); // Limpa o buffer do teclado

            printf("Insira a letra do estado carta: (EX: A)\n");
            scanf("%c", &estado1);

            printf("Insira o código da cidade: (EX: A01)\n");
            scanf("%3s", cod1);

            printf("Insira o nome da cidade:\n");
            while (getchar() != '\n');
            fgets(cidade1, sizeof(cidade1), stdin);
            cidade1[strcspn(cidade1, "\n")] = 0;

            printf("Insira a população da cidade:\n");
            scanf("%lu", &popula1);

            printf("Insira a área (km²):\n");
            scanf("%f", &area1);
            densidade1 = popula1 / area1;

            printf("Insira o PIB:\n");
            scanf("%f", &pib1);
            pibpercapita1 = popula1 / pib1;

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos1);

            SuperPoder1 = popula1 + area1 + pib1 + pts_turisticos1 + densidade1 + pibpercapita1;


            // Geração automática da cidade do computador
            popula3 = 50000 + rand() % 950001;          // 50 mil a 1 milhão
            area3 = 50.0 + rand() % 951;                // 50 a 1000 km²
            pib3 = 1000.0 + rand() % 99001;             // 1000 a 100000
            pts_turisticos3 = 1 + rand() % 30;          // 1 a 30
            densidade3 = popula3 / area3;
            pibpercapita3 = popula3 / pib3;
            SuperPoder3 = popula3 + area3 + pib3 + pts_turisticos3 + densidade3 + pibpercapita3;

            // Exibição da cidade do jogador
            printf("DADOS DA CIDADE DO JOGADOR\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", cod1);
            printf("Nome: %s\n", cidade1);
            printf("População: %lu\n", popula1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$ %.2f\n", pib1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per capita: R$ %.2f\n", pibpercapita1);
            printf("Pontos Turísticos: %d\n", pts_turisticos1);
            printf("O Super Poder da sua cidade é de: %.2f \n", SuperPoder1);

            // Exibição da cidade do computador
            printf("\n==== CIDADE DO COMPUTADOR ====\n");
            printf("Estado: %c\n", estado3);
            printf("Código: %s\n", cod3);
            printf("Nome: %s\n", cidade3);
            printf("População: %lu\n", popula3);
            printf("Área: %.2f km²\n", area3);
            printf("PIB: R$ %.2f\n", pib3);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade3);
            printf("PIB per capita: R$ %.2f\n", pibpercapita3);
            printf("Pontos Turísticos: %d\n", pts_turisticos3);
            printf("O Super Poder da cidade do computador é de: %.2f\n", SuperPoder3);

            // comparação dos atributos
            printf("==================================\n");
            printf("COMPARAÇÃO DE ATRIBUTOS Jogador vs. Computador\n");
            printf("O terminal responderá com 1 para verdadeiro e 0 para falso\n\n");
            printf("A população da cidade do jogador é maior que a do computador? %lu\n", popula1 > popula3);
            printf("A área da cidade do jogador é maior que a do computador? %d\n", area1 > area3);
            printf("O PIB da cidade do jogador é maior que o do computador? %d\n", pib1 > pib3);
            printf("A Densidade Populacional da cidade do jogador é menor que a do computador? (quanto menor a densidade, maior o poder) %d\n", densidade1 < densidade3);
            printf("O PIB per capita da cidade do jogador é maior que o do computador? %d\n", pibpercapita1 > pibpercapita3);
            printf("O número de pontos turísticos da cidade do jogador é maior que o do computador? %d\n", pts_turisticos1 > pts_turisticos3);
            printf("O Super Poder da cidade do jogador é maior que o do computador? %d\n", SuperPoder1 > SuperPoder3);
            printf("==\n");

            // Resultado da comparação final
            if (SuperPoder1 > SuperPoder3) {
                printf("A cidade %s é a vencedora!\n", cidade1);
            } else if (SuperPoder1 < SuperPoder3) {
                printf("A cidade %s é a vencedora!\n", cidade3);
            } else {
                printf("Empate!\n");
            }
            printf("==\n");
            break;
        }
        case 3:
            // Exibição dos dados da cidade 1
            printf("==================================\n");
            printf("DADOS DA PRIMEIRA CIDADE\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", cod1);
            printf("Nome: %s\n", cidade1);
            printf("População: %lu\n", popula1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$ %.2f\n", pib1);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per capita: R$ %.2f\n", pibpercapita1);
            printf("Pontos Turísticos: %d\n", pts_turisticos1);
            printf("O Super Poder da primeira cidade é de: %.2f \n", SuperPoder1);

            // Exibição dos dados da cidade 2
            printf("==================================\n");
            printf("DADOS DA SEGUNDA CIDADE\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", cod2);
            printf("Nome: %s\n", cidade2);
            printf("População: %lu\n", popula2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$ %.2f\n", pib2);
            printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per capita: R$ %.2f\n", pibpercapita2);
            printf("Pontos Turísticos: %d\n", pts_turisticos2);
            printf("O Super Poder da segunda cidade é de: %.2f \n", SuperPoder2);
            printf("==\n");
            break;

        case 4:
            // Comparação dos atributos
            printf("==================================\n");
            printf("COMPARAÇÃO DE ATRIBUTOS DAS CIDADES\n");
            printf("O terminal responderá com 1 para verdadeiro e 0 para falso\n\n");
            printf("A população da cidade 1 é maior que a da cidade 2? %lu\n", popula1 > popula2);
            printf("A área da cidade 1 é maior que a da cidade 2? %d\n", area1 > area2);
            printf("O PIB da cidade 1 é maior que o da cidade 2? %d\n", pib1 > pib2);
            printf("A Densidade Populacional da cidade 1 é menor que a da cidade 2? (quanto menor a densidade, maior o poder) %d\n", densidade1 < densidade2);
            printf("O PIB per capita da cidade 1 é maior que o da cidade 2? %d\n", pibpercapita1 > pibpercapita2);
            printf("O número de pontos turísticos da cidade 1 é maior que o da cidade 2? %d\n", pts_turisticos1 > pts_turisticos2);
            printf("O Super Poder da cidade 1 é maior que o da cidade 2? %d\n", SuperPoder1 > SuperPoder2);
            printf("==\n");

            // Resultado da comparação final
            if (SuperPoder1 > SuperPoder2) {
                printf("A cidade %s é a vencedora!\n", cidade1);
            } else if (SuperPoder1 < SuperPoder2) {
                printf("A cidade %s é a vencedora!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            printf("==\n");
            break;

        case 5:
            // Encerramento
            printf("Saindo do programa.\n");
            return 0;

        default:
            // Opção inválida
            printf("Opção inválida\n");
    }
}

return 0;
}