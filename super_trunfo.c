#include <stdio.h>

int main () {

    printf("Desafio Cartas Super Trunfo! \n");

    char codigoN1[50] = "BA01"; //Codigo da cidade N1
    char estadoN1[50] = "Bahia"; //Nome do estado da carta N1
    char cidadeN1[50] = "salvador"; //Nome da cidade da carta N1
    unsigned long int habitantesN1 = 2600000; //Numero de habitantes da cidade N1
    float areaN1 = 693.83; // Area aproximada da cidade N1
    float PIBN1 =62.95; //PIB aproximado da cidade N1 em (Bilhões)
    int pontosN1 = 50; //Numero aproximado de pontos turisticos 
    float densidadeN1 = (float) habitantesN1 / areaN1;//aqui estou aplicando a variavel para o calculo da densidade 
    float pibpercapitaN1 = (float) habitantesN1 / PIBN1;//aqui estou aplicando a variavel de calculo do pib per capita da cidade
    int inversodadensidadeN1 = densidadeN1 / 1;//Aqui estou calculando o numero inverso da densidade
    float SuperPoderN1 = (float) habitantesN1 + areaN1 + PIBN1 + pontosN1 + inversodadensidadeN1 + pibpercapitaN1;
    //Aqui estou fazendo o calculo da Super Poder da Carta N1
    //Aqui esta os elementos que vao estar atrelados a carta N1 com seus valores 
    
    printf("Codigo da Carta N1: %s \n", codigoN1); //imprimindo o codigo da carta
    printf("Estado da carta N1: %s \n", estadoN1); //imprimindo estado da carta
    printf("Cidade da carta N1: %s \n", cidadeN1); //imprimindo cidade da carta
    printf("Numero de habitantes N1: %d \n", habitantesN1); //imprimindo numero de habitantes
    printf("Area da cidade N1: %.2f Km² \n", areaN1); //imprimindo a area da cidade 
    printf("PIB da cidade N1: %.2f Bilhões \n", PIBN1); //imprimindo PIB da cidade 
    printf("Pontos turisticos N1: %d \n", pontosN1); //imprimindo pontos da cidade 
    printf("Densidade populacional N1: %.2f hab/Km² \n", densidadeN1);//imprimindo a variavel de calculo
    printf("PIB per capita N1: %.2f \n", pibpercapitaN1);//imprimindo a variavel de calculo para o terminal
    printf("O Super Poder da carta N1 é: %.2f \n", SuperPoderN1);
    //Aqui estou passando as informações da carta N1 para o terminal


    char codigoN2[50] = "BE02";//codigo da carta N2
    char estadoN2[50] = "Pará";//Estado da carta N2
    char cidadeN2[50] = "Belém";//Cidade da carta N2
    int habitantesN2  = 1303403;//Numero de habitantes carta N2
    float areaN2 = 1059;//Area da cidade N2
    float PIBN2 = 33.4;//PIB da cidade N2
    int pontosN2 = 40;//Media de pontos turisticos da cidade N2
    float densidadeN2 = (float) habitantesN2 / areaN2;//Aqui estou implementando a variavel de caulculo N2
    float pibpercapitaN2 = (float) habitantesN2 / PIBN2;//Aqui estou implementando a variavel de caulculo N2
    int inversodadensidadeN2 = densidadeN2 / 1;//Aqui estou invertendo o resultado da densidade
    float SuperPoderN2 = (float) habitantesN2 + areaN2 + PIBN2 + pontosN2 + inversodadensidadeN2 + pibpercapitaN2;
    //Aqui estou fazendo o calculo da Super Poder da Carta N2
    // aqui estao as informações que serao impressas na carta N2


    printf("Codigo da carta N2: %s \n", codigoN2);//imprimindo o codigo da carta N2
    printf("Estado da carta N2: %s \n", estadoN2);//imprimindo o estado da cartaN2
    printf("Cidade da carta N2: %s \n", cidadeN2);//imprimindo a cidade da carta N2
    printf("Numero de habitantes N2: %d \n", habitantesN2);//imprimindo o numero de habitantes da carta N2
    printf("Area da cidade N2: %.2f Mil Km²\n", areaN2);//imprimindo a area da carta N2
    printf("PIB da cidade N2: %.2f Bilhões\n", PIBN2);//imprimindo o PIB da carta N2
    printf("Pontos turisticos N2: %d \n", pontosN2);//imprimindo o numeor de pontos turisticos N2
    printf("Densidade populacional N2: %.2f hab/Km² \n", densidadeN2);//imprimindo a variavel de calculo da N2
    printf("PIB per capita N2: %.2f \n", pibpercapitaN2);//imprimindo a variavel de calculo da N2 
    printf("O Super Poder da carta N2 é: %.2f \n", SuperPoderN2);
    //Aqui estou imprimindo as informações da carta N2 para o terminal

    printf("Comparação das Cartas: \n");

    //Implementando as variaveis para comparação das cartas 
    int ResultadoPopulacao = habitantesN1 > habitantesN2;
    int ResultadoArea = areaN1 > areaN2;
    int ResultadoPIB = PIBN1 > PIBN2;
    int ResultadoPontos = pontosN1 > pontosN2;
    int ResultadoDensidade = densidadeN1 < densidadeN2;
    int ResultadoPIBpercapita = pibpercapitaN1 > pibpercapitaN2;
    int ResultadoSuperPoder = SuperPoderN1 > SuperPoderN2;

    printf("População: Carta N1 Venceu (%d)\n", ResultadoPopulacao);
    printf("Aréa: Carta N2 Venceu (%d)\n", ResultadoArea);
    printf("PIB: Carta N1 Venceu (%d)\n", ResultadoPIB);
    printf("Pontos: Carta N1 Venceu (%d)\n", ResultadoPontos);
    printf("Densidade: Carta N2 Venceu (%d)\n", ResultadoDensidade);
    printf("PIB per capita: Carta N1 Venceu (%d)\n", ResultadoPIBpercapita);
    printf("Super Poder: Carta N1 Venceu (%d)\n", ResultadoSuperPoder);

    printf("A Carta Vitoriosa e a N1!!!\n");


    
    return 0;









}