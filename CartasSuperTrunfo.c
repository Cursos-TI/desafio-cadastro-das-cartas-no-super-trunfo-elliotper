#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    
    
        struct CartasSuperTrunfo{
            char estado;
            char codigo_da_carta[3];
            char nome[50];
            int população;
            float área;
            float pib;
            int pontos_turisticos;
        };
    
        int main (){
            struct Carta carta1, carta2;

     // Cadastro da carta1
    printf("Cadastrando a primeira carta:\n");

    printf("Defina o estado da cidade: \n");
    scanf("%s", &estado);
    
     fgets(carta1.estado, sizeof(carta1.estado), stdin);

    printf("Dê um código para a carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Escreva o nome da cidade da carta: \n");
    scanf("%s", &nome);

    printf("Coloque o número da população da cidade: \n");
    scanf("%d", &população);

    printf("Apresente a área da cidade:");
    scanf("%f", &área);

    printf("Apresente o PIB da cidade:");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos tem a cidade:");
    scanf("%d"; &pontos_turisticos);

    // Limpar o buffer de entrada
    while(getchar() != '\n');

    // Cadastro Carta2
    
     printf("Cadastrando a segunda carta:\n");

    printf("Defina o estado da cidade: \n");
    scanf("%s", &estado);

    fgets(carta2.estado, sizeof(carta2.estado), stdin);

    printf("Dê um código para a carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("Escreva o nome da cidade da carta: \n");
    scanf("%s", &nome);

    printf("Coloque o número da população da cidade: \n");
    scanf("%d", &população);

    printf("Apresente a área da cidade:");
    scanf("%f", &área);

    printf("Apresente o PIB da cidade:");
    scanf("%f", &pib);

    printf("Numero de pontos turísticos tem a cidade:");
    scanf("%d"; &pontos_turisticos);

     // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n CARTAS CADASTRADAS \n");

    printf("Carta1: %s", carta1.estado);

    printf("Código: %s", carta1.codigo_da_carta);

    printf("PIB: %s", carta1.nome);

    printf("População: %d", carta1.população);

    printf("Área: %f", carta1.área);

    printf("PIB: %f", carta1.pib);

    printf("Pontos turisticos: %d", carta1.pontos_turisticos);

    printf("Carta2: %s", carta2.estado);

    printf("Código: %s", carta2.codigo_da_carta);

    printf("PIB: %s", carta2.nome);

    printf("População: %d", carta2.população);

    printf("Área: %f", carta2.área);

    printf("PIB: %f", carta2.pib);

    printf("Pontos turisticos: %d", carta2.pontos_turisticos);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
