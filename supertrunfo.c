#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main(){
    

    // - Declaração de dados da Carta 1
    char estado1;
    char codigo1[5];   //Ex: A01 (3 chars + \0)
    char cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;


    // - Declaração de dados da Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;



    printf("===========================================\n");
    printf(" Bem-vindo ao jogo Super Trunfo de Cidades\n");
    printf("===========================================\n");
    
    printf("Vamos começar cadastrando os dados da sua primeira carta.\n");
    printf("---- CADASTRO DA CARTA 1 ----\n");
    


    //Leitura dos dados da Carta 1
    printf("Estado: ");
    scanf(" %c", &estado1);  //lê um caractere
    
    printf("Código: ");
    scanf(" %4s", codigo1);  //lê a string do código
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("População: ");
    scanf(" %d", &populacao1);
    
    printf("Área (Km²): ");
    scanf(" %f", &area1);
    
    printf("PIB: ");
    scanf(" %f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);


    printf("\nCarta 1 cadastrada com sucesso!\n"); //informa o cadastro da primeira carta ao usuário


    printf("\n---- CADASTRO DA CARTA 2 ----\n");
    //Leitura dos dados da Carta 2
    printf("Estado: ");
    scanf(" %c", &estado2);
    
    printf("Código: ");
    scanf(" %4s", codigo2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf(" %d", &populacao2);
    
    printf("Área (Km²): ");
    scanf(" %f", &area2);
    
    printf("PIB: ");
    scanf(" %f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);


    printf("\n===========================================\n");
    printf(" SUAS CARTAS FORAM CADASTRADAS COM SUCESSO!\n");
    printf("===========================================\n");



    //exibição da carta 1
    printf("\n---> CARTA 1 <---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Túristicos: %d\n", pontos_turisticos1);



    //exibição da carta 2
    printf("\n---> CARTA 2 <---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade; %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Túristicos: %d\n", pontos_turisticos2);

    return 0;


}
