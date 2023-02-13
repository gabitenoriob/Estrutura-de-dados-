#include <stdio.h>
#include <string.h>

int validar(char nome[100])
{
    int tamanho = strlen(nome);

    if(tamanho == 0)
    {
        printf("Nome inválido\n");
        return 0;
    }
    else if(nome[0] == ' ')
    {
        printf("Nome inválido\n");
        return 0;
    }
   
    

    for(int i =0; i<tamanho;i++)
    {
        if(nome[i]< 65 || ( nome[i] > 90 && nome[i] < 97 ) || nome[i] > 122)//caracter aleatorio 
        {
            printf("Nome inválido");
            return 0;
        }
        else if( i == 0)
        {
             if(nome[i] >= 97 && nome[i]<= 122)//validando letra maiscula no começo
                {
                    printf("Nome inválido\n");
                    return 0;
                } 
        }
        else if(nome[i] == ' ')
        {
                if(nome[i + 1] >= 97 && nome[i + 1]<= 122)//validando letra maiscula no começo
                {
                    printf("Nome inválido\n");
                    return 0;
                } 
        }
        else if(i != 0 || nome[i -1] != ' ')
        {
            if(nome[i] >= 65 && nome[i]<= 90)//validando letra maiscula no meio do nome
                {
                    printf("Nome inválido\n");
                    return 0;
                } 
        }
        else
        {
            return 1;
        }
    }
    
}
int main()
{
    char nome[100];
    printf("Digite seu nome\n");

    scanf("%[^\n]",nome);
    //printf("Confirma nome? %s", nome);

    if(validar(nome) == 1)
    {
        printf("NOME VÁLIDO\n\n");
    }



}