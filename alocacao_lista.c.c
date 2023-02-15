#include <stdio.h>
#include <stdlib.h>

//defininbdo informaçao e ponteiro p o prox elemento da lista
typedef struct {
char inf;
struct no *prox;
//scruct no *pre;
}no;

//ver se lista tavazia 

int vazia(no* head)
{
    // se tiver vazio retorna 1 e entra nos ifs
    return (int) (head == NULL);
}

no *add_node (no *head, char elem)
{
    no *novo_no = (no *) malloc(sizeof(no));

    if (vazia(novo_no))
    {
        exit(1);
    }

    novo_no->inf = elem; 
    //inserir no comeco
    novo_no->prox = head;
   // se quiser inserir no inicio return novo_no;

   
    // inserir no fim 
    novo_no->prox = NULL;



// p inserir no final:
    /*
    if (vazia(head))
    {
        return novo_no;
    }
    else
    {
        no *aux = head;

        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }
        
        aux->prox = novo_no;

        return head;
    }
    */
    
}

int tamanho (no *head)
{
    int tam = 0;

    while (head != NULL)
    {
        tam += 1;
        head = head->prox;
    }
    
    return tam;
}

void print_lista (no *head)
{
    while (head != NULL)
    {
        if (head->prox != NULL)
        {
            printf("%c", head->inf);
        }
        else
        {
            printf("%c\n", head->inf);
        }
        
        head = head->prox;
    }
    
}

int main()
{
    no* head = NULL;

    printf("Digite um nome: ");
    while (1)
    {
        char c;
        scanf("%c", &c);

        if (c == '\n')
        {
            break;
        }
        

        head = add_node(head, c);


    }
    
    printf("\n\nLista: ");
    print_lista(head);
    printf("tamanho da lista: %d\n", tamanho(head));
    if(vazia(head))
    {
        printf("lista vazia");
    }
    else // se n ta vazia printa a cabeça 
    {
        printf("lista nao vazia, %c", head->inf);
    }
}
