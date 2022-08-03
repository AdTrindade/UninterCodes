#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char RUtemp[8] = {0};
    int cn, cnt = 0;
    int temp;
    printf("Insira o numero de RU do usuario\n");
    fgets(RUtemp,8,stdin);   
    printf("%s\n", RUtemp);
    cnt = strlen(RUtemp);
    printf("cn = %d\n", cn);
    fflush(stdin);
     
//Funcao recursiva
    for (int i = 0; i < cnt; i++)
    {
        for (int j = i + 1; j < cnt; j++)
        {
            if (isdigit(RUtemp[j]) && isdigit(RUtemp[i])) // nao ordena caracteres que nao sejam numericos
            {
                if (RUtemp[j] < RUtemp[i])
                {
                    temp = RUtemp[i];      // guarda valor temporariamente para a troca
                    RUtemp[i] = RUtemp[j]; // realiza troca de maior com menor
                    RUtemp[j] = temp;
                }
            }
        }
    }

   printf("num 1=%c\nnum 2=%c\nnum 3 =%c\nnum 4 =%c\nnum 5 =%c\nnum 6 =%c\nnum 7 =%c\n",RUtemp[0],RUtemp[1],RUtemp[2],RUtemp[3],RUtemp[4],RUtemp[5],RUtemp[6]);
}
