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
    /*para evitar que as variáveis criadas passuam valores indesejados todas as variáveis serão declaradas já com um valor que
    será substituido durante o programa*/
    
    char pais;
    int cidade = 0, pto_tur=0;      
    float area = 0, PIB =0, populacao = 0;       


    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________________________\n");
    printf("//                              Desafio Super Trunfo - Novato                                           //\n");
    printf("//           Essa rotina coleta-rá os valores correspondentes de cada uma das cartas.                   //\n");
    printf("//______________________________________________________________________________________________________//\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/

    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &pais);
    printf("Para a identificação da cidade utilize uma valor entre 1-8: \n");
    scanf("%d", &cidade);
    printf("Inserir o tamanho da população [mil de habitantes]:\n");
    scanf("%f", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [milhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);

    //Apresenta os valores inseridos

    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo das informações inseridas para cada carta:\n");
    printf("País/Cidade: %c0%d\n", pais, cidade);
    printf("População [mil de habitantes]: %.2f\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n\n", pto_tur);
  

    return 0;
}
