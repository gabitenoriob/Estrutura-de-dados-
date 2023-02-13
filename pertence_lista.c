#include <stdio.h>
int pertence(int vetor[], int membro, int tamanho, int percorre)
{
  
}
int main()
{
    int v1[10];

    printf("escreva seu vetor e utilize 0 como condição de parada\n");
    int parada,i = 0;
    while (parada != 1)
    {
        scanf("%d", &v1[i]);

        if(v1[i] == 0)
        {
            parada = 1;
        }
        i++;

    }
    int membro;
    printf("escreva aqui o elemento que deseja verificar se existe ou não na lista\n");
    scanf("%d", &membro);

    for(int j = 0; j < i - 1;j++)
    {
        if(v1[j] == membro)
        {
            printf("PERTENCE\n");
            j = i;
        }
        else if(j == i - 2 && v1[j] != membro)
        {
            printf("NAO\n");
        }
    }
    
    
}