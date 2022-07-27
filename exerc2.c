#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char nome[50];
    char endereco[50];
    char telefone[12];

} Cadastro;

int caracteres(Cadastro *c) // funcao que conta apenas a quantidade de caracteres dentro da estrutura
{
    int cc = 0;
    for (int qntd = 0; qntd < strlen(c->nome); qntd++)// conta o laco FOR para o tamanho da string digitada
    {
        if (isalpha(c->nome[qntd]))
        {
            cc = cc + 1;
            if (isalpha(c->endereco[qntd]))
            {
                cc = cc + 1; // conta caracteres
            }
        }
    }
    return cc; //retorna a quantidade de caracteres
}

int cdigitos(Cadastro *c)
{
    int cd = 0;
    int a, b;
    a = (strlen(c->endereco));
    b = (strlen(c->telefone));
    for (int qntd = 0; qntd < a; qntd++)
    {
        if (isdigit(c->endereco[qntd])&&(c->endereco[qntd]!='\n')
                &&(c->endereco[qntd]!=NULL))
        {
            cd = cd + 1;
        }
    }
    for (int qntd = 0; qntd < b; qntd++)
    {
        if (isdigit(c->telefone[qntd])&&(c->telefone[qntd]!='\n')
                &&(c->telefone[qntd]!=NULL))
        {
            cd = cd + 1; // conta digitos
        }
    }

    return cd;
}
void insere(Cadastro *c){
    for(int i = 0; i < strlen(c->nome); i++){
        c->nome[i] = NULL;
        c->endereco[i]=NULL;
        c->telefone[i]=NULL;
    }
}

int main()
{
    Cadastro pessoa;
    insere(&pessoa);
    size_t contc = 0;
    size_t contd = 0;
    size_t acumuladorc = 0;
    size_t acumuladord = 0;
    int crct,dgts;

    printf("\n Digite o Nome da Pessoa a ser cadastrada \n");
    fflush(stdin);
    fgets(pessoa.nome, 50, stdin);
    fflush(stdin);
    printf("\n Agora o endereco da Pessoa registrada\n");
    fflush(stdin);
    fgets(pessoa.endereco, 50, stdin);
    fflush(stdin);
    printf("\n Numero Telefonico separado por - \n");
    fgets(pessoa.telefone, 12, stdin); // Formula ignora novas linhas  e conta até 12 caracteres
    fflush(stdin);
    crct = caracteres(&pessoa);
    dgts = cdigitos(&pessoa);
    
    printf("\nQuantidade de Caracteres é:%d\n\n\n", crct);
     printf("\nQuantidade de Digitos   é:%d\n\n\n", dgts);
    return 0;
}