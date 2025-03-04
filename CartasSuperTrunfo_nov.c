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

    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________\n");
    printf("//                  Desafio Super Trunfo 1 - Novato                                    //\n");
    printf("//  Essa rotina coleta-rá os valores correspondentes de cada atributo de uma cartas.   //\n");
    printf("//_____________________________________________________________________________________//\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar
    O programa solicitará informação de duas cartas
    */

    printf("Insira os atributos da Carta1: \n");
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf(" %c", &estado);
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

    //Retorna os valores inseridos

    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo dos atributos da carta:\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", cod);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População [Habitantes]: %d\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB [Bilhões de R$]: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    printf("\n__________________________________________________________________________________________________________\n\n"); 
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População [Habitantes]: %d\n", populacao2);
    printf("Área [km²]: %.2f\n", area2);
    printf("PIB [Bilhões de R$]: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pto_tur2);
    printf("\n__________________________________________________________________________________________________________\n\n"); 


    return 0;
}
