#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char num[3];
    printf("Escreva um numero:\n");
    scanf("%[^\n]", num);
    int tamanho = strlen(num);
    

    if(num[tamanho - 3] == '1')
    {
        printf("mil ");
    }
    if(num[tamanho - 3] == '2')
    {
        printf("dois mil ");
    }
    if(num[tamanho - 3] == '3')
    {
        printf("tres mil ");
    }
    if(num[tamanho - 3] == '4')
    {
        printf(" quatro mil ");
    }
    if(num[tamanho - 3] == '5')
    {
        printf("cinco mil ");
    }
    if(num[tamanho - 3] == '6')
    {
        printf("seis mil ");
    }
    if(num[tamanho - 3] == '7')
    {
        printf("sete mil ");
    }
    if(num[tamanho - 3] == '8')
    {
        printf("oito mil ");
    }
    if(num[tamanho - 3] == '9')
    {
        printf("nove mil ");
    }
    if(num[tamanho - 2] == '1')
    {
        printf("cento e ");
    }
    if(num[tamanho - 2] == '2')
    {
        printf("duzentos e ");
    }
     if(num[tamanho - 2] == '3')
    {
        printf("trezentos e ");
    }
     if(num[tamanho - 2] == '4')
    {
        printf("quatrocentos e ");
    }
     if(num[tamanho - 2] == '5')
    {
        printf("quinhentos e ");
    }
     if(num[tamanho - 2] == '6')
    {
        printf("seicentos e ");
    }
     if(num[tamanho - 2] == '7')
    {
        printf("setecentos e ");
    }
     if(num[tamanho - 2] == '8')
    {
        printf("oitocentos e ");
    }
     if(num[tamanho - 2] == '9')
    {
        printf("novecentos e ");
    }
     if(num[tamanho - 1] == '1')
    {
       //onze doze treze 
    }
     if(num[tamanho - 1] == '2')
    {
        printf("vinte");
    }
    if(num[tamanho - 1] == '3')
    {
        printf("trinta");
    }
    if(num[tamanho - 1] == '4')
    {
        printf("quarenta");
    }
    if(num[tamanho - 1] == '4')
    {
        printf("cinquenta");
    }
    if(num[tamanho - 1] == '6')
    {
        printf("sessenta");
    }
    if(num[tamanho - 1] == '7')
    {
        printf("setenta");
    }
    if(num[tamanho - 1] == '8')
    {
        printf("oitenta");
    }
    if(num[tamanho - 1] == '9')
    {
        printf("noventa");
    }
    if(num[tamanho] == '1')
    {
        printf("um\n ");
    }
     if(num[tamanho] == '2')
    {
        printf("dois\n ");
    }
     if(num[tamanho] == '3')
    {
        printf("tres\n ");
    }
     if(num[tamanho] == '4')
    {
        printf("quatro\n ");
    }
     if(num[tamanho] == '5')
    {
        printf("cinco\n ");
    }
     if(num[tamanho] == '6')
    {
        printf("e seis\n ");
    }
     if(num[tamanho] == '7')
    {
        printf("e sete\n ");
    }
     if(num[tamanho] == '8')
    {
        printf("e oito\n ");
    }
     if(num[tamanho] == '9')
    {
        printf("e nove\n ");
    }

    
    


}