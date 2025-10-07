#include <stdio.h>

int main() {
    printf("Desafio SuperTrunfo\n");

    int Carta1 , Carta2;
    char Estado1[50], Estado2[50];
    char Codigo1[50], Codigo2[50];
    char Nome_da_Cidade1[50], Nome_da_Cidade2[50];
    int Populaçao1, Populaçao2;
    float Area1, Area2; 
    float PIB1, PIB2;
    int Numeros_de_pontos_turisticos1, Numeros_de_pontos_turisticos2;
    float Densidade_populacional1, Densidade_populacional2;
    float PIB_per_capita1, PIB_per_capita2;


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

    // Diferença em relação ao Nível Aventureiro:**

//**Comparação de Cartas:** O usuário poderá comparar as duas cartas.

//**Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

// **Funcionalidades do Sistema:**

//*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
//*   Para Densidade Populacional, vence a carta com o *menor* valor.
//*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

//**Entrada** e  **Saída de Dados:**

//   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
//*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.




    return 0;
}