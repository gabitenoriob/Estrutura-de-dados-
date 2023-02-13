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

    printf("essa  é a cabeça/ vetor na posição 0: %d", v1[0]);
    
}