#include <stdio.h>

int main(){

    //declaração de variaveis
        int populacao1, populacao2 ,pt_tur1, pt_tur2;      
        char estado1 = 'R';
        char est2[1];     
        char cd_carta1[3], cidade1[20];        
        char cd_carta2[3], cidade2[20];
        float area1, area2, pib1, pib2;

    //entrada de dados da primeira carta
        printf("Carta 1:\n");

        printf("digite o estado('A' a 'H'): ");
        scanf("%c", &estado1);
        
        printf("digite o codico da carta de 01 a 04: ");
        scanf("%s", &cd_carta1);

        printf("digite o nome da cidade: ");
        scanf("%s", &cidade1);

        printf("digite o numero da populacao: ");
        scanf("%d", &populacao1);

        printf("digite a area: ");
        scanf("%f", &area1);
    
        printf("digite o pib: ");
        scanf("%f", &pib1);

        printf("digite a quantidade de pontos turisticos: ");
        scanf("%d", &pt_tur1);

        //entrada de dados da segunda carta
        printf("\nCarta 2:\n");

        printf("digite o estado2('B' a 'H'): ");
        scanf("%s", &est2);    
        
        printf("digite o codico da carta de 01 a 04: ");
        scanf("%s", &cd_carta2);

        printf("digite o nome da cidade: ");
        scanf("%s", &cidade2);

        printf("digite o numero da populacao: ");
        scanf("%d", &populacao2);

        printf("digite a area: ");
        scanf("%f", &area2);
    
        printf("digite o pib: ");
        scanf("%f", &pib2);

        printf("digite a quantidade de pontos turisticos: ");
        scanf("%d", &pt_tur2);
    
    //saida de dados da primeira carta
        printf("\nCarta 1:");
        printf("\nestado: %c", estado1);        
        printf("\nCódigo: %c%s", estado1, cd_carta1);
        printf("\nNome da Cidade: %s", cidade1);
        printf("\nPopulação: %d", populacao1);
        printf("\nÁrea: %.2f km²", area1);
        printf("\nPIB: %.2f bilhões de reais", pib1);
        printf("\nNúmero de Pontos Turísticos: %d\n", pt_tur1);         
     
     //saida de dados da segunda carta
         printf("\nCarta 2:");
         printf("\nestado: %s", est2);        
         printf("\nCódigo: %s%s", est2, cd_carta2);
         printf("\nNome da Cidade: %s", cidade2);
         printf("\nPopulação: %d", populacao2);
         printf("\nÁrea: %.2f km²", area2);
         printf("\nPIB: %.2f bilhões de reais", pib2);
         printf("\nNúmero de Pontos Turísticos: %d", pt_tur2);
        
    return 0;

}
