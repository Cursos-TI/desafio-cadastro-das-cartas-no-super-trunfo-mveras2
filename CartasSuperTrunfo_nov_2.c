#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparando Cartas do Super Trunfo
// Este código incluirá à primeira fase as estruturas de decisão.



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, Código da cidade, Nome da Cidade, População, Área, PIB, número de pontos turísticos.
    
    // Instruções da Fase 2
    // Receber os dados de duas cartas
    // Implementar a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico 
    
//_________________________________________________________________________________________________________________________

    //Declaração das variáveis
    /*para evitar que as variáveis criadas passuam valores indesejados as variáveis serão declaradas já com um valor que
    será substituido durante o programa*/
    //Carta 1
    char estado;
    char nome_estado[20];                     //Tema2 - nova variável para Nome do Estado
    char nome_cidade[20];                     //Tema2 - nova variável para Nome da Cidade
    int cidade = 0, pto_tur=0;      
    float area = 0, PIB =0, populacao = 0;      
    float den_pop = 0, pib_cap = 0;           //Tema1 - novas variáveis para o nível Aventureiro
    //Carta 2
    char estado2;
    char nome_estado2[20];                    
    char nome_cidade2[20];                    
    int cidade2 = 0, pto_tur2=0;      
    float area2 = 0, PIB2 =0, populacao2 = 0;      
    float den_pop2 = 0, pib_cap2 = 0;  


    //Cabeçalho do terminal
    printf("_________________________________________________________________________________________________________\n");
    printf("//                              Desafio Super Trunfo - Tema 2 - Novato                                  //\n");
    printf("//           Essa rotina coleta-rá os valores correspondentes de cada uma das cartas.                   //\n");
    printf("__________________________________________________________________________________________________________\n\n");

    /* Para facilitar a utilização da rotina pelo operador, antes de cada variável será apresentada
    uma instrução do que se espera coletar*/
    
    //Identificação da Carta 1
    printf("____________________________________________________________________________________________\n");
    printf("//                              Inserir Dados da Carta 1                                   //\n");
    printf("____________________________________________________________________________________________\n");
    printf("Para a identificação do Estado utilize uma letra de A-H: \n");
    scanf("%c", &estado);
    //Tema 2 - Inserindo o nome do Estado
    printf("Insira o nome do Estado: \n");
    scanf("%s", nome_estado);
    printf("Para a identificação da Cidade utilize uma valor entre 1-4: \n");
    scanf("%d", &cidade);
    //Tema 2 - Inserindo o nome da Cidade
    printf("Insira o nome da Cidade: \n");
    scanf("%s", nome_cidade);
    printf("Inserir o tamanho da população [mil de habitantes]:\n");
    scanf("%f", &populacao);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area);
    printf("Inserir o PIB da cidade [milhões de R$]:\n");
    scanf("%f", &PIB);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur);


    printf("____________________________________________________________________________________________\n");
    printf("//                              Inserir Dados da Carta 2                                   //\n");
    printf("____________________________________________________________________________________________\n");
    
    printf("Para a identificação do Estado utilize uma letra de A-H: \n");
    scanf("%c", &estado2);
    //Tema 2 - Inserindo o nome do Estado
    printf("Insira o nome do Estado: \n");
    scanf("%s", nome_estado2);
    printf("Para a identificação da Cidade utilize uma valor entre 1-4: \n");
    scanf("%d", &cidade2);
    //Tema 2 - Inserindo o nome da Cidade
    printf("Insira o nome da Cidade: \n");
    scanf("%s", nome_cidade2);
    printf("Inserir o tamanho da população [mil de habitantes]:\n");
    scanf("%f", &populacao2);
    printf("Inserir o tamanho da área da cidade [km²]:\n");
    scanf("%f", &area2);
    printf("Inserir o PIB da cidade [milhões de R$]:\n");
    scanf("%f", &PIB2);
    printf("Inserir o número de pontos turísticos da cidade:\n");
    scanf("%d", &pto_tur2);

    //Cálculo da densidade populacional e o PIB per capta

    den_pop = populacao / area;
    pib_cap = PIB*1000 / populacao;

    den_pop2 = populacao2 / area2;
    pib_cap2 = PIB2*1000 / populacao2;
    

    //Definição do atributo para comparação
    printf("\n//_______________________________________________________________________________________________________//");
    printf("\n// Escolha o valor equivalente para o atributo da Carta a ser utilizado na compuaração:                  //");
    printf("\n// 1 - População                                                                                         //");
    printf("\n// 2 - Área                                                                                              //");
    printf("\n// 3 - PIP                                                                                               //");
    printf("\n// 4 - Pontos Turísticos                                                                                 //");
    printf("\n// 5 - Desnsidade Populacional                                                                           //");
    printf("\n// 6 - PIB per Capta                                                                                     //");
    printf("\n//_______________________________________________________________________________________________________//\n");

    int atributo = 0;
    scanf("%d\n", &atributo);

    printf("\n//_______________________________________________________________________________________________________//\n");


    //Rotina de comparação e escolha da Carta ganhadora 

    if (atributo = 1) {
        if (populacao > populacao2){
            printf("A Carta 1 é a ganhadora");
        } else
            printf("A Carta 2 é a ganhadora");  
        } 
    else { if (atributo = 2){
                if (area > area2){
                printf("A Carta1 é a ganhadora");
                } else 
                printf("A Carta 2 é a ganhadora");
                }
            else { if (atributo = 3){
                        if (PIB > PIB2){
                        printf("A Carta1 é a ganhadora");
                        } else
                        printf("A Carta 2 é a ganhadora");
                        }
                    else { if (atributo = 4){
                            if (pto_tur > pto_tur2){
                            printf("A Carta1 é a ganhadora");
                            } else
                            printf("A Carta 2 é a ganhadora");
                            }
                            else { if (atributo = 5){
                                    if (den_pop > den_pop2){
                                    printf("A Carta1 é a ganhadora");
                                    } else
                                    printf("A Carta 2 é a ganhadora");
                                    }   
                                    else { if (pib_cap > pib_cap2)
                                            printf("A Carta1 é a ganhadora");
                                            else 
                                            printf("A Carta 2 é a ganhadora");
                                        }
}}}}



    //Retorna os valores inseridos
/*
    printf("\n__________________________________________________________________________________________________________\n\n");
    printf("Resumo das informações inseridas para cada carta:\n");
    printf("País/Cidade: %c0%d\n", estado, cidade);
    printf("População [mil de habitantes]: %.2f\n", populacao);
    printf("Área [km²]: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", pto_tur);
    //apresentação das variáveis do nível aventureiro
    printf("Densidade populacional [habitantes / km²]: %.2f\n", den_pop);
    printf("PIB per Capta [R$ / habitantes]: %.2f\n", pib_cap);
    printf("\n__________________________________________________________________________________________________________\n\n"); 
*/
    return 0;
}