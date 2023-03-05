#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int elemento;
   struct no  *proximo;

}No;

typedef struct pilha
{
    struct no *topo;
}pilha;


void empilhar(int dado, pilha *valor)
{
    No *novo = (No*)malloc(sizeof(No));
    if(novo != NULL)
    {
        novo -> elemento = dado;
        novo->proximo = valor->topo;
        valor-> topo = novo ;
    }
   
   
}

int desempilhar(pilha *valor)
{
    No* novo = valor -> topo;
    int elemento;
    if(novo != NULL)
    {
        valor-> topo = novo -> proximo;
        novo->proximo = NULL;
        elemento = novo -> elemento;
        free(novo);
        return elemento;

    }
}

void imprimir(pilha *valor)
{
    No* novo = valor -> topo;
    if(novo != NULL)
    {
        while (novo != NULL)
        {
            printf("%d ", novo->elemento);
            novo = novo->proximo;
        }
        
    }
}

int main()
{
    pilha *p;
    int valor;

    // menu abaixo
    do{
        printf("insira o valor:\n0 eh a condicao de parada\n");
        scanf("%d", &valor);
        if(valor != 0)
        {
            empilhar(valor, p);
           
        }
    }while (valor != 0);

            imprimir(p);

printf("\n");
            desempilhar(p);
            imprimir(p);
}



