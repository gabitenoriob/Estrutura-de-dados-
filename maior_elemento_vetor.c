#include <stdio.h>
void swap(int vetor[], int i)
{
   int aux = vetor[i];
   vetor[i] = vetor[i+1];
   vetor[i+1] = aux;
   return;
}
int bubble (int vetor[ ], int n, int  i) 
{
 if ( i==n-1) {return 0;}
 else {
    if (vetor[i]<vetor[i+1]) {
        swap(vetor,i);
      }
    bubble ( vetor, n, i+1);
}
}
int ordenar(int vetor[], int n)
{
    if (n==1) {return vetor[0];}
  else {
        bubble (vetor, n, 0);
        ordenar (vetor, n - 1);
    }
}
int main()
{
    int vetor[10];
    printf("escreva seu vetor, saiba que o digito 0 será sua condição de parada\n");
    int i = 0;
    int contador = -1;

    while(contador != 0)
    {
        scanf("%d", &vetor[i]);
        if(vetor[i] == 0)
        {
            contador = 0;
        }
        i++;

    }

    printf("esse é o maior elemento %d", ordenar(vetor,i));
}