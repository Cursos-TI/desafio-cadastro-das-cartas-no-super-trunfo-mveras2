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
    
    char estado;
    char codigo[3];
    char nome_cidade[20];
    int populacao = 0, pto_tur=0;      
    float area = 0, PIB =0,   


    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________\n");
    printf("//                  Desafio Super Trunfo 1 - Novato                                    //\n");
    printf("//  Essa rotina coleta-rá os valores correspondentes de cada atributo de uma cartas.   //\n");
    printf("//_________________________ ___________________________________________________________//\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar
    O programa solicitará informação de duas cartas
    */

    printf("Insira os atributos da Carta1: \n");
    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &estado);
    printf("O código da carta é comporto por uma letra maiuscula vairando de A à H e um número variando entre 1 e 4.\n");
    printf("Deifna abaico o código da Carta, para isso o código deve ter o seguinte formato [A01]:\n");
    scanf("%s", codigo);
    printf("Insira o nome da cidade:\n");
    scanf(" %[^/n]", nome_cidade);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%f", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [Bilhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);

    //Retorna os valores inseridos

    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo dos atributos da carta:\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População [Habitantes]: %.2f\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    printf("\n__________________________________________________________________________________________________________\n\n"); 

    return 0;
}
