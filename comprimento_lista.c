#include <stdio.h>

int main()
{
    int v1[10];

    printf("escreva seu vetor e utilize 0 como condição de parada");

    int parada,i = 0;
    while (parada != 1)
    {
        scanf("%d", &v1[i]);
        if(v1[i] == 0)
        {
            parada = 1;
        }
        else
        {
            i++;
        }

    }

    printf("esse é o tamanho: %d", i - 1);
    
}