#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// FALTA VALIDAR ERRO

int tipo( char num[100])
{
    int tamanho = strlen(num);

    for(int i = 0; i < tamanho; i++)
    {
        if(num[i] == ',')
        {
            float numero = atof(num);
            if(num[i + 1] != '0')
            {
            printf("NÚMERO REAL\n");
            return 1;
            }
            else 
            {
                if(numero >=0 && numero<= 10)
                {
                 printf("NÚMERO NATURAL\n");

                }
                else
                {
                    printf("NUMERO INTEIRO\n");
                }
            return 1;
            }
        }
        
    }

  
    int numero = atoi(num);
    if(numero < 0 || numero > 10)
    {
        printf("NUMERO INTEIRO\n");
        return 1;
    }
    else if(numero >=0 && numero<= 10)
    {
        printf("NUMERO NATURAL\n");
        return 1;
    }
    else
    {
        return 0;
    }
    

    

}

int main()
{
    char numero[100];
    printf("Escreva qual número voce deseja verificar o TIPO:");
    scanf("%[^\n]", numero);

    if(tipo(numero) == 0)
    {
        printf("ERROR\n");
    }
    


}