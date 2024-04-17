/*1. Implemente uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se é, ou não, igual a zero.*/

#include <stdio.h>
#include <locale.h>

void cont(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("Para realizar a checagem informe o valor:  ");
    scanf("%i", &x);

    cont(x);

    return (0);
}

void cont(int x)
{

    if (x == 0)
    {
        printf("seu número é zero");
    }
    else
    {
        printf("seu número é diferente de zero");
    }
}