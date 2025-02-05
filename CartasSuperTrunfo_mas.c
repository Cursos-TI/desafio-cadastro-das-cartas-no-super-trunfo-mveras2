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
    float den_pop = 0, pib_cap = 0;           

    //novas variáveis com valores para serem utilizados no comparador para o desafio nível mestre

    int pto_tur1=30;      
    float area1 = 500, PIB1 =500, populacao1 = 500;      
    float den_pop1 = 0, pib_cap1 = 0;  

    /*
    Comparação de Cartas:
        O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
        Cada carta terá um "Super Poder", que é a soma de todas as propriedades.
*/


    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________________________\n");
    printf("//                              Desafio Super Trunfo - Novato                                           //\n");
    printf("//           Essa rotina coleta-rá os valores correspondentes de cada uma das cartas.                   //\n");
    printf("//______________________________________________________________________________________________________//\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/

    printf("Para a identificação do País utilize uma letra de A-H: \n");
    scanf("%c", &pais);
    printf("Para a identificação da cidade utilize uma valor entre 1-4: \n");
    scanf("%d", &cidade);
    printf("Inserir o tamanho da população [mil de habitantes]:\n");
    scanf("%f", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [milhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);

    //Cálculo da densidade populacional e o PIB per capta

    den_pop = populacao / area;
    pib_cap = PIB*1000 / populacao;

    //valores para serem utilizados no comparador para o desafio nível mestre
    den_pop1 = populacao1 / area1;
    pib_cap1 = PIB1*1000 / populacao1;
    
    //Retorna os valores inseridos

    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo das informações inseridas para cada carta:\n");
    printf("País/Cidade: %c0%d\n", pais, cidade);
    printf("População [mil de habitantes]: %.2f\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    printf("Densidade populacional [habitantes / km²]: %.2f\n", den_pop);
    printf("PIB per Capta [R$ / habitantes]: %.2f\n", pib_cap);
    printf("\n__________________________________________________________________________________________________________\n\n"); 

//Retorna os valores da Cidade Referência
 
    printf("Resumo das informações inseridas para a carta da Cidade de Referência:\n\n");
    printf("População [mil de habitantes]: %.2f\n", populacao1);
    printf("Área [km²]: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pto_tur1);
    printf("Densidade populacional [habitantes / km²]: %.2f\n", den_pop1);
    printf("PIB per Capta [R$ / habitantes]: %.2f\n", pib_cap1);
    printf("\n__________________________________________________________________________________________________________\n\n"); 


    printf("Comparativo entre as características inseridas e os valores da Cidade de Referência:\n");
    printf("Se o valor da característica da cidade inserida for maior que o da \n");
    printf("cidade de referência será retornado o valor '1', caso contrário '0' \n\n");
    printf("População: %d\n", populacao > populacao1);
    printf("Área: %d\n", area > area1);
    printf("PIB: %d\n", PIB > PIB1);
    printf("Pontos turísticos: %d\n", pto_tur > pto_tur1);
    printf("Densidade populacional: %d\n", den_pop > den_pop1);
    printf("PIB per Capta: %d\n\n", pib_cap > pib_cap1);
    printf("\n__________________________________________________________________________________________________________\n\n"); 



    return 0;
}