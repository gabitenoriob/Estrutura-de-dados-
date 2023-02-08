// dado 2 listas informe os elementos q pertencem a ambas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho (int max_tam, int array[])
{
    int i = 0;

    while ((i < max_tam) && (array[i] != 0))
        i += 1;

    return i;
}

int circular(int v1[], int v2[], int i, int j)
{
    /*int tamanho = 0;
    if(i >= j)
    {
        tamanho = i - 1;
    }
    else
    {
        tamanho = j - 1;
    }
    printf("esse é o tamanho q ta indo %d", tamanho);

    // inicializar vetor todo c 0 int v3[tamanho] = {0};
 
    if(i >= j)
    {
    
        for(int x = 0; x <= i; x++)
        {
            for(int y = 0; y <= j; y++)
            {
                if(v1[x] == v2[y])
                {
                    v3[x] == v1[x];
                }
            }
        }
    }
    else
    {
    

        for(int x = 0; x <= j; x++)
        {
            for(int y = 0; y <= i; y++)
            {
                if(v2[x] == v1[y])
                {
                    v3[x] == v2[x];
                }
            }
        }
    }
    
    for(int p = 0; p <= tamanho; p++)
    {
        printf("%d ", v3[p]);
    }

   */

    int aux[10] = {0};
    
    int count_aux = 0;

    for (int i = 0; i < tamanho(10, v1); i++)
    {
        for (int j = 0; j < tamanho(10, v2); j++)
        {
            if (v1[i] == v2[j])
            {
                aux[count_aux] = v1[i];
                count_aux += 1;
            }
        }
        
    }
    

    for (int i = 0; i < tamanho(10, aux); i++)
        printf("pos %d = %d\n", i, aux[i]);
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
