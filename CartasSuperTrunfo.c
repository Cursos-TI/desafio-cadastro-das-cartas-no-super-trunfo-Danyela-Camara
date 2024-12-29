#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    /*Declarando as variáveis*/
    char estado, codigo_da_carta[10];
    char nome_da_cidade[20];
    int populacao, numero_de_pontos_turisticos;
    float area, pib;

    /*Recebendo os dados do usuário para cada atributo*/
    printf("Digite o estado: \n");
    
    scanf(" %c", &estado);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome_da_cidade);

    printf("Digite a população: \n");
    scanf(" %d", &populacao);

    printf("Digite a área: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos: \n");
    scanf(" %d", &numero_de_pontos_turisticos);

    /*Exibindo os dados na tela do usuário*/
    printf("\nEstado: %c ", estado);
    printf("\nNome da cidade: %s ", nome_da_cidade);
    printf("\nCódigo da carta: %s ", codigo_da_carta);
    printf("\nPopulação: %d ", populacao);
    printf("\nÁrea: %.2f km² ", area);
    printf("\nPIB: %.2f bilhões de reais ", pib);
    printf("\nNúmero de pontos turísticos: %d ", numero_de_pontos_turisticos);
    printf("\nCadastro finalizado com sucesso, bom jogo!\n");

    return 0;
}
