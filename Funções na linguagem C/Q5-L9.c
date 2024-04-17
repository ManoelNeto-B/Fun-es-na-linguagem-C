/*5. Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se ele é, ou não, múltiplo de 5.*/

#include <stdio.h>
#include <locale.h>

void multiplo(int x);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x;

    printf("informe o valor para saber se ele é múltiplo de 5:  ");
    scanf("%i", &x);

    multiplo(x);

    return (0);
}

void multiplo(int x)
{

    if (x % 5 == 0)
    {
        printf("este número é multiplo de 5");
    }
    else
    {
        printf("este número não é múltiplo de 5");
    }
}
