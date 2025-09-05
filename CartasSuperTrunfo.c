#include <stdio.h>

int main() {
    printf("Desafio SuperTrunfo\n");

    int Carta1, Carta2;
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Nome_da_Cidade1[50], Nome_da_Cidade2[50];
    int Populaçao1, Populaçao2;
    float Area1, Area2; 
    float PIB1, PIB2;
    int Numeros_de_pontos_turisticos1, Numeros_de_pontos_turisticos2;
    float Densidade_populacional1, Densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;

    // primeiro usuario irá realizar o cadastramento da carta 1 e enseguida da carta 2.

    printf("Digite o numero da sua Carta ");
    scanf("%d", &Carta1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", &Codigo1);
    
    printf("Digite o nome do Estado: ");
    scanf("%s", &Estado1);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &Nome_da_Cidade1);
    
    printf("Digite a quantidade da população: ");
    scanf("%d", &Populaçao1);
    
    printf("Digite a Area da cidade: ");
    scanf("%f", &Area1);
    
    printf("Digite PIB: ");
    scanf("%f", &PIB1);    

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d,\n", &Numeros_de_pontos_turisticos1);

    printf("\n");
    printf("Digite as informações da proxima carta: \n"); 
    //colcoado printf("\n") para separar informação digitada pelo usuario das duas cartas

    printf("Digite o numero da sua Carta ");
    scanf("%d", &Carta2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", &Codigo2);
    
    printf("Digite o nome do Estado: ");
    scanf("%s", &Estado2);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", &Nome_da_Cidade2);
    
    printf("Digite a quantidade da população: ");
    scanf("%d", &Populaçao2);
    
    printf("Digite a Area da cidade: ");
    scanf("%f", &Area2);
    
    printf("Digite PIB: ");
    scanf("%f", &PIB2);    

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d,\n", &Numeros_de_pontos_turisticos2);

    printf("\n"); 
    //colcoado printf("\n") para separar informação digitada pelo usuario da impressao das cartas

    printf("Informações da Carta: \n");
    printf("Carta: %d\n", Carta1);
    printf("Codigo: %s\n", Codigo1);
    printf("Estado: %s\n", Estado1);
    printf("Nome da cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populaçao1);
    printf("Area: %.2f, km²\n", Area1);
    printf("PIB: %.2f, Bilhões de Reais\n", PIB1);
    printf("Numero de pontos turistico: %d\n", Numeros_de_pontos_turisticos1);

    // Acressentado Densida populacional / PIB per capita e codigo de calculo

    Densidade_populacional1 = (float)(Populaçao1 / Area1);
    printf("Densidade populacional: %.5f\n", Densidade_populacional1);
    PIB_per_capita1 = (float)(PIB1 / Populaçao1);
    printf("PIB Per capita: %.5f\n", PIB_per_capita1);
    
    printf("\n"); 
    //colcoado printf("\n") para deixa uma linha em branco

    printf("Informações da Carta: \n");
    printf("Carta: %d\n", Carta2);
    printf("Codigo: %s\n", Codigo2);
    printf("Estado: %s\n", Estado2);
    printf("Nome da cidade: %s\n", Nome_da_Cidade2);
    printf("População: %d\n", Populaçao2);
    printf("Area: %.2f, km²\n", Area2);
    printf("PIB: %.2f, Bilhões de Reais\n", PIB2);
    printf("Numero de pontos turistico: %d\n", Numeros_de_pontos_turisticos2);

    // Acressentado Densida populacional / PIB per capita e codigo de calculo
   
    Densidade_populacional2 = (float)(Populaçao2 / Area2);
    printf("Densidade populacional: %.5f\n", Densidade_populacional2);
    PIB_per_capita2 = (float)(PIB2 / Populaçao2);
    printf("PIB Per capita: %.5f\n", PIB_per_capita2);


    return 0;
}