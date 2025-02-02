#include <stdio.h>

// Desafio Super Trunfo - Países [Nível Novato]
// Tema 1 - Cadastro das Cartas
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char cod[4];
    char cidade[30];
    double popula;
    float area;
    double pib;
    int pts_turisticos;
    
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
    while (1)
    {
        printf("============- Selecionar opção -============\n");
        printf("Escolha o que deseja:\n");
        printf("1- Cadastrar Cidade\n");
        printf("2- Exibir Dados das Cidades\n");
        printf("3- Fechar\n");
        printf("Insira a opção desejada: \n");
        scanf("%d", &selecao);

        if (selecao == 1) {
            printf("==================================\n");
            printf("CADASTRO DE CIDADE\n");

            printf("Insira o código da cidade: (EX: A01)\n");
            scanf("%3s", cod);

            printf("Insira o nome da cidade:\n");
            //scanf("%29s", &cidade);
            while (getchar() != '\n');  // Limpa buffer antes da leitura
            fgets(cidade, sizeof(cidade), stdin);
            cidade[strcspn(cidade, "\n")] = 0;  // Remove o \n do final (se houver)

            printf("Insira a população da cidade:\n");
            scanf("%lf", &popula);

            printf("Insira a área (km²):\n");
            scanf("%f", &area);

            printf("Insira o PIB:\n");
            scanf("%lf", &pib);

            printf("Insira o número de pontos turísticos:\n");
            scanf("%d", &pts_turisticos);

            printf("Cadastro realizado com sucesso!\n");
    ///////
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
        }else if(selecao == 2) {
            printf("==================================\n");
            printf("DADOS DA CIDADE\n");
            printf("Código: %s\n", cod);
            printf("Nome: %s\n", cidade);
            printf("População: %.3lf\n", popula);
            printf("Área: %.f km²\n", area);
            printf("PIB: R$ %.3lf\n", pib);
            printf("Pontos Turísticos: %d\n", pts_turisticos);
        }else if(selecao == 3) {
            printf("Saindo do programa.\n");
            break;
        }else {
            printf("Opção inválida");
        }
    }
    return 0;
}
