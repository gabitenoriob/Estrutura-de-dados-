#include <stdio.h>
#include <stdlib.h>


typedef struct no
{
   int conteudo;
   struct no *esquerdo, * direita;
   
}No;

typedef struct arvore_binaria
{
    No *raiz;
    
}arvb;

int tamanho(No *raiz)
{
    if(raiz == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + tamanho(raiz->esquerdo) + tamanho(raiz->direita);
    }
}
void esquerda( No *no, int valor)
{
    //recebe a raiz e o valor e deve inserir a esquerda desse no,mas ja pode ter alguem a esquerda da raiz
    if(no -> esquerdo == NULL)
    {
        
        No *novo =(No*) malloc(sizeof(No));
        novo -> conteudo = valor;
        novo -> esquerdo = NULL;
        novo -> direita= NULL;

        no->esquerdo = novo;
    }
    else
    {
        if(valor < no-> esquerdo-> conteudo)
        {
            esquerda(no->esquerdo,valor);
        }
        // se for maior deve ficar a direita 
        if(valor > no-> esquerdo-> conteudo)
        {
            direita(no->esquerdo, valor);
        }
    }
}
void direita( No *no, int valor)
{
    if(no->direita == NULL)
    {
        
        No *novo =(No*) malloc(sizeof(No));
        novo -> conteudo = valor;
        novo -> esquerdo = NULL;
        novo -> direita= NULL;

        no -> direita = novo;
    }
    else
    {
        if(valor > no-> direita -> conteudo)
        {
            direita(no->direita, valor);
        }
        if(valor < no-> direita -> conteudo)
        {
            esquerda(no->direita,valor);
        }
    }
}
void inserir (arvb * arvore_binaria, int valor)
{
    //inserir 1 elemento 
    if(arvore_binaria-> raiz == NULL)
    {
        No *novo =(No*) malloc(sizeof(No));
        novo -> conteudo = valor;
        novo -> esquerdo = NULL;
        novo -> direita= NULL;

        arvore_binaria -> raiz = novo;
    }
    //inserir qq elemento q n seja o 1 , a esquerda ou a direita p ver se é menor ou maior 
    else
    {
        if(valor < arvore_binaria -> raiz -> conteudo)
        {
            esquerda(arvore_binaria->raiz,valor);
        }
        else
        {
            direita(arvore_binaria->raiz,valor);
        }
    }
}
void imprimir(No *raiz)
{
    if(raiz != NULL)
    {
        imprimir(raiz-> esquerdo);
        printf("%d ", raiz-> conteudo);
        imprimir(raiz->direita);
    }
}
int main()
{
    int  valor;
    arvb arvore;
    arvore.raiz = NULL;

    do{
        printf("insira o valor a inserir:\n 0 eh a condicao de parada\n");
        scanf("%d", &valor);
        if(valor !=0)
        {
        inserir(&arvore, valor);
        }
    }while (valor != 0);

    imprimir(arvore.raiz);
    printf("essa eh a qntd de nos %d", tamanho(arvore.raiz));


   
}