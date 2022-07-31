#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// autor: adriano trindade adtrin@hotmail.com

/*Programa C para calcular o número de lâmpadas 60 watts necessárias para um
determinado cômodo. O programa deverá ler um conjunto de informações, tais como: tipo, largura e
comprimento do cômodo. O programa termina quando o tipo de cômodo for igual -1. A tabela abaixo
mostra, para cada tipo de cômodo, a quantidade de watts por metro quadrado.*/

//struct responsavel por armazenar os valores a serem calculados 
typedef struct
{
    int tipo;
    float largura;
    float comprimento;
} Comodo;

//Calculo da largura versus altura e retorna area

float CalculaArea(float largura, float comprimento)
{
    printf("comprimento = %f \nlargura = %f\n",largura,comprimento);
    float area = 0;
    area = ((comprimento) * (largura));
    if (area < 0)
    {
        printf("\nArea com valor incompativel\n");
    }
    else
    {
        printf("area = %f\n",area);
        return area;
    }
}
//Funcao que adota um tipo e area, sendo tipo inteiro
//area um float conforme o tipo retorna a quantidade de 
//Lampadas por metro quadrado
float Lampada(int tipo, float area)
{
    switch (tipo)
    {
    case 0:
        return (12 * area) / 60;
        break;
    case 1:
        return (15 * area) / 60;
        ;
        break;
    case 2:
        return (18 * area) / 60;
        break;
    case 3:
        return (20 * area) / 60;
        break;
    case 4:
        return (22 * area) / 60;
        break;
    }
}

int main()
{
    Comodo comodo; // instancia da struct 
    float area;    //
    int tipo,total;
    float qntd_Lampadas;
    printf("Entre com as medidas de Largura do comodo, Largura x Altura\n");
    scanf("%fx%f",&comodo.comprimento,&comodo.largura);  
    printf("valores = %1.2f,%1.2f",comodo.comprimento,comodo.largura);  
    area = CalculaArea(comodo.comprimento,comodo.largura);
    printf("\n Entre com o tipo de comodo: 1 a 5 \n");
    scanf("%d", &comodo.tipo);
    qntd_Lampadas = Lampada(comodo.tipo, area);
    total = round(qntd_Lampadas);
    printf("Quantidade de lampadas = %d\n",total);
    return 0;
}
