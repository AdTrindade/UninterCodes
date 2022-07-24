#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    const char nome[30];
    const char endereco[50];
    char telefone[12];
    int numtelefone[12];
    
    

} Cadastro;

int main()
{
    Cadastro pessoa;
    size_t contc = 0;
    size_t contd = 0;
    size_t acumuladorc = 0;
    size_t acumuladord = 0;
    int a;
    
    printf("\n Digite o Nome da Pessoa a ser cadastrada \n");
    fflush(stdin);
    fgets(pessoa.nome, 30, stdin);
    fflush(stdin);
    printf("\n Agora o endereco da Pessoa registrada\n");
    fflush(stdin);
    fgets(pessoa.endereco, 50, stdin);
    fflush(stdin);
    printf("\n Numero Telefonico separado por - \n");
    fgets(pessoa.telefone,12,stdin);// Formula ignora novas linhas  e conta até 12 caracteres
    contc = strlen(pessoa.nome);
    contd = strlen(pessoa.telefone);
for(int i = 0; i < strlen(pessoa.telefone); i++){
      
       pessoa.numtelefone[i]=pessoa.telefone[i];
       printf ("indice = (%d) \n valor contido no vetor = (%c) \n",i, pessoa.numtelefone[i]);


}


    if (contc != 0)
    {
        for (int i = 0; i <= contc; i++)
        {
            if (isalpha(pessoa.nome[i]))
            {
                acumuladorc = acumuladorc + 1;
            }

            if (isalpha(pessoa.endereco[i]))
            {
                acumuladorc = acumuladorc + 1;
            }

            if (isdigit(pessoa.endereco[i]))
            {
                acumuladord = acumuladord + 1;
            }
            for (int e = 0; e < contd; e++)
            {
                if (isdigit(pessoa.telefone[e]))
                {
                    acumuladord = acumuladord + 1;
                }
            }

-        }
        printf("\n Quantidade de caracteres foi: %d e a quantidade de digitos foi %d \n", acumuladorc, acumuladord);
    }
    return 0;
}