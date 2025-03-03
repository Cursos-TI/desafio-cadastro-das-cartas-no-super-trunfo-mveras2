#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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
    
    char pais;
    int cidade = 0, pto_tur=0;      
    float area = 0, PIB =0, populacao = 0;      
    float den_pop = 0, pib_cap = 0;           //novas variáveis para o nível Aventureiro


    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________________________\n");
    printf("//                              Desafio Super Trunfo 1 - Avançado                                       //\n");
    printf("//          Essa rotina coleta-rá os valores correspondentes de cada atributo de uma cartas             //\n");
    printf("//                 e acrescenta-rá o cálculo da densidade populacional e do PIB-capta                   //\n");
    printf("//______________________________________________________________________________________________________//\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/

    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &pais);
    printf("Para a identificação da cidade utilize uma valor entre 1-4: \n");
    scanf("%d", &cidade);
    printf("Inserir o tamanho da população [Habitantes]:\n");
    scanf("%f", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [bilhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);

    //Cálculo da densidade populacional e o PIB per capta

    den_pop = (float) populacao / area;
    pib_cap = (float) PIB*1000000000 / populacao;
    
    //Retorna os valores inseridos

    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo dos atributos da carta:\n");
    printf("País/Cidade: %c0%d\n", pais, cidade);
    printf("População [mil de habitantes]: %.0f\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    //apresentação das variáveis do nível aventureiro
    printf("Densidade populacional [Habitantes / km²]: %.2f\n", den_pop);
    printf("PIB per Capta [R$ / Habitantes]: %.2f\n", pib_cap);
    printf("\n__________________________________________________________________________________________________________\n\n"); 

    return 0;
}