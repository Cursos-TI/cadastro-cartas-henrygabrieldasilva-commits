#include <stdio.h>

int main () {

    printf("Desafio Cartas Super Trunfo! \n");

    char codigo[50] = "BA01"; //Codigo da cidade N1
    char estado[50] = "Bahia"; //Nome do estado da carta N1
    char cidade[50] = "salvador"; //Nome da cidade da carta N1
    int habitantes = 2600000; //Numero de habitantes da cidade N1
    float area = 693.83; // Area aproximada da cidade N1
    float PIB =62.95; //PIB aproximado da cidade N1 em (Bilhões)
    int pontos = 50; //Numero aproximado de pontos turisticos 
    //Aqui esta os elementos que vao estar atrelados a carta N1 com seus valores 
    

    printf("Codigo da Carta N1: %s \n", codigo); //imprimindo o codigo da carta
    printf("Estado da carta N1: %s \n", estado); //imprimindo estado da carta
    printf("Cidade da carta N1: %s \n", cidade); //imprimindo cidade da carta
    printf("Numero de habitantes N1: %d \n", habitantes); //imprimindo numero de habitantes
    printf("Area da cidade N1: %.2f Km² \n", area); //imprimindo a area da cidade 
    printf("PIB da cidade N1: %.2f Bilhões \n", PIB); //imprimindo PIB da cidade 
    printf("Pontos turisticos N1: %d \n", pontos); //imprimindo pontos da cidade 
    //Aqui estou passando as informações da carta N1 para o terminal


    char codigob[50] = "BE02";//codigo da carta N2
    char estadob[50] = "Pará";//Estado da carta N2
    char cidadeb[50] = "Belém";//Cidade da carta N2
    int habitantesb  = 1303403;//Numero de habitantes carta N2
    float areab = 1.059;//Area da cidade N2
    float PIBb = 33.4;//PIB da cidade N2
    int pontosb = 40;//Media de pontos turisticos da cidade N2
    // aqui estao as informações que serao impressas na carta N2


    printf("Codigo da carta N2: %s \n", codigob);
    printf("Estado da carta N2: %s \n", estadob);
    printf("Cidade da carta N2: %s \n", cidadeb);
    printf("Numero de habitantes N2: %d \n", habitantesb);
    printf("Area da cidade N2: %.2f Km²\n", areab);
    printf("PIB da cidade N2: %.2f Bilhões\n", PIBb);
    printf("Pontos turisticos N2: %d \n", pontosb);
    //Aqui estou imprimindo as informações da carta N2 para o terminal

    return 0;









}