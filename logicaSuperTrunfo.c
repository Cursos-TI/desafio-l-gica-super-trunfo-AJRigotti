#include <stdio.h>
#include <string.h>

int main () {

//variaveis:
    char nome_estado1[50], nome_estado2[50];
    char nome_cidade1[50], nome_cidade2[50];
    char codigo1[20], codigo2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    unsigned long long int pib1, pib2; //senti necessidade de trocar para unsigned long long int pois algumas cidades possuem PIBs na casa das centenas de bilhoes, por exemplo.
    int pontos1, pontos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    unsigned long int superpoder1, superpoder2;
    int pontostotais1, pontostotais2;
    int escolha_comparacao1, escolha_comparacao2;
    unsigned long long int carta1 = 0, carta2 = 0;

    

//perguntando as informações da primeira carta para o jogador:
    printf("Qual o nome do estado da primeira carta?\n");   //pergunta o nome do estado da carta e armazena a informação dada pelo o usuário
    fgets(nome_estado1, sizeof(nome_estado1), stdin);       //permite escrever o nome com espaços
    nome_estado1[strcspn(nome_estado1, "\n")] = '\0';

    printf("Qual o nome da cidade da primeira carta?\n");   //pergunta o nome da cidade da carta e armazena a informação dada pelo o usuário
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);       //permite escrever o nome com espaços
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Qual o código cidade da primeira carta?\n");    //pergunta o código da carta e armazena a informação dada pelo o usuário
    scanf("%s", codigo1);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual população da cidade da primeira carta?\n");    //pergunta a população da carta e armazena a informação dada pelo o usuário
    scanf("%lu", &populacao1);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual área da cidade da primeira carta?\n");     //pergunta a área da carta e armazena a informação dada pelo o usuário
    scanf("%f", &area1);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual o PIB da cidade da primeira carta?\n");    //pergunta o PIB da carta e armazena a informação dada pelo o usuário
    scanf("%llu", &pib1);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Quantos pontos turisticos tem na cidade da primeira carta?\n");     //pergunta a quatidade pontos turisticos da carta e armazena a informação dada pelo o usuário
    scanf("%d", &pontos1);
    getchar();                                              // limpa o '\n' que fica no buffer
 
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
    fgets(nome_estado2, sizeof(nome_estado2), stdin);       //permite escrever o nome com espaços
    nome_estado2[strcspn(nome_estado2, "\n")] = '\0';

    printf("Qual o nome da cidade da segunda carta?\n");    //pergunta o nome da cidade da carta e armazena a informação dada pelo o usuário
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);       //permite escrever o nome com espaços
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Qual o código cidade da segunda carta?\n");     //pergunta o código da carta e armazena a informação dada pelo o usuário
    scanf("%s", codigo2);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual população da cidade da segunda carta?\n");     //pergunta a populção da carta e armazena a informação dada pelo o usuário
    scanf("%lu", &populacao2);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual área da cidade da segunda carta?\n");      //pergunta a área da carta e armazena a informação dada pelo o usuário
    scanf("%f", &area2);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Qual o PIB da cidade da segunda carta?\n");     //pergunta o PIB da carta e armazena a informação dada pelo o usuário
    scanf("%llu", &pib2);
    getchar();                                              // limpa o '\n' que fica no buffer

    printf("Quantos pontos turisticos tem na cidade da segunda carta?\n");      //pergunta a quantidade de pontos turisticos da carta e armazena a informação dada pelo o usuário
    scanf("%d", &pontos2);
    getchar();                                              // limpa o '\n' que fica no buffer
 

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
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Superpoder\n");
    scanf("%d", &escolha_comparacao1);
    getchar();                                              // limpa o '\n' que fica no buffer

//fazendo a comparacao da escolha do jogador
    switch (escolha_comparacao1)
    {
    case 1:
        (populacao1 > populacao2) ? (carta1 += populacao1) : (carta2 += populacao2);    //dependendo da escolha do usuario, ele ve qual carta
    break;                                                                              //possui maior valor, e depois adiciona o valor do
                                                                                        //atributo para a carta
    case 2:
        (area1 > area2) ? (carta1 += area1) : (carta2 += area2);
    break;
    
    case 3:
        (pib1 > pib2) ? (carta1 += pib1) : (carta2 += pib2);
    break;
    
    case 4:
        (pontos1 > pontos2) ? (carta1 += pontos1) : (carta2 += pontos2);
    break;
    
    case 5:
        (densidade1 < densidade2) ? (carta1 += densidade1) : (carta2 += densidade2);
    break;
    
    case 6:
        (superpoder1 > superpoder2) ? (carta1 += superpoder1) : (carta2 += superpoder2);
    break;
    
    default:
        printf("Opção inválida!\n");
    break;
    }   

// perguntando o segundo atributo
    printf("Escolha o segundo atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Quantidade de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Superpoder\n");
    scanf("%d", &escolha_comparacao2);
    getchar();                                              // limpa o '\n' que fica no buffer

// fazendo comparacao e nao deixando o usuario escolher o mesmo atributo duas vezes
    if (escolha_comparacao1 == escolha_comparacao2){
        printf("Você escolheu a mesma opção.\n");
    } else{
        switch (escolha_comparacao2)
        {
        case 1:
            (populacao1 > populacao2) ? (carta1 += populacao1) : (carta2 += populacao2);
        break;
    
        case 2:
            (area1 > area2) ? (carta1 += area1) : (carta2 += area2);
        break;
        
        case 3:
            (pib1 > pib2) ? (carta1 += pib1) : (carta2 += pib2);
        break;
        
        case 4:
            (pontos1 > pontos2) ? (carta1 += pontos1) : (carta2 += pontos2);
        break;
        
        case 5:
            (densidade1 < densidade2) ? (carta1 += densidade1) : (carta2 += densidade1);
        break;
        
        case 6:
            (superpoder1 > superpoder2) ? (carta1 += superpoder1) : (carta2 += superpoder2);
        break;
        
        default:
            printf("Opção inválida!\n");
        break;
        }   
    
    }
//mostrando o resultado das comparações para o usuario
    printf("Resultado das comparações:\n");
    printf("Cidades comparadas: %s e %s\n", nome_cidade1 , nome_cidade2);
    switch (escolha_comparacao1)
    {
    case 1:
        printf("Atributos comparados: População e ");       //imprime frases diferentes dependendo do que o usuario escolheu comparar
    break;

    case 2:
        printf("Atributos comparados: Área e ");
    break;
    
    case 3:
        printf("Atributos comparados: PIB e ");
    break;

    case 4:
        printf("Atributos comparados: Pontos Turisticos e ");
    break;

    case 5:
        printf("Atributos comparados: Densidade Populacional e ");
    break;

    case 6:
        printf("Atributos comparados: Superpoder e ");
    break;

    default:
        printf("Invalido");
    break;
    }

    switch (escolha_comparacao2)
    {
    case 1:
        printf("População\n");
    break;

    case 2:
        printf("Área\n");
    break;
    
    case 3:
        printf("PIB\n");
    break;

    case 4:
        printf("Pontos Turisticos\n");
    break;

    case 5:
        printf("Densidade Populacional\n");
    break;

    case 6:
        printf("Superpoder\n");
    break;

    default:
        printf("Invalido");
    break;
    }

    printf("Soma dos atributos das cartas:\n");
    printf("%s = %llu e %s = %llu \n", nome_cidade1, carta1 , nome_cidade2, carta2);
    printf("O resultado é...\n");

    if(carta1 > carta2){
        printf("%s venceu!!! Parabéns!!\n", nome_cidade1);
    } else if (carta1 == carta2) {
        printf("Empate!!!\n");
    } else{
        printf("%s venceu!!! Parabéns!!\n", nome_cidade2);
    }

    return 0;
}