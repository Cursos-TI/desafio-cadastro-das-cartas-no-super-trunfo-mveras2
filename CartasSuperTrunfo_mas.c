#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
//_________________________________________________________________________________________________________________________

    //Declaração das variáveis
    /*para evitar que as variáveis criadas passuam valores indesejados as variáveis serão declaradas já com um valor que
    será substituido durante o programa*/
    
    char estado, estado2;
    char cod[4], cod2[4];     // No caso do código ter 3 caracteres o string tem que ser no mínimo [4]. Ao usar 3 estava retornando a o cod+nome_cidade
    char nome_cidade[20], nome_cidade2[20];
    int populacao = 0, pto_tur = 0, populacao2 = 0, pto_tur2 = 0;      
    float area = 0, PIB =0, area2 = 0, PIB2 =0;      
    float den_pop = 0, pib_cap = 0,  den_pop2 = 0, pib_cap2 = 0;           //novas variáveis para o nível Aventureiro       

    /*
    Comparação de Cartas:
        O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
        Cada carta terá um "Super Poder", que é a soma de todas as propriedades. Para equilibrar os atributos 
        do Super Poder, considerei a população em dezenas de milhares de habitantes (*1/100000). 
    */


    //Cabeçalho do terminal
    printf("________________________________________________________________________________________________\n");
    printf("//                   Desafio Super Trunfo 1 - Mestre                                            //\n");
    printf("//    Essa rotina coleta-rá os valores correspondentes de cada atributo de uma cartas,          //\n");
    printf("// acrescenta-rá o cálculo da densidade populacional, do PIB-capta e do atributo 'Super Poder'. //\n");
    printf("//    Por fim, a rotina fará a comparação do atributo selecionade entre as cartas               //\n");
    printf("//______________________________________________________________________________________________//\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/

    printf("Insira os atributos da Carta1: \n");
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &estado);
    printf("O código da carta é composto por uma letra maiúscula variando de A à H e um número variando entre 1 e 4.\n");
    printf("Agora defina abaixo o código da Carta. Para isso, deve-se utilizar o seguinte formato [A01]:\n");
    scanf(" %[^\n]", cod);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%d", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [Bilhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);
    printf("_______________________________________________________________\n");
    printf("Insira os atributos da Carta2: \n");
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf(" %c", &estado2);          // para evitar que esse comando pule foi inserido um espaço antes do especificador de formato para qq caracere em branco, tabulação e novas linhas sejam ignorados.
    printf("O código da carta é composto por uma letra maiúscula variando de A à H e um número variando entre 1 e 4.\n");
    printf("Agora defina abaixo o código da Carta. Para isso, deve-se utilizar o seguinte formato [A01]:\n");
    scanf(" %[^\n]", cod2);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade2);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%d", &populacao2);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area2);
    printf("Inserir o PIB da cidade [Bilhões de R$]:\n");
    scanf("%f", &PIB2);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur2);

    //Cálculo da densidade populacional e o PIB per capta

    den_pop = (float) populacao / area;
    pib_cap = (float) PIB*1000000000 / populacao;

    den_pop2 = (float) populacao2 / area2;
    pib_cap2 = (float) PIB2*1000000000 / populacao2;

    //Cálculo do Super Poder

    //Novas variáveis para o nível Mestre
    float sup_pder = 0, sup_pder2 = 0;

    sup_pder = (float) populacao/10000 + area + PIB + pto_tur + (1/den_pop) + pib_cap;
    sup_pder2 = (float) populacao2/10000 + area2 + PIB2 + pto_tur2 + (1/den_pop2) + pib_cap2;

    //Retorna os valores dos atributros inseridos pelo usuário

    printf("\n__________________________________________________________________________________________________________\n");
    printf("Resumo dos atributos da carta:\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População [Habitantes]: %d\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB [Bilhões de R$]: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    printf("Densidade populacional [Habitrantes / km²]: %.2f\n", den_pop);
    printf("PIB per capita [R$ / Habitante]: %.2f\n", pib_cap);
    printf("SUPER PODER: %.2f\n", sup_pder);
    printf("\n__________________________________________________________________________________________________________\n"); 
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População [Habitantes]: %d\n", populacao2);
    printf("Área [km²]: %.2f\n", area2);
    printf("PIB [Bilhões de R$]: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pto_tur2);
    printf("Densidade populacional [Habitrantes / km²]: %.2f\n", den_pop2);
    printf("PIB per capita [R$ / Habitante]: %.2f\n", pib_cap2);
    printf("SUPER PODER: %.2f\n", sup_pder2);
    printf("\n__________________________________________________________________________________________________________\n"); 

    //Apresenta o comparativo entre os atributos de cada carta

    printf("Comparativo entre os atributosd das duas cartas:\n");
    printf("Se o valor do atributo da Carta 1 for maior que o da Carta 2, então\n");
    printf("o programa retornará 1 e a Carta '1' será a vencedora, se retornar '0' a Carta 2 vencerá.\n\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Pontos turísticos: %d\n", pto_tur > pto_tur2);
    printf("Densidade populacional: %d\n", den_pop < den_pop2);
    printf("PIB per Capta: %d\n", pib_cap > pib_cap2);
    printf("SUPER PODER: %d\n\n", sup_pder > sup_pder2);
    printf("\n__________________________________________________________________________________________________________\n"); 


    return 0;
}