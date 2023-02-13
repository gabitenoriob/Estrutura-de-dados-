#include <stdio.h>

// REFAZER
int main()
{
    int cpf[10];
    printf("Digite seu CPF, sem o uso de pontuação, apenas número\n");
    int soma = 0;
    int contador = 10;

    for(int i = 0; i < 11; i++)
    {
        scanf("%d", &cpf[i]);
        if(i < 9)
        {
            soma += cpf[i] * contador;
            contador --;
        }
    }

    int valido = 0;
    int validacao = soma % 11;
    int dv = 11 - validacao;
    if(dv >= 10)
    {
        dv = 0;
    }
    if(dv == cpf[9])
    {
        valido++;
    }

    soma = 0;
    contador = 11;
    for(int i = 0; i < 10;i ++)
    {
        soma += cpf[i] * contador;
        contador--;
    }
    validacao = soma % 11;
    dv = 11 - validacao;
    if(dv >= 10)
    {
        dv = 0;
    }
    if(dv == cpf[10])
    {
        valido++;
    }

    if(valido == 2)
    {
        printf("CPF válido\n");
    }
    else
    {
        printf("CPF inválido");
    }


}