#include <stdio.h>

int main() {
    

    char estado, codigo_da_carta[3];
    char nome_da_cidade[20];
    int populacao, numero_de_pontos_turisticos;
    float area, pib;

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


    printf("\nEstado: %c ", estado);
    printf("\nNome da cidade: %s ", nome_da_cidade);
    printf("\nCódigo da carta: %s ", codigo_da_carta);
    printf("\nPopulação: %d ", populacao);
    printf("\nÁrea: %.2f km² ", area);
    printf("\nPIB: %.2f ", pib);
    printf("\nNúmero de pontos turísticos: %d ", numero_de_pontos_turisticos);
    printf("\nCadastro finalizado com sucesso, bom jogo!\n");



    return 0;
}
