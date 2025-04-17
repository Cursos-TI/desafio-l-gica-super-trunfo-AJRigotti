#include <stdio.h>

int main () {

//variaveis:
    char nome_estado1[20], nome_estado2[20];
    char nome_cidade1[20], nome_cidade2[20];
    char codigo1[20], codigo2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    unsigned long long int pib1, pib2; //senti necessidade de trocar para unsigned long long int pois algumas cidades possuem PIBs na casa das centenas de bilhoes, por exemplo.
    int pontos1, pontos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    unsigned long int superpoder1, superpoder2;
    int pontostotais1, pontostotais2;
    int escolha_comparacao;

    

//perguntando as informações da primeira carta para o jogador:
    printf("Qual o nome do estado da primeira carta?\n");   //pergunta o nome do estado da carta e armazena a informação dada pelo o usuário
    scanf("%s", nome_estado1);

    printf("Qual o nome da cidade da primeira carta?\n");   //pergunta o nome da cidade da carta e armazena a informação dada pelo o usuário
    scanf("%s", nome_cidade1);

    printf("Qual o código cidade da primeira carta?\n");    //pergunta o código da carta e armazena a informação dada pelo o usuário
    scanf("%s", codigo1);

    printf("Qual população da cidade da primeira carta?\n");    //pergunta a população da carta e armazena a informação dada pelo o usuário
    scanf("%lu", &populacao1);

    printf("Qual área da cidade da primeira carta?\n");     //pergunta a área da carta e armazena a informação dada pelo o usuário
    scanf("%f", &area1);

    printf("Qual o PIB da cidade da primeira carta?\n");    //pergunta o PIB da carta e armazena a informação dada pelo o usuário
    scanf("%llu", &pib1);

    printf("Quantos pontos turisticos tem na cidade da primeira carta?\n");     //pergunta a quatidade pontos turisticos da carta e armazena a informação dada pelo o usuário
    scanf("%d", &pontos1);
 
//calculando a densidade populacional, pib per capita e super poder da primeira carta:

    densidade1 = (float) populacao1 / area1;            //divide a população pela área
    percapita1 = (float) pib1 / populacao1;             //divide o pib pela população
    superpoder1 = (float) populacao1 + (float) area1 + (float) pontos1 + (float) percapita1 - (float) densidade1;   //soma todas as informações e subtrai a densidade populacional

//mostrando as informações da primeira carta:
    printf("Obrigado por responder! Aqui estão as informações da primeira carta:\n");           //todas as linhas imprimem a mensagem escrita com os valores fornecidos anteriormente
    printf("Nome do estado: %s \n", nome_estado1);
    printf("Cidade: %s \n", nome_cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área em km2: %.2f \n", area1);
    printf("PIB: %llu \n", pib1);
    printf("Quantidade de pontos turisticos: %d \n", pontos1);
    printf("Código da carta: %s \n", codigo1);
    printf("PIB per Capita: %.2f \n", percapita1);
    printf("Densidade populacional: %.2f \n", densidade1);
    printf ("Super Poder: %lu \n", superpoder1);




//perguntando as informações da segunda carta para o jogador:
    printf("Agora, digite as informações da segunda carta. \n");

    printf("Qual o nome do estado da segunda carta?\n");    //pergunta o nome do estado da carta e armazena a informação dada pelo o usuário
    scanf("%s", nome_estado2);

    printf("Qual o nome da cidade da segunda carta?\n");    //pergunta o nome da cidade da carta e armazena a informação dada pelo o usuário
    scanf("%s", nome_cidade2);

    printf("Qual o código cidade da segunda carta?\n");     //pergunta o código da carta e armazena a informação dada pelo o usuário
    scanf("%s", codigo2);

    printf("Qual população da cidade da segunda carta?\n");     //pergunta a populção da carta e armazena a informação dada pelo o usuário
    scanf("%lu", &populacao2);

    printf("Qual área da cidade da segunda carta?\n");      //pergunta a área da carta e armazena a informação dada pelo o usuário
    scanf("%f", &area2);

    printf("Qual o PIB da cidade da segunda carta?\n");     //pergunta o PIB da carta e armazena a informação dada pelo o usuário
    scanf("%llu", &pib2);

    printf("Quantos pontos turisticos tem na cidade da segunda carta?\n");      //pergunta a quantidade de pontos turisticos da carta e armazena a informação dada pelo o usuário
    scanf("%d", &pontos2);
 

//calculando a densidade populacional, pib per capita e super poder da segunda carta:

    densidade2 = (float) populacao2 / area2;    //divide a população pela área
    percapita2 = (float) pib2 / populacao2;     //divide o pib pela população
    superpoder2 = (float) populacao2 + (float) area2 + (float) pontos2 + (float) percapita2 - (float) densidade2;   //soma todas as informações e subtrai a densidade populacional

//mostrando as informações da segunda carta:
    printf("Obrigado por responder! Aqui estão as informações da segunda carta:\n");        //todas as linhas imprimem a mensagem escrita com os valores fornecidos anteriormente
    printf("Nome do estado: %s \n", nome_estado2);
    printf("Cidade: %s \n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área em km2: %.2f \n", area2);
    printf("PIB: %llu \n", pib2);
    printf("Quantidade de pontos turisticos: %d \n", pontos2);
    printf("Código da carta: %s \n", codigo2);
    printf("PIB per Capita: %.2f \n", percapita2);
    printf("Densidade populacional: %.2f \n", densidade2);
    printf("Super poder: %lu \n", superpoder2);


//perguntando ao jogador qual atributo comparar
    printf("Agora, vamos comparar as duas cartas!\n");
    printf("Escolha qual atributo comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Superpoder\n");
    scanf("%d", &escolha_comparacao);
    
//fazendo a comparacao da escolha do jogador
    switch (escolha_comparacao) {
        case 1:
    printf("Comparação de cartas (Atributo: População):\n");        
    printf("Carta 1 (%s): %lu\n", nome_cidade1, populacao1);        //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s): %lu\n", nome_cidade2, populacao2);        //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if (populacao1 > populacao2){                                    // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (populacao1 < populacao2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2 ++;                                           //e vai adicionar 1 ponto total a carta 2
    } else {
        printf("Empate!!\n");
    }
        break;

        case 2:
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 (%s): %.2f\n", nome_cidade1, area1);            //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s): %.2f\n", nome_cidade2, area2);            //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if (area1 > area2){                                              // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (area1 < area2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2 ++;                                           //e vai adicionar 1 ponto total a carta 2
    } else{
        printf("Empate!!\n");
    }
        break;

        case 3:
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 (%s): %llu\n", nome_cidade1, pib1);             //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s): %llu\n", nome_cidade2, pib2);             //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if(pib1 > pib2){                                                // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (pib1 < pib2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2 ++;                                           //e vai adicionar 1 ponto total a carta 2
    } else {
        printf("Empate!!\n");
    }
        break;

        case 4:
    printf("Comparação de cartas (Atributo: Pontos Turisticos):\n");
    printf("Carta 1 (%s): %d\n", nome_cidade1, pontos1);            //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s): %d\n", nome_cidade2, pontos2);            //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if(pontos1 > pontos2){                                          // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (pontostotais1 < pontostotais2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2++;                                            //e vai adicionar 1 ponto total a carta 2
    } else{
        printf("Empate!!\n");
    }
        break;

        case 5:
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 (%s) %.2f\n", nome_cidade1, densidade1);        //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s) %.2f\n", nome_cidade2, densidade2);        //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if(densidade1 < densidade2){                                    // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (densidade1 > densidade2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2++;                                            //e vai adicionar 1 ponto total a carta 2
    } else {
        printf("Empate!!\n");
    }
        break;

        case 6:
    printf("Comparação de cartas (Atributo: Superpoder):\n");
    printf("Carta 1 (%s): %lu\n", nome_cidade1, superpoder1);       //imprime a mensagem com o nome da cidade e o atributo de cada carta
    printf("Carta 2 (%s): %lu\n", nome_cidade2, superpoder2);       //imprime a mensagem com o nome da cidade e o atributo de cada carta
    if(superpoder1 > superpoder2){                                  // compara os dois valores
        printf("A Carta 1 (%s) venceu!!\n", nome_cidade1);          //se o primeiro valor for maior, imprimirá essa mensagem
        pontostotais1 ++;                                           //e vai adicionar 1 ponto total a carta 1
    } else if (superpoder1 < superpoder2){
        printf("A Carta 2 (%s) venceu!!\n", nome_cidade2);          //se o segundo valor for maior, imprimirá essa mensagem
        pontostotais2++;                                            //e vai adicionar 1 ponto total a carta 2
    } else {
        printf("Empate!!\n");
    }
        break;
}
    return 0;

}