#include <stdio.h> 

int main () {

    //Sigla do Estado
    char state1[3];
    char state2[3];
    //Codigo da carta
    char cod1[4];
    char cod2[4];
    //Nome da Cidade
    char namecity1[50];
    char namecity2[50];
    //Tamanho da população
    float numberpop1;
    float numberpop2;
    //Area
    float area1,area2;
    // Pib
    float pib1;
    float pib2;
    // numero de pontos turisticos
    int ntp1; 
    int ntp2; 

    //introdução de dados da carta 1
    printf ("Digite as informações da Carta 1: \n");
        printf ("Digite o estado:  ");
    scanf (" %2s", &state1);

    printf ("Código da carta com 3 caracteres, com a letra inicial do estado e 2 números. \n");
        printf ("Digite o código da carta: ");
    scanf (" %3s", &cod1);

    printf ("Digite a cidade:");
    scanf (" %49s", &namecity1);

    printf ("Digite a população:");
    scanf ("%f", &numberpop1);

    printf ("Digite a Area em Km²:");
    scanf("%f", &area1);

    printf("Digite o Pib:");
    scanf("%f", &pib1);

    printf ("Digite numero de pontos turisticos:");
    scanf("%d", &ntp1);


    //introdução de dados da carta 2
    printf ("Digite as informações da Carta 2: \n");
        printf ("Digite o estado:  ");
    scanf ("%2s", &state2);

    printf ("Código da carta com 3 caracteres, com a letra inicial do estado e 2 números. \n");
        printf ("Digite o código da carta: ");
    scanf ("%3s", &cod2);

    printf ("Digite a cidade:");
    scanf ("%49s", &namecity2);

    printf ("Digite a população:");
    scanf ("%f", &numberpop2);

    printf ("Digite a Area em Km²:");
    scanf("%f", &area2);

    printf("Digite o Pib:");
    scanf("%f", &pib2);

    printf ("Digite numero de pontos turisticos:");
    scanf("%d", &ntp2);


    //Mostrar informações das cartas
    printf ("Carta 1. \n");
        printf ("Estado: %s - Código da Carta: %s - Cidade: %s - População %f - Area %f KM² - PIB: %f - Pontos Turisticos: %d \n", state1, cod1, namecity1, numberpop1, area1, pib1, ntp1);

    printf ("Carta 2. \n");
        printf ("Estado: %s - Código da Carta: %s - Cidade: %s - População %fR - Area %f KM² - PIB: %f - Pontos Turisticos: %d \n", state2, cod2, namecity2, numberpop2, area2, pib2, ntp2);

    return 0;
}