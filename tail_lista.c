#include <stdio.h>

int main()
{
    int v1[10];

    printf("escreva seu vetor e utilize 0 como condição de parada");

    int parada,i = 0;
    int cauda[10] = {0};
    while (parada != 1)
    {
        scanf("%d", &v1[i]);
        if(v1[i] == 0)
        {
            parada = 1;
        }
        else if(i != 0)
        {
            //printf("%d", v1[i]);
            // ou
            cauda[i - 1] = v1[i];
        }
            i++;

    }

    for(int j = 0; j < i - 2 ; j++)
    {
        printf("%d", cauda[j]);
    }
    
}