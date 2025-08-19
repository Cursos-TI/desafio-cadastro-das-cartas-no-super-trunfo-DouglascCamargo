#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio SuperTrunfo\n");

    int Carta;
    char Estado[50];
    char Codigo[20];
    char Nome_da_Cidade[50];
    int Populaçao;
    float Area; 
    float PIB;
    int Numeros_de_pontos_turisticos;

    // primeiro usuario irá realizar o cadastramento da carta.

    printf("Digite o numero da sua Carta ");
    scanf("%d", &Carta);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", &Codigo);
    
    printf("Digite o nome do Estado: ");
    scanf("%s", &Estado);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &Nome_da_Cidade);
    
    printf("Digite a quantidade da população: ");
    scanf("%d", &Populaçao);
    
    printf("Digite a Area da cidade: ");
    scanf("%f", &Area);
    
    printf("Digite PIB: ");
    scanf("%f", &PIB);    

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d,\n", &Numeros_de_pontos_turisticos);

    printf("\n"); //colcoado printf("\n") para separar informação digitada pelo usuario da impressão das informações 

    // segundo irá realizar a impressão das informações cadastrada pelo usuario.
    
    printf("Informações da Carta: \n");
    printf("Carta: %d\n", Carta);
    printf("Codigo: %s\n", Codigo);
    printf("Estado: %s\n", Estado);
    printf("Nome da cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populaçao);
    printf("Area: %.2f, km²\n", Area);
    printf("PIB: %.2f, Bilhões de Reais\n", PIB);
    printf("Numero de pontos turistico: %d\n", Numeros_de_pontos_turisticos);
    
   
    
    return 0;


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
