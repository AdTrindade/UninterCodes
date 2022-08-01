#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int RUcmp[6] = {0};
    char RUtemp[6] = {0};
    int cn,cnt = 0;
    int temp;
    printf("Insira o numero de RU do usuario\n");
    fgets(RUtemp, 7, stdin);    
    int RUrdn[6] = {0};
    cn = strlen(RUtemp);
    while (cn > 0)
    {
        RUrdn[cn] = RUtemp[cn];
        cn--;
    }
    cnt = strlen(RUrdn);
    for (int i = 1; i < cnt; ++i)
    {
        for (int j = (cnt-1); j >= i; --j)
        {
            if (RUrdn[j - 1] > RUrdn[j])
            {
                temp = RUrdn[j - 1]; // guarda valor temporariamente para a troca
                RUrdn[j - 1] = RUtemp[j];
                RUrdn[j] = temp;
            }
        }

    }
    
    printf("1°[%d],2°[%d],3°[%d],4°[%d],5°[%d],6°[%d],7°[%d]\n", RUrdn[0], RUrdn[1], RUrdn[3], RUrdn[4], RUrdn[5], RUrdn[6], RUrdn[7]);
}