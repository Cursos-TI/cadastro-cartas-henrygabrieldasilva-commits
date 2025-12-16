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
    float densidade = (float) habitantes / area;//aqui estou aplicando a variavel para o calculo da densidade 
    float pibpercapita = (float) habitantes / PIB;//aqui estou aplicando a variavel de calculo do pib per capita da cidade
    //Aqui esta os elementos que vao estar atrelados a carta N1 com seus valores 
    

    printf("Codigo da Carta N1: %s \n", codigo); //imprimindo o codigo da carta
    printf("Estado da carta N1: %s \n", estado); //imprimindo estado da carta
    printf("Cidade da carta N1: %s \n", cidade); //imprimindo cidade da carta
    printf("Numero de habitantes N1: %d \n", habitantes); //imprimindo numero de habitantes
    printf("Area da cidade N1: %.2f Km² \n", area); //imprimindo a area da cidade 
    printf("PIB da cidade N1: %.2f Bilhões \n", PIB); //imprimindo PIB da cidade 
    printf("Pontos turisticos N1: %d \n", pontos); //imprimindo pontos da cidade 
    printf("Densidade populacional N1: %.2f hab/Km² \n", densidade);//imprimindo a variavel de calculo
    printf("PIB per capita N1: %.2f \n", pibpercapita);//imprimindo a variavel de calculo para o terminal
    //Aqui estou passando as informações da carta N1 para o terminal


    char codigob[50] = "BE02";//codigo da carta N2
    char estadob[50] = "Pará";//Estado da carta N2
    char cidadeb[50] = "Belém";//Cidade da carta N2
    int habitantesb  = 1303403;//Numero de habitantes carta N2
    float areab = 1.059;//Area da cidade N2
    float PIBb = 33.4;//PIB da cidade N2
    int pontosb = 40;//Media de pontos turisticos da cidade N2
    float densidadeb = (float) habitantesb / areab;//Aqui estou implementando a variavel de caulculo N2
    float pibpercapitab = (float) habitantesb / PIBb;//Aqui estou implementando a variavel de caulculo N2
    // aqui estao as informações que serao impressas na carta N2


    printf("Codigo da carta N2: %s \n", codigob);//imprimindo o codigo da carta N2
    printf("Estado da carta N2: %s \n", estadob);//imprimindo o estado da cartaN2
    printf("Cidade da carta N2: %s \n", cidadeb);//imprimindo a cidade da carta N2
    printf("Numero de habitantes N2: %d \n", habitantesb);//imprimindo o numero de habitantes da carta N2
    printf("Area da cidade N2: %.2f Mil Km²\n", areab);//imprimindo a area da carta N2
    printf("PIB da cidade N2: %.2f Bilhões\n", PIBb);//imprimindo o PIB da carta N2
    printf("Pontos turisticos N2: %d \n", pontosb);//imprimindo o numeor de pontos turisticos N2
    printf("Densidade populacional N2: %.2f hab/Km² \n", densidadeb);//imprimindo a variavel de calculo da N2
    printf("PIB per capita N2: %.2f \n", pibpercapitab);//imprimindo a variavel de calculo da N2 
    //Aqui estou imprimindo as informações da carta N2 para o terminal

    return 0;









}