#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char string[100];
    char letra;
    printf("escreva uma frase:\n");
    scanf("%[^\n]", string);
    printf("escreva a letra q vc quer procurar na frase:\n");
    scanf(" %c", &letra);

    int tamanho = strlen(string);
    for(int i = 0; i < tamanho; i++)
    {
        if(string[i] == letra)
        {
            printf("yes\n");
            break;
        }
        if(i == tamanho -1 && string[i] != letra)
        {
            printf("no\n");
        }

    }



}