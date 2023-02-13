#include <stdio.h>

int main()
{
    int vetor[10];
    printf("escreva seu vetor, saiba que o digito 0 será sua condição de parada\n\n");
    int i = 0;
    int soma = 0;
    int contador = -1;

    while(contador != 0)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] != 0)
        {
        soma += vetor[i];
        }
        else
        {
            contador = 0;
        }
        i++;

    }
    
    printf("essa é a soma %d", soma);
  
   
    
}