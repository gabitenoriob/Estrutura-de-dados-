// dado 2 listas informe os elementos q pertencem a ambas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho (int max_tam, int vetor[])
{
    int indice = 0;

    while ((indice < max_tam) && (vetor[indice] != 0))
        indice += 1;

    return indice - 1;
}

int circular(int v1[], int v2[], int i, int j)
{
 
    if(i >= j)
    {
    
        for(int x = 0; x <= tamanho(10,v1); x++)
        {
            for(int y = 0; y <= tamanho(10,v2); y++)
            {
                if(v1[x] == v2[y])
                {
                    printf("%d ", v1[x]);
                }
            }
        }
    }
    else
    {

        for(int x = 0; x <= tamanho(10,v2); x++)
        {
            for(int y = 0; y <= tamanho(10,v1); y++)
            {
                if(v2[x] == v1[y])
                {
                    printf("%d ", v2[x]);
                }
            }
        }
    }
    
    
}

int main()
{
    int v1[10];
    printf("escreva a primeira lista, 0 é a condição de parada.\n");
    int parada = 0;

    int i = 0;
    while(parada != 1)
    {
        scanf("%d", &v1[i]);
        
        if(v1[i] == 0)
        {
           parada++;
        }
        else
        {
            i++;
        }
        
    }

    int v2[10];
    printf("escreva a segunda lista, 0 é a condição de parada.\n");
    int j = 0;
    parada = 0;
    while(parada != 1)
    {
        scanf("%d", &v2[j]);
        
        if(v2[j] == 0)
        {
            parada++;
        }
        else
        {
            j++;
        }
        
    }

   circular(v1,v2,i,j);
}
