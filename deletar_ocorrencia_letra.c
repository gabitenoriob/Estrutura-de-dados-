#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string[100];
    char letra;
    printf("escreva uma frase:\n");
    scanf("%[^\n]", string);
    printf("escreva a letra q vc quer deletar na frase:\n");
    scanf(" %c", &letra);

    int tamanho = strlen(string);
    // se fosse p deletar so a primeira ocorrencia:
    printf("eis aqui a frase sem a 1 letra:\n");
    int contador = 0;
    for(int i = 0; i < tamanho; i++)
    {
        if(string[i] == letra && contador == 0)
        {
            contador = 1;
        }
        else
        {
            printf("%c", string[i]);
        }
        if(i == tamanho - 1)
        {
            printf("\n");
        }
    }

    
//sem tds as letras
    printf("eis aqui a frase sem as letras:\n");

    for(int i = 0; i < tamanho; i++)
    {
        if(string[i] != letra)
        {
            printf("%c",string[i] );
        }
        if(i == tamanho - 1)
        {
            printf("\n");
        }
    }
}